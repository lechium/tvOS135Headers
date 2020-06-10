/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSPolicy.h>

@class CSPolicy;

@interface CSSelfTriggerDetectorEnabledPolicyGibraltar : CSPolicy {

	CSPolicy* _voiceTriggerEnabledPolicy;

}

@property (nonatomic,retain) CSPolicy * voiceTriggerEnabledPolicy;              //@synthesize voiceTriggerEnabledPolicy=_voiceTriggerEnabledPolicy - In the implementation block
-(id)init;
-(void)_subscribeEventMonitors;
-(void)_addSelfTriggerDetectorEnabledConditions;
-(CSPolicy *)voiceTriggerEnabledPolicy;
-(void)setVoiceTriggerEnabledPolicy:(CSPolicy *)arg1 ;
@end

