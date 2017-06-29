//
//  PickerGroupTableViewCell.h
//  ZLAssetsPickerDemo
//
//  Created by 邢天慧 on 16-11-13.
//  Copyright (c) 2016年 com.zixue101.www. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZLPhotoPickerGroup;

@interface ZLPhotoPickerGroupTableViewCell : UITableViewCell

/**
 *  赋值xib
 */
@property (nonatomic , strong) ZLPhotoPickerGroup *group;

@end
