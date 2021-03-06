/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data;
@class NSObject;

@interface HMDDataStreamFrameReader : NSObject {

	NSObject*<OS_dispatch_data> _partialFrame;
	BOOL _headerInfoRead;
	BOOL _streamFailed;
	unsigned char _currentframeType;
	unsigned long long _payloadLength;

}
+(id)logCategory;
-(id)init;
-(void)reset;
-(BOOL)hasFailed;
-(unsigned long long)bytesNeededForCurrentFrame;
-(void)_readFrameHeaderIfPossible;
-(BOOL)hasCompleteFrame;
-(void)pushFrameData:(id)arg1 ;
-(BOOL)hasPartialData;
-(id)popRawFrame;
@end

