//
//  PickerCollectionViewCell.h
//  相机
//
//  Created by 邢天慧 on 16-11-11.
//  Copyright (c) 2016年 com.zixue101.www. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UICollectionView;

@interface ZLPhotoPickerCollectionViewCell : UICollectionViewCell
+ (instancetype) cellWithCollectionView : (UICollectionView *) collectionView cellForItemAtIndexPath:(NSIndexPath *) indexPath;

@property (nonatomic , strong) UIImage *cellImage;

@end
