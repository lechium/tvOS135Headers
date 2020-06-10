/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASerializable.h>

@class NSString;

@interface PAWSUpdate : NSObject <PASerializable> {

	double _frameStartTime;
	double _deferStartTime;
	double _workStartTime;
	double _workEndTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double frameStartTime;                         //@synthesize frameStartTime=_frameStartTime - In the implementation block
@property (readonly) double waitStartTime; 
@property (readonly) double waitEndTime; 
@property (readonly) double deferStartTime;                         //@synthesize deferStartTime=_deferStartTime - In the implementation block
@property (readonly) double deferEndTime; 
@property (readonly) double workStartTime;                          //@synthesize workStartTime=_workStartTime - In the implementation block
@property (readonly) double workEndTime;                            //@synthesize workEndTime=_workEndTime - In the implementation block
@property (readonly) double frameEndTime; 
@property (readonly) double waitDuration; 
@property (readonly) double workDuration; 
@property (readonly) double deferDuration; 
@property (readonly) double frameDuration; 
@property (readonly) BOOL wasIdle; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(void)printASCIIBarLegendToStream:(id)arg1 ;
-(double)frameDuration;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(double)frameStartTime;
-(double)deferStartTime;
-(double)waitEndTime;
-(double)waitStartTime;
-(double)waitDuration;
-(double)workStartTime;
-(double)workEndTime;
-(double)deferEndTime;
-(double)frameEndTime;
-(double)workDuration;
-(double)deferDuration;
-(BOOL)wasIdle;
-(void)printFPSASCIIBarToStream:(id)arg1 ;
@end
