//
//  RequestResponse.m
//  Assignment
//
//  Created by nagarjuna on 09/08/18.
//  Copyright © 2018 nagarjuna. All rights reserved.
//

#import "RequestHandler.h"

@implementation RequestHandler  

+(NSMutableURLRequest*)createGetRequest:(NSString *)urlString {
    NSMutableURLRequest * theRequest = [[NSMutableURLRequest alloc] init];
    [theRequest setURL:[NSURL URLWithString:urlString]];
    [theRequest setHTTPMethod:REQUEST_TYPE_GET];
    return theRequest;
}
@end
