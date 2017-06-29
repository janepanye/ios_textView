//
//  PickerImageView.h
//  相机
//
//  Created by 邢天慧 on 16-11-11.
//  Copyright (c) 2016年 com.zixue101.www. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZLPhotoPickerImageView : UIImageView
/**
 *  是否有蒙版层
 */
@property (nonatomic , assign , getter=isMaskViewFlag) BOOL maskViewFlag;
/**
 *  蒙版层的颜色,默认白色
 */
@property (nonatomic , strong) UIColor *maskViewColor;
/**
 *  蒙版的透明度,默认 0.5
 */
@property (nonatomic , assign) CGFloat maskViewAlpha;
/**
 *  是否有右上角打钩的按钮
 */
@property (nonatomic , assign) BOOL animationRightTick;
/**
 *  是否视频类型
 */
@property (assign,nonatomic) BOOL isVideoType;
/**
 *  点击照片是否有动画
 */
@property (assign,nonatomic) BOOL isClickHaveAnimation;

@end
