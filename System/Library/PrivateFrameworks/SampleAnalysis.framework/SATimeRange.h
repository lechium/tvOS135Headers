/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SATimestamp, NSString;

@interface SATimeRange : NSObject <SAJSONSerialization, SASerializable> {

	SATimestamp* _startTime;
	SATimestamp* _endTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) SATimestamp * startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (retain) SATimestamp * endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (readonly) unsigned long long deltaMachAbsTime; 
@property (readonly) double deltaMachAbsTimeSeconds; 
@property (readonly) unsigned long long deltaMachContTime; 
@property (readonly) double deltaMachContTimeSeconds; 
@property (readonly) double deltaWallTime; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA39*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)timeRangeStart:(id)arg1 end:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(SATimestamp *)startTime;
-(SATimestamp *)endTime;
-(void)setEndTime:(SATimestamp *)arg1 ;
-(void)setStartTime:(SATimestamp *)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA39*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA39*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)applyMachTimebase:(mach_timebase_info)arg1 ;
-(unsigned long long)deltaMachAbsTime;
-(double)deltaMachAbsTimeSeconds;
-(unsigned long long)deltaMachContTime;
-(double)deltaMachContTimeSeconds;
-(double)deltaWallTime;
@end
