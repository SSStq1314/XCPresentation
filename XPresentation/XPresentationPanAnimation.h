//
//  XPresentationPanAnimation.h
//  XPresentationDemo
//
//  Created by 樊小聪 on 2017/9/16.
//  Copyright © 2017年 樊小聪. All rights reserved.
//


/*
 *  备注：平移动画 🐾
 */


#import "XPresentationAnimation.h"

typedef NS_ENUM(NSInteger, PanAnimationPresentStyle)
{
    PanAnimationPresentStyleFromTop = 0,
    
    PanAnimationPresentStyleFromBottom,
    
    PanAnimationPresentStyleFromLeft,
    
    PanAnimationPresentStyleFromRight,
    
    PanAnimationPresentStyleFromCenter
};


@interface XPresentationPanAnimation : XPresentationAnimation

/** 👀 显示的样式 👀 */
@property (assign, nonatomic) PanAnimationPresentStyle presentStyle;

@end
