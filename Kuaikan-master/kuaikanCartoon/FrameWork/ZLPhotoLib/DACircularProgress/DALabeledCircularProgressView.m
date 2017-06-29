//
//  DALabeledCircularProgressView.m
//  DACircularProgressExample
//
//  Created by Josh Sklar on 4/8/16.
//  Copyright (c) 2016 Shout Messenger. All rights reserved.
//

#import "DALabeledCircularProgressView.h"

@implementation DALabeledCircularProgressView

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self initializeLabel];
    }
    return self;
}

- (id)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    if (self) {
        [self initializeLabel];
    }
    return self;
}


#pragma mark - Internal methods

/**
 Creates and initializes
 -[DALabeledCircularProgressView progressLabel].
 */
- (void)initializeLabel
{
    self.progressLabel = [[UILabel alloc] initWithFrame:self.bounds];
    self.progressLabel.autoresizingMask = UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth;
    self.progressLabel.textAlignment = NSTextAlignmentCenter;
    self.progressLabel.backgroundColor = [UIColor clearColor];
    [self addSubview:self.progressLabel];
}

@end
