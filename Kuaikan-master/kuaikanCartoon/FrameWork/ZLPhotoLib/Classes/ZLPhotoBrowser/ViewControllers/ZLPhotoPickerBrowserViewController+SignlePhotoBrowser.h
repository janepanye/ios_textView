//
//  ZLPhotoBrowserViewController+SignlePhotoBrowser.h
//  ZLAssetsPickerDemo
//
//  Created by 邢天慧 on 16/8/21.
//  Copyright (c) 2016年 com.zixue101.www. All rights reserved.
//

#import "ZLPhotoPickerBrowserViewController.h"

@interface ZLPhotoPickerBrowserViewController (SignlePhotoBrowser)

- (void)showHeadPortrait:(UIImageView *)toImageView;
- (void)showHeadPortrait:(UIImageView *)toImageView originUrl:(NSString *)originUrl;
- (UIView *)getParsentView:(UIView *)view;
@end
