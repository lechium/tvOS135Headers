/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NSString, UIImage, VSPrivacyFacade, LSApplicationWorkspace, VSRestrictionsCenter, VSAppDescription, VSOptional, NSURL;

@interface VSAppSettingsViewModel : NSObject <LSApplicationWorkspaceObserverProtocol> {

	int _registrationToken;
	NSString* _adamID;
	NSString* _bundleID;
	UIImage* _icon;
	NSString* _displayName;
	NSString* _storeName;
	long long _installState;
	long long _privacyState;
	VSPrivacyFacade* _privacyFacade;
	LSApplicationWorkspace* _workspace;
	VSRestrictionsCenter* _restrictionsCenter;
	CFBundleRef _bundle;
	VSAppDescription* _appDescription;
	NSString* _buyParams;
	VSOptional* _voucher;

}

@property (assign,nonatomic) long long installState;                                 //@synthesize installState=_installState - In the implementation block
@property (assign,nonatomic) long long privacyState;                                 //@synthesize privacyState=_privacyState - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) VSPrivacyFacade * privacyFacade;                        //@synthesize privacyFacade=_privacyFacade - In the implementation block
@property (nonatomic,retain) LSApplicationWorkspace * workspace;                     //@synthesize workspace=_workspace - In the implementation block
@property (assign,nonatomic) int registrationToken;                                  //@synthesize registrationToken=_registrationToken - In the implementation block
@property (nonatomic,retain) VSRestrictionsCenter * restrictionsCenter;              //@synthesize restrictionsCenter=_restrictionsCenter - In the implementation block
@property (assign,nonatomic) CFBundleRef bundle;                                     //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) VSAppDescription * appDescription;                      //@synthesize appDescription=_appDescription - In the implementation block
@property (nonatomic,copy) NSString * buyParams;                                     //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,retain) VSOptional * voucher;                                   //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,copy,readonly) NSString * adamID;                               //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * appStoreURL; 
@property (nonatomic,copy,readonly) NSString * storeName;                            //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * installationTitle; 
@property (nonatomic,copy,readonly) NSString * unavailableTitle; 
@property (nonatomic,copy,readonly) NSString * launchAppTitle; 
@property (nonatomic,readonly) BOOL canChangePrivacyAccess; 
@property (assign,getter=isAccessGranted,nonatomic) BOOL accessGranted; 
@property (nonatomic,readonly) BOOL canRevokeVoucher; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingAccessGranted;
-(id)name;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(NSString *)bundleID;
-(CFBundleRef)bundle;
-(NSString *)displayName;
-(long long)installState;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationsDidFailToUninstall:(id)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)adamID;
-(BOOL)isAccessGranted;
-(LSApplicationWorkspace *)workspace;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(void)setWorkspace:(LSApplicationWorkspace *)arg1 ;
-(void)setBundle:(CFBundleRef)arg1 ;
-(VSOptional *)voucher;
-(void)setVoucher:(VSOptional *)arg1 ;
-(NSString *)storeName;
-(NSURL *)appStoreURL;
-(void)launchApp;
-(id)appAdamIDs;
-(VSPrivacyFacade *)privacyFacade;
-(int)registrationToken;
-(void)setRegistrationToken:(int)arg1 ;
-(void)setInstallState:(long long)arg1 ;
-(id)appBundleIDs;
-(id)appIconURLForSize:(CGSize)arg1 ;
-(id)iconURLForSize:(CGSize)arg1 ;
-(void)_updatePrivacyState;
-(id)initWithBundle:(CFBundleRef)arg1 restrictionsCenter:(id)arg2 privacyFacade:(id)arg3 ;
-(void)setPrivacyState:(long long)arg1 ;
-(VSAppDescription *)appDescription;
-(long long)privacyState;
-(VSRestrictionsCenter *)restrictionsCenter;
-(void)_grantPrivacyAccess;
-(void)_denyPrivacyAccess;
-(BOOL)canChangePrivacyAccess;
-(id)initWithBundle:(CFBundleRef)arg1 restrictionsCenter:(id)arg2 privacyFacade:(id)arg3 adamID:(id)arg4 ;
-(id)initWithAppDescription:(id)arg1 privacyVoucher:(id)arg2 restrictionsCenter:(id)arg3 privacyFacade:(id)arg4 ;
-(NSString *)installationTitle;
-(NSString *)unavailableTitle;
-(NSString *)launchAppTitle;
-(BOOL)canRevokeVoucher;
-(void)revokeVoucher;
-(void)installApp;
-(void)setAccessGranted:(BOOL)arg1 ;
-(void)setPrivacyFacade:(VSPrivacyFacade *)arg1 ;
-(void)setRestrictionsCenter:(VSRestrictionsCenter *)arg1 ;
-(void)setAppDescription:(VSAppDescription *)arg1 ;
@end

