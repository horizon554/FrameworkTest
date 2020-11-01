//
//  TDSTrackManager.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/10/15.
//  Copyright © 2020 JiangJiahao. All rights reserved.
// 

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSGlobalTrackManager : NSObject
+ (void)trackUser:(NSString *)roleId
         roleName:(NSString *)roleName
         serverId:(NSString *)serverId
            level:(NSInteger)level;

+ (void)trackEvent:(NSString *)eventName;
+ (void)trackAchievement;

// 跟踪完成新手引导接口
+ (void)eventCompletedTutorial;

// 跟踪完成创角接口
+ (void)eventCreateRole;

@end

NS_ASSUME_NONNULL_END
