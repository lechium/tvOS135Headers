/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWStillImageTimeMachine : NSObject {

	OpaqueFigSimpleMutexRef _timeMachineMutex;
	opaqueCMSampleBuffer* _frames;
	BOOL _suspended;
	int _capacity;

}

@property (nonatomic,readonly) int capacity;              //@synthesize capacity=_capacity - In the implementation block
+(void)initialize;
+(BOOL)afComplete:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
-(void)resume;
-(void)drain;
-(int)capacity;
-(opaqueCMSampleBufferRef)copyBestFrame;
-(int)insertFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)suspendAndDrain;
-(void)_drain;
@end

