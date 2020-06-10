/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BBSettingsGateway, NSDictionary;

@interface PSNotificationSettingsController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BBSettingsGateway* _gateway;
	NSDictionary* _sectionInfosByIdentifier;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)allSectionInfoIdentifiers;
-(id)sectionInfoForIdentifier:(id)arg1 ;
@end

