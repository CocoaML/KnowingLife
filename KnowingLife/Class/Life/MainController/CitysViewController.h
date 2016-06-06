//
//  CitysViewController.h
//  KnowingLife
//
//  Created by CocoaML on 14/10/27.
//  Copyright (c) 2014年 ML. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CitysViewdelegate <NSObject>

- (void)citysViewDidSetectedCity:(NSString *)city;

@end

@interface CitysViewController : UITableViewController
@property (nonatomic, weak) id<CitysViewdelegate> citysDelegate;
@end
