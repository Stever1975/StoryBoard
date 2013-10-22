//
//  PlayerCell.h
//  Ratings
//
//  Created by Steve Rowley on 10/22/13.
//  Copyright (c) 2013 Steve Rowley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell
@property (nonatomic, strong) IBOutlet UILabel *nameLabel;
@property (nonatomic, strong) IBOutlet UILabel *gameLabel;
@property (nonatomic, strong) IBOutlet UIImageView *ratingImageView;

@end
