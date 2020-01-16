//
//  MMPlayerAnalytics.h
//  MMPlayer
//
//  Created by sunfei on 2019/10/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    MMMeidaLogDataType_ProxySession = 7,   // 代理日志
    MMMeidaLogDataType_PreloadTask = 11,    // 预加载日志
    MMMeidaLogDataType_PlayerLog = 9       // 播放器日志
} MMMeidaLogDataType;

@interface MMPlayerAnalytics : NSObject

+ (void)fetchIpInfo;

+ (void)writeEventInfo:(NSDictionary *)eventInfo;
+ (void)reportErrorWithErrorInfo:(NSDictionary *)errorInfo;

+ (void)enableLogger:(BOOL)enabled;

@end

NS_ASSUME_NONNULL_END
