//
//  MMPlatformUtils.h
//  pushsdk-ios
//
//  Created by wangduanqing on 2018/12/4.
//  Copyright © 2018年 momo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMPlatformUtils : NSObject

+ (NSString *)randomString: (int) len;

+ (NSString *)urlencode: (NSString*) content;

+ (NSString *)userAgentString;

@end

NS_ASSUME_NONNULL_END
