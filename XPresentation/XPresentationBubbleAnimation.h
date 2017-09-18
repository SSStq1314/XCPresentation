//
//  XPresentationBubbleAnimation.h
//  XPresentationDemo
//
//  Created by 樊小聪 on 2017/9/16.
//  Copyright © 2017年 樊小聪. All rights reserved.
//


/*
 *  备注：气泡缩放动画 🐾
 */

#import "XPresentationAnimation.h"

@interface XPresentationBubbleAnimation : XPresentationAnimation

/** 👀 动画开始的frame 👀 */
@property (assign, nonatomic) CGRect sourceRect;

/** 👀 填充颜色 👀 */
@property (strong, nonatomic) UIColor *strokeColor;

@end
