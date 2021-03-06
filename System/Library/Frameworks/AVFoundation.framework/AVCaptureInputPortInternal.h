/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInput, NSString;

@interface AVCaptureInputPortInternal : NSObject {

	AVCaptureInput* input;
	NSString* mediaType;
	opaqueCMFormatDescriptionRef formatDescription;
	OpaqueCMClockRef clock;
	BOOL enabled;
	int changeSeed;
	NSString* sourceID;
	NSString* sourceDeviceType;
	long long sourceDevicePosition;

}
-(id)init;
-(void)dealloc;
@end

