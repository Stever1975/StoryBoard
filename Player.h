//
//  Player.h
//  Ratings
//
//  Created by Steve Rowley on 10/21/13.
//  Copyright (c) 2013 Steve Rowley. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
