/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary;

@interface BWDeferredProcessingSourceNode : BWSourceNode {

	NSMutableDictionary* _outputsByPortType;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;
	BOOL _running;

}

@property (nonatomic,readonly) NSDictionary * outputsByPortType;              //@synthesize outputsByPortType=_outputsByPortType - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)outputForPortType:(id)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(BOOL)start:(id*)arg1 ;
-(id)initWithPortTypes:(id)arg1 attributes:(id)arg2 ;
-(id)portTypeForOutput:(id)arg1 ;
-(void)processBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSDictionary *)outputsByPortType;
@end

