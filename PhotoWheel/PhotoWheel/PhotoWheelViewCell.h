//
//  PhotoWheelViewCell.h
//  PhotoWheelPrototype
//
//  Created by Kirby Turner on 7/2/11.
//  Copyright 2011 White Peak Software Inc. All rights reserved.
//

#import "WheelView.h"

@interface PhotoWheelViewCell : WheelViewCell

@property (nonatomic, strong) IBOutlet UIImageView *imageView;
@property (nonatomic, strong) IBOutlet UILabel *label;

+ (PhotoWheelViewCell *)photoWheelViewCell;

@end