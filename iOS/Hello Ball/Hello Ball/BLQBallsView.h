//
//  BLQBallsView.h
//  Hello Ball
//
//  Created by Marco on 05/02/15.
//  Copyright (c) 2015 Balsamiq. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BLQBallsView : UIView

@property (nonatomic) NSInteger ballCount;
@property (nonatomic) CGFloat backgroundPhase;

- (void)updateBalls:(NSDictionary *)balls;

@end
