//
//  WeatherViewController.h
//  KnowingLife
//
//  Created by CocoaML on 14/10/27.
//  Copyright (c) 2014年 ML. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KLWeatherInfo;
@interface WeatherViewController : UIViewController
@property (nonatomic, strong) KLWeatherInfo *weatherInfo;
@end
