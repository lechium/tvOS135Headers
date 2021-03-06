/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampleAggregator.h>

@class NSString;

@interface PAProcessInstanceAggregator : PASampleAggregator {

	unsigned long long _startingTSDSIndex;
	NSString* _headerNote;
	unsigned long long _stackshotFrameAddress;
	unsigned long long _timestampIndexWhenTransitionedToSamplingAllProcesses;
	BOOL _forceOneBasedTimeIndexes;

}

@property (readonly) BOOL hasTargetProcess; 
@property (assign) unsigned long long stackshotFrameAddress;                                               //@synthesize stackshotFrameAddress=_stackshotFrameAddress - In the implementation block
@property (readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllProcesses;              //@synthesize timestampIndexWhenTransitionedToSamplingAllProcesses=_timestampIndexWhenTransitionedToSamplingAllProcesses - In the implementation block
@property (copy) NSString * headerNote;                                                                    //@synthesize headerNote=_headerNote - In the implementation block
@property (assign) BOOL forceOneBasedTimeIndexes;                                                          //@synthesize forceOneBasedTimeIndexes=_forceOneBasedTimeIndexes - In the implementation block
@property (assign) BOOL printSpinSignatureStack; 
@property (assign) BOOL printTargetHIDEvent; 
@property (assign) BOOL printHeavyStacks; 
-(void)setSamples:(id)arg1 ;
-(BOOL)printSpinSignatureStack;
-(void)setPrintSpinSignatureStack:(BOOL)arg1 ;
-(BOOL)printTargetHIDEvent;
-(void)setPrintTargetHIDEvent:(BOOL)arg1 ;
-(BOOL)printHeavyStacks;
-(void)setPrintHeavyStacks:(BOOL)arg1 ;
-(void)printHeaderToOutputStream:(id)arg1 ;
-(id)sortedTasks;
-(void)printFooterToOutputStream:(id)arg1 ;
-(id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(id)initWithSampleStore:(id)arg1 ;
-(id)sampleTaskWithPid:(int)arg1 orTid:(unsigned long long)arg2 atTimestampIndex:(unsigned long long)arg3 ;
-(id)sampleTaskWithPid:(int)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(BOOL)hasTargetProcess;
-(int)displayTimeIndexForTimestampIndex:(unsigned long long)arg1 ;
-(unsigned long long)timestampIndexWhenTransitionedToSamplingAllProcesses;
-(unsigned long long)stackshotFrameAddress;
-(id)kernelSampleTaskForSymbolication;
-(void)setStackshotFrameAddress:(unsigned long long)arg1 ;
-(id)sampleTaskWithUniqueId:(unsigned long long)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(unsigned long long)sampleIndexForDisplayTimeIndex:(int)arg1 ;
-(BOOL)shouldPrintTimeOutsideSamplingRange:(double)arg1 ;
-(void)printHIDEvent:(id)arg1 toOutputStream:(id)arg2 ;
-(id)sampleIndexStringForMachTime:(double)arg1 ;
-(id)sampleIndexStringForMachTimeRangeStart:(double)arg1 end:(double)arg2 ;
-(void)printHIDEventsToOutputStream:(id)arg1 ;
-(void)limitToSampleInterval:(double)arg1 ;
-(void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(void)filterToMachTimeRangeStart:(double)arg1 end:(double)arg2 ;
-(void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2 ;
-(BOOL)forceOneBasedTimeIndexes;
-(void)setForceOneBasedTimeIndexes:(BOOL)arg1 ;
-(NSString *)headerNote;
-(void)setHeaderNote:(NSString *)arg1 ;
@end

