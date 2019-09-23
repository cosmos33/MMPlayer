//
//  MMPlayerConfigFetcher.h
//  MMPlayer
//
//  Created by sunfei on 2019/5/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface MMPlayerProxyParams : NSObject <NSCopying, NSCoding>

@property (nonatomic, assign) NSInteger preloadTimeMs;
@property (nonatomic, assign) NSInteger preloadSize;
@property (nonatomic, assign) NSInteger proxyThreadNumber;
@property (nonatomic, assign) NSInteger preloadThreadNumber;

@end

@interface MMPlayerPlayParams : NSObject <NSCopying, NSCoding>

@property (nonatomic, assign) BOOL videotoolbox;
@property (nonatomic, assign) NSInteger max_buffer_size;
@property (nonatomic, assign) BOOL isLog;

@end

@interface MMPlayerConfiguratinonModel : NSObject <NSCopying, NSCoding>

@property (nonatomic, copy) MMPlayerProxyParams *proxy;
@property (nonatomic, copy) MMPlayerPlayParams *player;

- (void)saveModel;
+ (MMPlayerConfiguratinonModel * _Nullable)loadModel;
+ (void)clear;

@end

@interface MMPlayerConfigFetcher : NSObject

- (void)fetchConfigWithCompletion:(void(^)(MMPlayerConfiguratinonModel *result, NSError *error))completion;

@end

NS_ASSUME_NONNULL_END
