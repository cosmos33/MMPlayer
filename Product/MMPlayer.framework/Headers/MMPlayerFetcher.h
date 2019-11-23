//
//  MMPlayerFetcher.h
//  MMPlayer
//
//  Created by sunfei on 2019/10/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMPlayerFetcher : NSObject

- (void)fetchWithURL:(NSURL *)url
              params:(NSDictionary * _Nullable)params
          completion:(void(^)(id _Nullable result, NSError * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
