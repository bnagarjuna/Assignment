//
//  City.h
//  Assignment
//
//  Created by nagarjuna on 09/08/18.
//  Copyright © 2018 nagarjuna. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface City : NSObject
@property(nonatomic,strong)NSString *title;
@property(nonatomic,strong)NSString *Description;
@property(nonatomic,strong)NSString *image;
@property(nonatomic,strong)NSString *city;
-(City*)initWithCityInfo :(NSDictionary*)info;
@end
