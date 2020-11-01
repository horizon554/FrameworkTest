//
//  TDSGlobalNetStatusManager.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/10/16.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSGlobalNetStatusManager : NSObject
+ (BOOL)reachable;
@end

NS_ASSUME_NONNULL_END
