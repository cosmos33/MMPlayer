//
//  MMPlayerAnalytics.h
//  MMPlayer
//
//  Created by sunfei on 2019/10/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMPlayerAnalytics : NSObject

+ (void)fetchIpInfo;

+ (void)writeEventInfo:(NSDictionary *)eventInfo;
+ (void)reportErrorWithErrorInfo:(NSDictionary *)errorInfo;

@end

NS_ASSUME_NONNULL_END
