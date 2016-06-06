//
//  ProductCell.h
//  Lottery Ticket
//
//  Created by CocoaML on 14-9-25.
//  Copyright (c) 2014年 ML. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ProductItem;
@interface ProductCell : UICollectionViewCell
@property (nonatomic, strong) ProductItem *item;
@end
