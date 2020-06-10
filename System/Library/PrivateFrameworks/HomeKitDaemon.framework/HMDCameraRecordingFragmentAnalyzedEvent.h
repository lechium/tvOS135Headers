/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraRecordingLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSUUID, NSString;

@interface HMDCameraRecordingFragmentAnalyzedEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent> {

	int _recordingReason;
	long long _analysisResultCode;
	NSUUID* _clipModelID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long analysisResultCode;                    //@synthesize analysisResultCode=_analysisResultCode - In the implementation block
@property (retain) NSUUID * clipModelID;                            //@synthesize clipModelID=_clipModelID - In the implementation block
@property (assign) int recordingReason;                             //@synthesize recordingReason=_recordingReason - In the implementation block
+(id)uuid;
-(id)attributeDescriptions;
-(NSUUID *)clipModelID;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(long long)analysisResultCode;
-(int)recordingReason;
-(id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3 ;
-(void)setAnalysisResultCode:(long long)arg1 ;
-(void)setClipModelID:(NSUUID *)arg1 ;
-(void)setRecordingReason:(int)arg1 ;
@end

