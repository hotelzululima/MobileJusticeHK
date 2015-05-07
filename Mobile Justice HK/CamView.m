//
//  CamView.m
//  Mobile Justice HK
//
//  Created by Raptor on 4/5/15.
//  Copyright (c) 2015 YourAppApp. All rights reserved.
//

#import "CamView.h"
#import <AVFoundation/AVFoundation.h>

@implementation CamView

+ (Class)layerClass
{
    return [AVCaptureVideoPreviewLayer class];
}

- (AVCaptureSession *)session
{
    return [(AVCaptureVideoPreviewLayer *)[self layer] session];
}

- (void)setSession:(AVCaptureSession *)session
{
    [(AVCaptureVideoPreviewLayer *)[self layer] setSession:session];
}

@end
