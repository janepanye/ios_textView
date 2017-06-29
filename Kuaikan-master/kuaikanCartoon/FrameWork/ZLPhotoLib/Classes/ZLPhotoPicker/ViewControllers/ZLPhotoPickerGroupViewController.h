//
//  ZLPhotoPickerGroupViewController.h
//  ZLAssetsPickerDemo
//
//  Created by 邢天慧 on 16-11-11.
//  Copyright (c) 2016年 com.zixue101.www. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZLPhotoPickerViewController.h"

@interface ZLPhotoPickerGroupViewController : UIViewController

@property (nonatomic , weak) id<ZLPhotoPickerViewControllerDelegate> delegate;
@property (nonatomic , assign) PickerViewShowStatus status;
@property (nonatomic , assign) PickerPhotoStatus photoStatus;
@property (nonatomic , assign) NSInteger maxCount;
// 记录选中的值
@property (strong,nonatomic) NSArray *selectAsstes;
// 置顶展示图片
@property (assign,nonatomic) BOOL topShowPhotoPicker;
// 是否显示Camera
@property (assign,nonatomic) BOOL isShowCamera;
@end
