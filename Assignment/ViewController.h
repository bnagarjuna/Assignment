//
//  ViewController.h
//  Assignment
//
//  Created by nagarjuna on 09/08/18.
//  Copyright © 2018 nagarjuna. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
-(void) fetchServerData;
-(void)maintask;
@property(nonatomic , strong) NSString *titleString;
@end

