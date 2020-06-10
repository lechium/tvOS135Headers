/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVXClientSessionServiceDelegate <NSObject>
@optional
-(void)sessionServiceDidResignActive:(id)arg1;

@required
-(void)sessionService:(id)arg1 willChangeStateFrom:(long long)arg2 to:(long long)arg3;
-(void)sessionService:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;
-(void)sessionService:(id)arg1 willPresentFeedbackWithDialogIdentifier:(id)arg2;
-(void)sessionService:(id)arg1 willStartSoundWithID:(long long)arg2;
-(void)sessionService:(id)arg1 didStartSoundWithID:(long long)arg2;
-(void)sessionService:(id)arg1 didStopSoundWithID:(long long)arg2 error:(id)arg3;
-(void)sessionService:(id)arg1 willBecomeActiveWithActivationContext:(id)arg2;
-(void)sessionService:(id)arg1 didBecomeActiveWithActivationContext:(id)arg2;
-(void)sessionService:(id)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3;
-(void)sessionService:(id)arg1 didResignActiveWithDeactivationContext:(id)arg2;

@end

