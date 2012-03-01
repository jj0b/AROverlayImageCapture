#import <AVFoundation/AVFoundation.h>

#define kImageCapturedSuccessfully @"imageCapturedSuccessfully"

@interface CaptureSessionManager : NSObject {

}

@property (retain) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain) AVCaptureSession *captureSession;
@property (retain) AVCaptureStillImageOutput *stillImageOutput;
@property (nonatomic, retain) UIImage *stillImage;

- (void)addVideoPreviewLayer;
- (void)addStillImageOutput;
- (void)captureStillImage;
- (void)addVideoInputFrontCamera:(BOOL)front;

@end
