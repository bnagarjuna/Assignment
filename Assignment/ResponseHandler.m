//
//  ResponseHandler.m
//  Assignment
//
//  Created by nagarjuna on 09/08/18.
//  Copyright © 2018 nagarjuna. All rights reserved.
//


#import "ResponseHandler.h"
#import "City.h"
@implementation ResponseHandler
+(void) processRequest:(NSMutableURLRequest *) theRequest WithCompletionHandler:(void(^)(NSArray* array ,NSString *title, NSError * theError))reponseCompletion{
    [NSURLConnection sendAsynchronousRequest:theRequest queue:[NSOperationQueue mainQueue] completionHandler:^(NSURLResponse * _Nullable response, NSData * _Nullable data, NSError * _Nullable connectionError) {
        
        if (connectionError) {
            reponseCompletion(nil, nil,connectionError);
            return ;
        }
        
        NSHTTPURLResponse *httpResponse = (NSHTTPURLResponse *) response;
        if (httpResponse.statusCode != 200) {
            reponseCompletion(nil,nil,[NSError errorWithDomain:@"custom domain" code:000 userInfo:@{NSLocalizedDescriptionKey:@"Request Error"}]);
            return;
        }
        
        if (data == nil) {
            reponseCompletion(nil,nil,[NSError errorWithDomain:@"custom domain" code:000 userInfo:@{NSLocalizedDescriptionKey:@"Data Error"}]);
            return;
        }
        
        NSError * theJsonError = nil;
        
        NSString *iso = [[NSString alloc] initWithData:data encoding:NSISOLatin1StringEncoding];
        
        NSData *datautf8 = [iso dataUsingEncoding:NSUTF8StringEncoding];
        
        id theJson = [NSJSONSerialization JSONObjectWithData:datautf8 options:kNilOptions error:&theJsonError];
        
        NSArray * cityArray = [self createCityArray: theJson];
        reponseCompletion(cityArray,[theJson objectForKey:@"title"],nil);
    }];
    
}

+ (NSArray *)createCityArray:(id)jsonData{
    NSMutableArray <City *> *cityArray = [[NSMutableArray alloc]init];
    for (NSDictionary *cityDictionary in [jsonData objectForKey:@"rows"]) {
        City * city = [[City alloc]initWithCityInfo:cityDictionary];
        [cityArray addObject:city];
    }
    return cityArray;
}
@end
