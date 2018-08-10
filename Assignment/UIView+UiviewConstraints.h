//
//  UIView+UiviewConstraints.h
//  Assignment
//
//  Created by nagarjuna on 09/08/18.
//  Copyright © 2018 nagarjuna. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (UiviewConstraints)

-(void) addLeadingConstraintToView: (UIView *) view relation: (NSLayoutRelation )relation constant: (CGFloat) constant priority: (UILayoutPriority) priority;

-(void) addTrailingConstraintToView: (UIView *) view relation: (NSLayoutRelation )relation constant: (CGFloat) constant priority: (UILayoutPriority) priority;

-(void) addTopConstraintToView: (UIView *) view relation: (NSLayoutRelation )relation constant: (CGFloat) constant priority: (UILayoutPriority) priority;

-(void) addBottomConstraintToView: (UIView *) view relation: (NSLayoutRelation )relation constant: (CGFloat) constant priority: (UILayoutPriority) priority;

- (void) addWidthConstraint: (NSLayoutRelation) relation constant: (CGFloat) constant priority: (UILayoutPriority) priority;

- (void) addHeightConstraint: (NSLayoutRelation) relation constant: (CGFloat) constant priority: (UILayoutPriority) priority;

- (void) addCenterXConstraint: (UIView *) view relation: (NSLayoutRelation) relation constraint: (CGFloat) constant priority: (UILayoutPriority) priority;

- (void) addCenterYConstraint: (UIView *) view relation: (NSLayoutRelation) relation constraint: (CGFloat) constant priority: (UILayoutPriority) priority;


@end
