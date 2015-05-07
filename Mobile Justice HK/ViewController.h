//
//  ViewController.h
//  Mobile Justice HK
//
//  Created by Raptor on 4/5/15.
//  Copyright (c) 2015 YourAppApp. All rights reserved.
//

#import <UIKit/UIKit.h>
@class AFURLSessionManager;

@interface ViewController : UIViewController

@property (strong) AFURLSessionManager* uploadManager;
@property (strong) NSURLSessionUploadTask *uploadTask;

@end

