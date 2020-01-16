//
//  MMMeidaLogger.h
//  ssss
//
//  Created by sunfei on 2019/4/29.
//  Copyright © 2019 sunfei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMMeidaLogger : NSObject

- (void)writeBody:(NSString *)body;
- (void)forceUploadMMFile;

- (void)enableLogger:(BOOL)enable;

@end

NS_ASSUME_NONNULL_END
