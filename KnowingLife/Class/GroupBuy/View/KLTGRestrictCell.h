//
//  KLTGRestrictCell.h
//  KnowingLife
//
//  Created by CocoaML on 14/11/5.
//  Copyright (c) 2014年 ML. All rights reserved.
//

#import "RETableViewCell.h"
#import "KLRestrictItem.h"

@interface KLTGRestrictCell : RETableViewCell
@property (strong, readwrite, nonatomic) KLRestrictItem *item;
@end
