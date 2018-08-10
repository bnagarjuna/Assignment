//
//  RequestResponse.h
//  Assignment
//
//  Created by nagarjuna on 09/08/18.
//  Copyright © 2018 nagarjuna. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Assignment.pch"

@interface RequestHandler : NSObject
+(NSMutableURLRequest*) createGetRequest:(NSString*) urlString;
@end
