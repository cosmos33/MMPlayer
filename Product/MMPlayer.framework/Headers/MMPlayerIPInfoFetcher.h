//
//  MMPlayerIPInfoFetcher.h
//  MMPlayer
//
//  Created by sunfei on 2019/10/11.
//

#import "MMPlayerFetcher.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMPlayerIPInfoFetcher : MMPlayerFetcher

- (void)fetchIPInfoWithCompletion:(void(^)(NSDictionary * _Nullable result, NSError * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
