//
//  WBTabbar.h
//  XinWeibo
//
//  Created by CocoaML on 14-10-6.
//  Copyright (c) 2014年 ML. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WBTabBar;
@protocol WBTabbarDekegate <NSObject>

@optional
- (void)tabBar:(WBTabBar *)tabBar didSelectedButtonfrom:(NSInteger)from to:(NSInteger)to;
@end

@interface WBTabBar : UIView
@property (nonatomic, weak) id<WBTabbarDekegate>delegate;

- (void)addButtonWithItem:(UITabBarItem *)item;
@end
