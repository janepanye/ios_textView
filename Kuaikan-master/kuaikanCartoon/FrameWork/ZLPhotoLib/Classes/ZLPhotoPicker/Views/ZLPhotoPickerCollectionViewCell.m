//
//  PickerCollectionViewCell.m
//  相机
//
//  Created by 邢天慧 on 16-11-11.
//  Copyright (c) 2016年 com.zixue101.www. All rights reserved.
//

#import "ZLPhotoPickerCollectionViewCell.h"

static NSString *const _cellIdentifier = @"cell";

@implementation ZLPhotoPickerCollectionViewCell

+ (instancetype)cellWithCollectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath{
    
    ZLPhotoPickerCollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:_cellIdentifier forIndexPath:indexPath];
    
    if ([[cell.contentView.subviews lastObject] isKindOfClass:[UIImageView class]]) {
        [[cell.contentView.subviews lastObject] removeFromSuperview];
    }
    
    return cell;
}
@end
