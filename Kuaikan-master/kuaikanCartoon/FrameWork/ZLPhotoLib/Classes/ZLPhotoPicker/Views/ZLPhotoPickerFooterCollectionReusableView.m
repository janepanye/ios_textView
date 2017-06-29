//
//  FooterCollectionReusableView.m
//  ZLAssetsPickerDemo
//
//  Created by 邢天慧 on 16-11-13.
//  Copyright (c) 2016年 com.zixue101.www. All rights reserved.
//

#import "ZLPhotoPickerFooterCollectionReusableView.h"
#import "UIView+ZLExtension.h"

@interface ZLPhotoPickerFooterCollectionReusableView ()
@property (weak, nonatomic) UILabel *footerLabel;

@end

@implementation ZLPhotoPickerFooterCollectionReusableView

- (UILabel *)footerLabel{
    if (!_footerLabel) {
        UILabel *footerLabel = [[UILabel alloc] init];
        footerLabel.frame = self.bounds;
        footerLabel.textAlignment = NSTextAlignmentCenter;
        [self addSubview:footerLabel];
        self.footerLabel = footerLabel;
    }
    
    return _footerLabel;
}

- (void)setCount:(NSInteger)count{
    _count = count;
    
    if (count > 0) {
        self.footerLabel.text = [NSString stringWithFormat:@"有 %ld 张图片", (NSInteger)count];
    }
}

@end
