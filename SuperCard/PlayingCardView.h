//
//  PlayingCardView.h
//  SuperCard
//
//  Created by 李键超 on 2018/7/25.
//  Copyright © 2018年 李键超. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (nonatomic, strong) NSString *suit;
@property (nonatomic) BOOL faceUp;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;

@end
