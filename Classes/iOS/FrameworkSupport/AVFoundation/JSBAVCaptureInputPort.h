#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMFormatDescription.h>
#import <CoreMedia/CMSync.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVCaptureInputPort <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) AVCaptureDevice *device;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) AVCaptureInput *input;
@property (nonatomic, getter = isEnabled) BOOL enabled;
@property (nonatomic, readonly) NSArray *ports;
@property (nonatomic, readonly) CMFormatDescriptionRef formatDescription;
@property (nonatomic, readonly) __attribute__ ((NSObject)) CMClockRef clock;

#pragma clang diagnostic pop

@end