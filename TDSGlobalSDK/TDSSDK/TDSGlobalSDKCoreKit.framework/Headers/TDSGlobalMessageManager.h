//
//  TDSGlobalMessageManager.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/10/12.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface TDSGlobalMessageManager : NSObject
+ (void)initFireBase:(UIApplication *)application enablePush:(BOOL)enable;
@end

NS_ASSUME_NONNULL_END
