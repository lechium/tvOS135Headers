/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSURL, NSString;

@interface GKAuthenticateResponse : GKInternalRepresentation {

	BOOL _loginDisabled;
	BOOL _passwordChangeRequired;
	BOOL _shouldShowLinkAccountsUI;
	GKPlayerCredential* _credential;
	NSURL* _passwordChangeURL;
	NSString* _alertTitle;
	NSString* _alertMessage;
	NSString* _lastPersonalizationVersionDisplayed;
	unsigned long long _lastPrivacyNoticeVersionDisplayed;

}

@property (nonatomic,retain) GKPlayerCredential * credential;                                   //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) BOOL loginDisabled;                                                //@synthesize loginDisabled=_loginDisabled - In the implementation block
@property (assign,nonatomic) BOOL passwordChangeRequired;                                       //@synthesize passwordChangeRequired=_passwordChangeRequired - In the implementation block
@property (nonatomic,retain) NSURL * passwordChangeURL;                                         //@synthesize passwordChangeURL=_passwordChangeURL - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkAccountsUI;                                     //@synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI - In the implementation block
@property (nonatomic,retain) NSString * alertTitle;                                             //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,retain) NSString * alertMessage;                                           //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,retain) NSString * lastPersonalizationVersionDisplayed;                    //@synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed - In the implementation block
@property (assign,nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;              //@synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed - In the implementation block
+(id)secureCodedPropertyKeys;
-(GKPlayerCredential *)credential;
-(void)setCredential:(GKPlayerCredential *)arg1 ;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
-(BOOL)loginDisabled;
-(void)setLoginDisabled:(BOOL)arg1 ;
-(BOOL)passwordChangeRequired;
-(void)setPasswordChangeRequired:(BOOL)arg1 ;
-(NSURL *)passwordChangeURL;
-(void)setPasswordChangeURL:(NSURL *)arg1 ;
-(BOOL)shouldShowLinkAccountsUI;
-(void)setShouldShowLinkAccountsUI:(BOOL)arg1 ;
-(NSString *)alertTitle;
-(void)setAlertTitle:(NSString *)arg1 ;
-(NSString *)lastPersonalizationVersionDisplayed;
-(void)setLastPersonalizationVersionDisplayed:(NSString *)arg1 ;
-(unsigned long long)lastPrivacyNoticeVersionDisplayed;
-(void)setLastPrivacyNoticeVersionDisplayed:(unsigned long long)arg1 ;
@end

