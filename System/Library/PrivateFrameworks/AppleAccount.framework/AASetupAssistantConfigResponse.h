/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AASetupAssistantConfigResponse : AAResponse {

	NSDictionary* _urls;

}

@property (nonatomic,readonly) NSString * signingSessionCertURL; 
@property (nonatomic,readonly) NSString * signingSessionURL; 
@property (nonatomic,readonly) NSString * aboutURL; 
@property (nonatomic,readonly) NSString * xmlUI; 
@property (nonatomic,readonly) NSString * upgradeIOSTermsUI; 
@property (nonatomic,readonly) NSString * genericTermsURL; 
@property (nonatomic,readonly) NSString * iForgotUIURL; 
@property (nonatomic,readonly) NSString * authenticateURL; 
@property (nonatomic,readonly) NSString * createAppleIDURL; 
@property (nonatomic,readonly) NSString * updateAppleIDURL; 
@property (nonatomic,readonly) NSString * createDelegateAccountsURL; 
@property (nonatomic,readonly) NSString * checkValidityURL; 
@property (nonatomic,readonly) NSString * iForgotURL; 
@property (nonatomic,readonly) NSString * existingAppleIDTermsUIURL; 
@property (nonatomic,readonly) BOOL setupAssistantServerEnabled; 
@property (nonatomic,readonly) NSString * loginDelegatesURL; 
@property (nonatomic,readonly) NSString * activeEmailDomain; 
@property (nonatomic,readonly) NSString * upgradeStatusURL; 
-(NSString *)iForgotURL;
-(NSString *)createAppleIDURL;
-(NSString *)signingSessionCertURL;
-(NSString *)signingSessionURL;
-(NSString *)authenticateURL;
-(NSString *)updateAppleIDURL;
-(NSString *)createDelegateAccountsURL;
-(NSString *)upgradeIOSTermsUI;
-(NSString *)upgradeStatusURL;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)xmlUI;
-(NSString *)aboutURL;
-(NSString *)checkValidityURL;
-(NSString *)existingAppleIDTermsUIURL;
-(NSString *)loginDelegatesURL;
-(NSString *)genericTermsURL;
-(BOOL)setupAssistantServerEnabled;
-(NSString *)activeEmailDomain;
-(NSString *)iForgotUIURL;
@end

