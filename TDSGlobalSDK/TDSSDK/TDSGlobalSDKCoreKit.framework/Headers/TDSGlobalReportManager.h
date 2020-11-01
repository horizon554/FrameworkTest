//
//  TDSGlobalReportManager.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/10/15.
//  Copyright © 2020 JiangJiahao. All rights reserved.
// 客服

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSGlobalReportManager : NSObject
+ (void)report:(NSString *)userId;

+ (void)report:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;
+ (void)report:(NSString *)userId serverId:(NSString * _Nullable)serverId roleId:(NSString * _Nullable)roleId roleName:(NSString * _Nullable)roleName;

@end

NS_ASSUME_NONNULL_END
