/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemMetadataOutputInternal, NSDictionary;

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput {

	AVPlayerItemMetadataOutputInternal* _metadataOutputInternal;

}

@property (getter=_figMetadataOutputsDictionaryOptions,nonatomic,readonly) NSDictionary * figMetadataOutputsDictionaryOptions; 
@property (nonatomic,__weak,readonly) id<AVPlayerItemMetadataOutputPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (assign,nonatomic) double advanceIntervalForDelegateInvocation; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id<AVPlayerItemMetadataOutputPushDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)_figMetadataOutputsDictionaryOptions;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(void)_signalFlush;
-(void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2 ;
-(id)initWithIdentifiers:(id)arg1 ;
-(void)_collectUncollectables;
-(double)advanceIntervalForDelegateInvocation;
-(void)setAdvanceIntervalForDelegateInvocation:(double)arg1 ;
@end

