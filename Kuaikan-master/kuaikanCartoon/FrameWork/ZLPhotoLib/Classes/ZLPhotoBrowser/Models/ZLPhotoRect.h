//
//  ZLPhotoRect.h
//  ZLAssetsPickerDemo
//
//  Created by 邢天慧 on 16/8/21.
//  Copyright (c) 2016年 com.zixue101.www. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZLPhotoRect : NSObject
+ (CGRect)setMaxMinZoomScalesForCurrentBoundWithImage:(UIImage *)image;
+ (CGRect)setMaxMinZoomScalesForCurrentBoundWithImageView:(UIImageView *)imageView;
@end
