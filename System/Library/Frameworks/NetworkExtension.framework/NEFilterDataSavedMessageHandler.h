/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NEFilterDataSavedMessageHandler : NSObject {

	/*^block*/id _getVerdict;
	/*^block*/id _handleVerdict;

}

@property (nonatomic,readonly) id getVerdict;                 //@synthesize getVerdict=_getVerdict - In the implementation block
@property (nonatomic,readonly) id handleVerdict;              //@synthesize handleVerdict=_handleVerdict - In the implementation block
-(void)executeVerdictHandlerWithFlow:(id)arg1 verdict:(id)arg2 context:(id)arg3 ;
-(void)executeWithFlow:(id)arg1 context:(id)arg2 ;
-(id)initWithGetVerdictBlock:(/*^block*/id)arg1 handleVerdictBlock:(/*^block*/id)arg2 ;
-(void)enqueueWithFlow:(id)arg1 context:(id)arg2 ;
-(id)getVerdict;
-(id)handleVerdict;
@end

