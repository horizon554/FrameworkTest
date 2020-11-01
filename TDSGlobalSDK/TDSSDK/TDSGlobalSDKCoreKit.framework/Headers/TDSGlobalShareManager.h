//
//  TDSShareManager.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/9/3.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,TDSGlobalShareType) {
    TDSGlobalShareTypeFacebook,
};

typedef void(^TDSGlobalShareResultHandler)(NSError * _Nullable error, BOOL cancel);

@interface TDSGlobalShareManager : NSObject
+ (void)share:(TDSGlobalShareType)type image:(UIImage *)image completeHandler:(TDSGlobalShareResultHandler)completeHandler;

+ (void)share:(TDSGlobalShareType)type url:(NSString *)url completeHandler:(TDSGlobalShareResultHandler)completeHandler;

+ (void)share:(TDSGlobalShareType)type url:(NSString *)url message:(NSString *)message completeHandler:(TDSGlobalShareResultHandler)completeHandler;


@end

NS_ASSUME_NONNULL_END
