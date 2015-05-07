//
//  BackgroundSessionManager.h
//  Mobile Justice HK
//
//  Created by Raptor on 4/5/15.
//  Copyright (c) 2015 YourAppApp. All rights reserved.
//

#import "AFHTTPSessionManager.h"

@interface BackgroundSessionManager : AFHTTPSessionManager

+ (instancetype)sharedManager;

@property (nonatomic, copy) void (^savedCompletionHandler)(void);

@end
