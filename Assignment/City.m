//
//  City.m
//  Assignment
//
//  Created by nagarjuna on 09/08/18.
//  Copyright © 2018 nagarjuna. All rights reserved.
//

#import "City.h"

@implementation City
-(instancetype)initWithCityInfo :(NSDictionary*)info{
    self = [super init];
    if (self) {
        self.title = [info objectForKey:@"title"] ? : @"";
        self.Description = [info objectForKey:@"description"] ? : @"";
        self.image = [info objectForKey:@"imageHref"]? : @"";
    }
    return self;
}
@end
