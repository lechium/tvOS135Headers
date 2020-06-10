/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CoreTelephonyCellInfoContext : NSObject {

	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)initWithCompletion:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

