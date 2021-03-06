//
//  TDSGlobalMultiLanguage.h
//  TDSSDK
//
//  Created by JiangJiahao on 2020/9/4.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//  多语言

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const TDS_ACCOUNT_CENTER_TITLE_KEY;
extern NSString *const TDS_ACCOUNT_INFO_TITLE_KEY;
extern NSString *const TDS_ACCOUNT_BIND_TITLE_KEY;
extern NSString *const TDS_ACCOUNT_BIND_BUTTON_TITLE_KEY;
extern NSString *const TDS_ACCOUNT_UNBIND_BUTTON_TITLE_KEY;

extern NSString *const TDS_ACCOUNT_DELETE_TITLE_KEY;
extern NSString *const TDS_ACCOUNT_DELETE_SURE_TITLE_KEY;
extern NSString *const TDS_ACCOUNT_UNBIND_TITLE_KEY;

extern NSString *const TDS_ACCOUNT_UNBIND_ALERT_TEXT_KEY;
extern NSString *const TDS_ACCOUNT_UNBIND_BUTTON_TEXT_KEY;
extern NSString *const TDS_ACCOUNT_DELETE_ALERT_TEXT_KEY;
extern NSString *const TDS_ACCOUNT_DELETE_ALERT_CONFIRM_TEXT_KEY;

extern NSString *const TDS_ACCOUNT_DELETE_ALERT_CONTENT_KEY;
extern NSString *const TDS_ACCOUNT_UNBIND_ALERT_CONTENT_KEY;
extern NSString *const TDS_ACCOUNT_DELETE_BIND_ALERT_CONTENT_KEY;

extern NSString *const TDS_ACCOUNT_UNBIND_ALERT_CONFIRM_CONTENT_KEY;
extern NSString *const TDS_ACCOUNT_UNBIND_ALERT_CONFIRM_WORD_KEY;

extern NSString *const TDS_ACCOUNT_DELETE_ALERT_CONFIRM_CONTENT_KEY;
extern NSString *const TDS_ACCOUNT_DELETE_ALERT_CONFIRM_WORD_KEY;

extern NSString *const TDS_ACCOUNT_BIND_CANCEL_TOAST_KEY;
extern NSString *const TDS_ACCOUNT_UNBIND_CANCEL_TOAST_KEY;
extern NSString *const TDS_ACCOUNT_DELETE_CANCEL_TOAST_KEY;
extern NSString *const TDS_ACCOUNT_BIND_FAIL_FORMAT_KEY;

extern NSString *const TDS_ACCOUNT_UNBIND_FAIL_TOAST_KEY;
extern NSString *const TDS_ACCOUNT_UNBIND_SUCCESS_TOAST_KEY;
extern NSString *const TDS_ACCOUNT_UNBIND_SUCCESS_LOGOUT_TOAST_KEY;
extern NSString *const TDS_ACCOUNT_UNBIND_SUCCESS_LOGOUT_GUEST_TOAST_KEY;

extern NSString *const TDS_ACCOUNT_BIND_FAIL_TOAST_KEY;
extern NSString *const TDS_ACCOUNT_BIND_SUCCESS_TOAST_KEY;

extern NSString *const TDS_ACCOUNT_DELETE_FAIL_TOAST_KEY;
extern NSString *const TDS_ACCOUNT_DELETE_SUCCESS_LOGOUT_TOAST_KEY;


extern NSString *const TDS_ACCOUNT_CURRENT_PREFIX_KEY;
extern NSString *const TDS_ACCOUNT_FORMAT_KEY;
extern NSString *const TDS_USERID_FORMAT_KEY;
extern NSString *const TDS_ACCOUNT_NETWORK_ERROR_TOAST_KEY;


extern NSString *const TDS_ALERT_CANCEL_TEXT_KEY;
extern NSString *const TDS_ALERT_INPUT_ERROR_TEXT_KEY;
extern NSString *const TDS_LOADING_TEXT_KEY;

extern NSString *const TDS_COPY_SUCCESS_TOAST_KEY;

extern NSString *const TDS_LOAD_FAIL_TEXT_KEY;
extern NSString *const TDS_LOAD_NET_FAIL_TEXT_KEY;
extern NSString *const TDS_CONFIRM_BUTTON_TEXT_KEY;

extern NSString *const TDS_GUEST_TEXT_KEY;

extern NSString *const TDS_LOGIN_SUCCESS_TOAST_KEY;
extern NSString *const TDS_LOGIN_FAIL_TOAST_KEY;
extern NSString *const TDS_LOGIN_CANCEL_TOAST_KEY;
extern NSString *const TDS_LOGIN_ING_TOAST_KEY;
extern NSString *const TDS_LOGIN_NETWORK_ERROR_TOAST_KEY;
extern NSString *const TDS_LOGOUT_TEXT_KEY;
extern NSString *const TDS_LOGIN_BUTTON_TITLE_KEY;

/*
 条款协议
 */
extern NSString *const TDS_SERVICE_TITLE_KEY;
extern NSString *const TDS_SERVICE_AGREE_TERMS_KEY;
extern NSString *const TDS_SERVICE_AGREE_PUSH_KEY;
extern NSString *const TDS_SERVICE_AGREE_CONFIRM_KEY;
extern NSString *const TDS_SERVICE_AGREE_ADULT_KEY;
extern NSString *const TDS_SERVICE_CALIFORNIA_TITLE_KEY;
extern NSString *const TDS_SERVICE_CENTER_TITLE_KEY;

/**
 支付
 */
extern NSString *const TDS_FEFUND_TITLE_KEY;
extern NSString *const TDS_FEFUND_DESC_KEY;
extern NSString *const TDS_FEFUND_TEXT_KEY;
extern NSString *const TDS_FEFUND_SUCCESS_TOAST_KEY;
extern NSString *const TDS_FEFUND_FAIL_TOAST_KEY;
extern NSString *const TDS_FEFUND_CANCEL_TOAST_KEY;
extern NSString *const TDS_REFUND_NET_FAIL_TOAST_KEY;
extern NSString *const TDS_REFUND_PROCESSING_TOAST_KEY;
extern NSString *const TDS_FEFUND_PLATFORM_ERROR_DESC_KEY;

extern NSString *const TDS_FEFUND_SERVICE_TITLE_KEY;
extern NSString *const TDS_FEFUND_SERVICE_BUTTON_TITLE_KEY;


extern NSString *const TDS_PAY_SUCCESS_TOAST_KEY;
extern NSString *const TDS_PAY_FAIL_TOAST_KEY;
extern NSString *const TDS_PAY_CANCEL_TOAST_KEY;

extern NSString *const TDS_PAY_PROMOTION_EXCHANGE_TITLE_KEY;
extern NSString *const TDS_PAY_PROMOTION_EXCHANGE_DESC_KEY;
extern NSString *const TDS_PAY_NET_FAIL_TOAST_KEY;

extern NSString *const TDS_PAY_PRODUCT_NOT_EXIST_TOAST_KEY;

extern NSString *const TDS_PAY_SETTING_RESTRICT_TITLE_KEY;
extern NSString *const TDS_PAY_SETTING_RESTRICT_DESC_KEY;

@interface TDSGlobalMultiLanguage : NSObject

+ (NSString *)getTextByKey:(NSString *)key;
+ (NSLocale *)getLocale;
+ (NSString *)getLanguageTypeString;
/// 客服页面语言
+ (NSString *)getReportLanguageTypeString;

@end

NS_ASSUME_NONNULL_END
