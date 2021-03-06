//
//  ZLYCircle.h
//  ZLYSpringBubble
//
//  Created by 周凌宇 on 2017/1/23.
//  Copyright © 2017年 周凌宇. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZLYCircle : NSObject

@property (nonatomic, assign) CGPoint center;
@property (nonatomic, assign) CGFloat r;

#pragma mark - init

- (instancetype)init;
- (instancetype)initWithCenter:(CGPoint)center r:(CGFloat)r;

#pragma mark - Public

- (CGRect)frame;
@end
