/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASerializable.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface PAWSUpdateDataStore : NSObject <PASerializable> {

	NSMutableArray* _wsUpdateArray;
	NSObject*<OS_dispatch_queue> _wsUpdateCallbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(void)_printFrameReportExplanationToStream:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)_getWSUpdateArraySnapshot;
-(void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 andEndIndex:(unsigned long long)arg2 andStartDisplayIndex:(unsigned long long)arg3 withSampleDataStore:(id)arg4 toStream:(id)arg5 ;
@end

