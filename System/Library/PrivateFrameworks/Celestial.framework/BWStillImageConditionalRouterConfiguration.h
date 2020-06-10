/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BWStillImageConditionalRouterConfiguration : NSObject {

	unsigned _numberOfOutputs;
	/*^block*/id _shouldEmitSampleBufferDecisionProvider;
	unsigned _numberOfInputs;

}

@property (nonatomic,readonly) unsigned numberOfInputs;                            //@synthesize numberOfInputs=_numberOfInputs - In the implementation block
@property (nonatomic,readonly) unsigned numberOfOutputs;                           //@synthesize numberOfOutputs=_numberOfOutputs - In the implementation block
@property (nonatomic,copy) id shouldEmitSampleBufferDecisionProvider;              //@synthesize shouldEmitSampleBufferDecisionProvider=_shouldEmitSampleBufferDecisionProvider - In the implementation block
-(void)dealloc;
-(id)initWithNumberOfOutputs:(unsigned)arg1 ;
-(unsigned)numberOfOutputs;
-(id)shouldEmitSampleBufferDecisionProvider;
-(void)setShouldEmitSampleBufferDecisionProvider:(id)arg1 ;
-(unsigned)numberOfInputs;
@end

