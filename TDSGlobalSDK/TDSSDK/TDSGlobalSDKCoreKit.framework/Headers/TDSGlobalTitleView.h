//
//  TDSGlobalTitleView.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/8/25.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^TDSTitleCloseCallback)(void);
typedef void(^TDSTitleBackCallback)(void);


@interface TDSGlobalTitleView : UIView

@property (nonatomic) TDSTitleCloseCallback closeAction;
@property (nonatomic) TDSTitleBackCallback backAction;


+ (TDSGlobalTitleView *)createTitleView:(NSString *)title;

- (void)setBackButtonHidden:(BOOL)hidden;

@end

NS_ASSUME_NONNULL_END
