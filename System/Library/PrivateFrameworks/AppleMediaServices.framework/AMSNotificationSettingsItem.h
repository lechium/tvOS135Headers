/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface AMSNotificationSettingsItem : NSObject {

	BOOL _enabled;
	BOOL _userChanged;
	NSString* _desc;
	NSString* _identifier;
	NSString* _title;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * desc;                                      //@synthesize desc=_desc - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL userChanged;                                       //@synthesize userChanged=_userChanged - In the implementation block
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(BOOL)isEnabled;
-(NSString *)desc;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)userChanged;
-(id)initWithTitle:(id)arg1 description:(id)arg2 identifier:(id)arg3 enabled:(BOOL)arg4 ;
-(void)setUserChanged:(BOOL)arg1 ;
@end

