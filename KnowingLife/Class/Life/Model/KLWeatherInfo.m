//
//  KLWeatherInfo.m
//  KnowingLife
//
//  Created by CocoaML on 14/10/27.
//  Copyright (c) 2014年 ML. All rights reserved.
//

#import "KLWeatherInfo.h"

@implementation KLWeatherInfo
- (NSDictionary *)objectClassInArray
{
    return @{@"index": [KLIndexDetail class], @"weather_data": [KLWeatherData class]};
}
@end



@implementation KLIndexDetail

@end


@implementation KLWeatherData

@end