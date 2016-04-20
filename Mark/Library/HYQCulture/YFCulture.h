//
//  YFCulture.h
//
//  Created by Saxue on 15/4/14.
//  Copyright (c) 2015年 Ubai. All rights reserved.
//


#import <Foundation/Foundation.h>

/**
 *  国际化 调用时直接使用 UBCulture(key)即可
 *
 *  @param str 要国际化的文字内容
 *
 *  @return 国际化后的文字内容
 */
#define YFCulture(str) [YFCulture localizedString:str]

#define kLMDefaultLanguage  @"en"
#define kLMEnglish          @"en"
#define kLMEnglish2         @"en-CN"
#define kLMChinese          @"zh-Hans"
#define kLMChinese2         @"zh-Hans-CN"

@interface YFCulture : NSObject {
}

/**
 *  判断App是否支持该语言
 *
 *  @param language 该语言
 *
 *  @return Bool
 */
+ (BOOL)isSupportedLanguage:(NSString *)language;
/**
 *  语言本地化
 *
 *  @param key 需要本地化的文字
 *
 *  @return 本地化后的文字
 */
+ (NSString *)localizedString:(NSString *) key;
+ (void)setSelectedLanguage:(NSString *)language;
+ (NSString *)selectedLanguage;
+ (NSString *)getPreferredLanguage;

/**
 *  判断系统语言是否是中文
 */
+ (BOOL)isChinese;

@end