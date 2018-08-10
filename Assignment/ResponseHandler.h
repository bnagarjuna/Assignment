//
//  ResponseHandler.h
//  Assignment
//
//  Created by nagarjuna on 09/08/18.
//  Copyright © 2018 nagarjuna. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseHandler : NSObject

//+(void) processRequest:(NSMutableURLRequest *) theRequest WithCompletionHandler:(void(^)(id theJson , NSError * theError))reponseCompletion;
+(void) processRequest:(NSMutableURLRequest *) theRequest WithCompletionHandler:(void(^)(NSArray* theJson ,NSString *title, NSError * theError))reponseCompletion;
@end
