/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, AVRunLoopCondition;

@interface AVAssetReaderOutputInternal : NSObject {

	AVWeakReference* weakReference;
	BOOL alwaysCopiesSampleData;
	BOOL supportsRandomAccess;
	NSArray* currentTimeRanges;
	AVWeakReference* weakReferenceToAssetReader;
	OpaqueFigAssetReaderRef figAssetReader;
	int extractionID;
	AVRunLoopCondition* sampleBufferAvailabilityCondition;
	BOOL currentConfigurationIsFinal;
	BOOL extractionCompleteForCurrentConfiguration;
	int finished;
	BOOL maximizePowerEfficiency;

}
@end
