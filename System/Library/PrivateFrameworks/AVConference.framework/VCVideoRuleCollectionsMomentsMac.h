/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCVideoRuleCollectionsMoments.h>

@protocol VCHardwareSettingsMacProtocol;
@interface VCVideoRuleCollectionsMomentsMac : VCVideoRuleCollectionsMoments {

	id<VCHardwareSettingsMacProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(int)getMomentsCapabilities;
-(id)getMomentsVideoCodecs;
-(id)getMomentsImageTypes;
-(id)initWithHardwareSettings:(id)arg1 ;
@end

