//
//  ZLPhotoPickerBrowserPhotoView.h
//  ZLAssetsPickerDemo
//
//  Created by 邢天慧 on 16-6-14.
//  Copyright (c) 2016年 com.zixue101.www. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol ZLPhotoPickerBrowserPhotoViewDelegate;

@interface ZLPhotoPickerBrowserPhotoView : UIView {}

@property (nonatomic, weak) id <ZLPhotoPickerBrowserPhotoViewDelegate> tapDelegate;

@end

@protocol ZLPhotoPickerBrowserPhotoViewDelegate <NSObject>

@optional

- (void)view:(UIView *)view singleTapDetected:(UITouch *)touch;
- (void)view:(UIView *)view doubleTapDetected:(UITouch *)touch;

@end
