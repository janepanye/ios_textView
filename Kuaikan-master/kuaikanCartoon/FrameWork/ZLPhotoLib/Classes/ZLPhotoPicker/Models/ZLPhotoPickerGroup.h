//
//  PickerGroup.h
//  ZLAssetsPickerDemo
//
//  Created by 邢天慧 on 16-5-11.
//  Copyright (c) 2016年 com.zixue101.www. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface ZLPhotoPickerGroup : NSObject

/**
 *  组名
 */
@property (nonatomic , copy) NSString *groupName;

/**
 *  缩略图
 */
@property (nonatomic , strong) UIImage *thumbImage;

/**
 *  组里面的图片个数
 */
@property (nonatomic , assign) NSInteger assetsCount;

/**
 *  类型 : Saved Photos...
 */
@property (nonatomic , copy) NSString *type;

@property (nonatomic , strong) ALAssetsGroup *group;

@property (assign,nonatomic) BOOL isVideo;
@end
