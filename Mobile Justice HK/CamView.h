//
//  CamView.h
//  Mobile Justice HK
//
//  Created by Raptor on 4/5/15.
//  Copyright (c) 2015 YourAppApp. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AVCaptureSession;

@interface CamView : UIView

@property (nonatomic) AVCaptureSession *session;

@end
