/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWObjectDetector.h>

@class NSMutableArray, NSString;

@interface BWDetectedObjectsInfoRingBuffer : NSObject <BWObjectDetector> {

	NSMutableArray* _ringBuffer;
	OpaqueFigSimpleMutexRef _mutex;
	int _depth;
	int _numConsecutiveFramesWithObjects;
	SCD_Struct_BW2 _lastUpdatePTS;
	SCD_Struct_BW2 _lastStableObjectPTS;

}

@property (readonly) id<BWObjectDetector> objectDetector; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) float secondsSinceLastObjectDetected; 
-(void)dealloc;
-(void)flush;
-(id<BWObjectDetector>)objectDetector;
-(id)initWithRingBufferDepth:(int)arg1 ;
-(void)transferObjectsToSampleBuffer:(opaqueCMSampleBufferRef)arg1 totalSensorCropRect:(CGRect)arg2 ;
-(void)addObjectsFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)getObjectsRects:(CGRect*)arg1 maxCount:(int)arg2 forPTS:(SCD_Struct_BW2)arg3 ;
-(float)secondsSinceLastObjectDetected;
@end

