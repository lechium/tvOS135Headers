/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol WFCredentialsProviderContext <WFProviderContext>
@property (getter=isPasswordSharingSupported,nonatomic,readonly) BOOL passwordSharingSupported; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSArray * availableTLSIdentities; 
@property (getter=isEnterprise,nonatomic,readonly) BOOL enterprise; 
@property (getter=isWeakSecurity,nonatomic,readonly) BOOL weakSecurity; 
@property (nonatomic,readonly) long long availableAuthTraits; 
@required
-(NSString *)username;
-(long long)availableAuthTraits;
-(NSArray *)availableTLSIdentities;
-(BOOL)isEnterprise;
-(BOOL)isPasswordSharingSupported;
-(BOOL)isWeakSecurity;
-(void)activatePasswordSharing;
-(void)deactivatePasswordSharingWithReactivation:(BOOL)arg1;
-(void)gatherCredentials:(/*^block*/id)arg1;
-(BOOL)validateCredentials;
-(BOOL)validatePassword;
-(void)launchSettings;

@end

