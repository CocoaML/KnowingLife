//
//  NSDate+WB.h
//  XinWeibo
//
//  Created by CocoaML on 14-10-14.
//  Copyright (c) 2014年 ML. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (WB)
+(NSString *) compareCurrentTime:(NSDate*) compareDate;
- (NSDateComponents *)compare:(NSDate *)other;
@end
