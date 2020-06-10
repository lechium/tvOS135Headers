/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSMutableArray;

@interface IDSStallDetector : NSObject {

	BOOL _verboseLogging;
	os_unfair_lock_s _lock;
	/*^block*/id _stallDetectedBlock;
	/*^block*/id _stallWarningBlock;
	unsigned long long _consumeDelayThreshold;
	double _byteMovementDelayThreshold;
	NSMutableArray* _bytesHistory;
	NSMutableArray* _bytesTimestamps;

}

@property (assign,nonatomic) BOOL verboseLogging;                                   //@synthesize verboseLogging=_verboseLogging - In the implementation block
@property (assign,nonatomic) unsigned long long consumeDelayThreshold; 
@property (assign,nonatomic) double byteMovementDelayThreshold; 
+(id)newDetectorWithName:(id)arg1 stallDetectedBlock:(/*^block*/id)arg2 stallWarningBlock:(/*^block*/id)arg3 ;
+(id)detectorWithName:(id)arg1 ;
+(void)removeDetectorWithName:(id)arg1 ;
-(void)reset;
-(BOOL)consumeTimeCheckForEvent:(id)arg1 produceTime:(unsigned long long)arg2 consumeTime:(unsigned long long)arg3 ;
-(unsigned long long)consumeDelayThreshold;
-(void)setConsumeDelayThreshold:(unsigned long long)arg1 ;
-(double)byteMovementDelayThreshold;
-(void)setByteMovementDelayThreshold:(double)arg1 ;
-(BOOL)byteMovementCheckForEvent:(id)arg1 ;
-(void)produceBytes:(int)arg1 ;
-(void)consumeBytes:(int)arg1 ;
-(void)forceTriggerStallDetectedBlockWithEventName:(id)arg1 ;
-(BOOL)verboseLogging;
-(void)setVerboseLogging:(BOOL)arg1 ;
@end
