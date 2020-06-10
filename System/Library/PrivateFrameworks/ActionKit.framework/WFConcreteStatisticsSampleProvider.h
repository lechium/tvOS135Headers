/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/WFStatisticsSampleProvider.h>

@protocol WFStatisticsSampleProvider;
@class NSArray, NSObject, NSString;

@interface WFConcreteStatisticsSampleProvider : NSProxy <WFStatisticsSampleProvider> {

	NSObject*<WFStatisticsSampleProvider> _sampleProvider;

}

@property (nonatomic,retain) NSObject*<WFStatisticsSampleProvider> sampleProvider;              //@synthesize sampleProvider=_sampleProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canProvideDataSamples; 
@property (nonatomic,readonly) NSArray * dataSamples; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithSampleProvider:(id)arg1 ;
-(NSObject*<WFStatisticsSampleProvider>)sampleProvider;
-(void)setSampleProvider:(NSObject*<WFStatisticsSampleProvider>)arg1 ;
@end

