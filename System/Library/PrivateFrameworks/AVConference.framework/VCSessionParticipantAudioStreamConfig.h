/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCAudioStreamConfig.h>

@class VCAudioRuleCollection;

@interface VCSessionParticipantAudioStreamConfig : VCAudioStreamConfig {

	VCAudioRuleCollection* _audioRules;
	VCAudioRuleCollection* _audioRulesNegotiated;

}

@property (nonatomic,retain) VCAudioRuleCollection * audioRules;                        //@synthesize audioRules=_audioRules - In the implementation block
@property (nonatomic,retain) VCAudioRuleCollection * audioRulesNegotiated;              //@synthesize audioRulesNegotiated=_audioRulesNegotiated - In the implementation block
-(void)dealloc;
-(VCAudioRuleCollection *)audioRulesNegotiated;
-(void)setAudioRulesNegotiated:(VCAudioRuleCollection *)arg1 ;
-(VCAudioRuleCollection *)audioRules;
-(void)setAudioRules:(VCAudioRuleCollection *)arg1 ;
@end
