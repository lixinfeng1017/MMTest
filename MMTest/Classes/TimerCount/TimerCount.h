//
//  TimerCount.h
//  DiDiGolf
//
//  Created by apple on 2018/2/8.
//  Copyright © 2018年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TimerCount : NSObject
@property (nonatomic,assign)__block int timeout;
+ (id)sharedTimerManager;

- (void)countDown;
@end
