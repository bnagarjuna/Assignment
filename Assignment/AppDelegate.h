//
//  AppDelegate.h
//  Assignment
//
//  Created by nagarjuna on 09/08/18.
//  Copyright © 2018 nagarjuna. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

