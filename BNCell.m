//
//  BNCell.m
//  BNCoreDataTest
//
//  Created by Nikolay Ilin on 01.08.13.
//  Copyright (c) 2013 BossNote. All rights reserved.
//

#import "BNCell.h"

@implementation BNCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
