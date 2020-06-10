/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSDictionary, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings, AVCapturePhotoSettings, AVDepthData, AVCaptureBracketedStillImageSettings, AVApplePortraitMetadata;

@interface AVCapturePhotoInternal : NSObject {

	SCD_Struct_AV7 timestamp;
	IOSurfaceRef photoSurface;
	unsigned long long photoSurfaceSize;
	NSString* processedFileType;
	CVBufferRef photoPixelBuffer;
	CVBufferRef previewPixelBuffer;
	CVBufferRef embeddedThumbnailSourcePixelBuffer;
	NSDictionary* embeddedThumbnailPhotoFormat;
	NSDictionary* metadata;
	AVCameraCalibrationData* cameraCalibrationData;
	AVCaptureResolvedPhotoSettings* resolvedSettings;
	AVCapturePhotoSettings* unresolvedSettings;
	AVDepthData* depthData;
	BOOL didTryToDecodeDepthData;
	BOOL isRawPhoto;
	AVCaptureBracketedStillImageSettings* bracketSettings;
	unsigned long long sequenceCount;
	unsigned long long photoCount;
	NSString* sourceDeviceType;
	unsigned expectedPhotoProcessingFlags;
	unsigned actualPhotoProcessingFlags;
	AVApplePortraitMetadata* portraitMetadata;
	BOOL lensStabilizationSupported;

}
@end

