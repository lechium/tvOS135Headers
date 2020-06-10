/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CSAudioTimeConverter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _anchorSampleCount;
	unsigned long long _anchorHostTime;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long anchorSampleCount;              //@synthesize anchorSampleCount=_anchorSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long anchorHostTime;                 //@synthesize anchorHostTime=_anchorHostTime - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 ;
-(void)processSampleCount:(unsigned long long)arg1 hostTime:(unsigned long long)arg2 ;
-(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 ;
-(unsigned long long)anchorSampleCount;
-(void)setAnchorSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)anchorHostTime;
-(void)setAnchorHostTime:(unsigned long long)arg1 ;
@end

