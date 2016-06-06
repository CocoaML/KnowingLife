//
//  KLCity.h
//  KnowingLife
//
//  Created by CocoaML on 14/11/1.
//  Copyright (c) 2014年 ML. All rights reserved.
//

#import "KLBaseModel.h"
#import <CoreLocation/CoreLocation.h>

@interface KLCity : KLBaseModel
// 分区
@property (nonatomic, strong) NSArray *districts;
// 热门
@property (nonatomic, assign) BOOL hot;
// 经度纬度
@property (nonatomic, assign) CLLocationCoordinate2D position;
@end
