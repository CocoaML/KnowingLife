//
//  KLDealAnnotation.h
//  KnowingLife
//
//  Created by CocoaML on 14/11/6.
//  Copyright (c) 2014年 ML. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <MapKit/MapKit.h>

@interface KLDealAnnotation: NSObject <MKAnnotation>
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *deal_id; // 显示的哪个团购
@property (nonatomic, copy) NSString *title;
@end
