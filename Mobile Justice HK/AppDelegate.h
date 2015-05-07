//
//  AppDelegate.h
//  Mobile Justice HK
//
//  Created by Raptor on 4/5/15.
//  Copyright (c) 2015 YourAppApp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BackgroundSessionManager.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (copy) void (^backgroundSessionCompletionHandler)();

@end

