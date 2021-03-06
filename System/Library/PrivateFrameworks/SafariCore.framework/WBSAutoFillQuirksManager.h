/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSRemotePlistControllerDelegate.h>

@class WBSPasswordGenerationManager, WBSAutoFillAssociatedDomainsManager, WBSRemotePlistController, WBSPasswordAuditingEligibleDomainsManager, NSString;

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotePlistControllerDelegate> {

	WBSPasswordGenerationManager* _passwordGenerationManager;
	WBSAutoFillAssociatedDomainsManager* _associatedDomainsManager;
	WBSRemotePlistController* _remotePlistController;
	WBSPasswordAuditingEligibleDomainsManager* _passwordAuditingEligibleDomainsManager;
	BOOL _shouldAttemptToDownloadConfiguration;

}

@property (nonatomic,readonly) WBSPasswordGenerationManager * passwordGenerationManager; 
@property (nonatomic,readonly) WBSAutoFillAssociatedDomainsManager * associatedDomainsManager; 
@property (nonatomic,readonly) WBSPasswordAuditingEligibleDomainsManager * passwordAuditingEligibleDomainsManager; 
@property (assign,nonatomic) BOOL shouldAttemptToDownloadConfiguration;                                                         //@synthesize shouldAttemptToDownloadConfiguration=_shouldAttemptToDownloadConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(WBSPasswordAuditingEligibleDomainsManager *)passwordAuditingEligibleDomainsManager;
-(WBSAutoFillAssociatedDomainsManager *)associatedDomainsManager;
-(void)setShouldAttemptToDownloadConfiguration:(BOOL)arg1 ;
-(void)prepareForTermination;
-(id)_passwordRequirementsByDomainFromCurrentSnapshot;
-(id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
-(id)_domainsToConsiderIdenticalFromCurrentSnapshot;
-(id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
-(void)didDownloadPlistForRemotePlistController:(id)arg1 ;
-(id)initWithBuiltInQuirksURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 ;
-(void)beginLoadingQuirksFromDisk;
-(WBSPasswordGenerationManager *)passwordGenerationManager;
-(BOOL)isAutomaticLoginDisallowedOnURL:(id)arg1 ;
-(BOOL)isStreamlinedLoginDisallowedOnURL:(id)arg1 ;
-(BOOL)shouldAttemptToDownloadConfiguration;
@end

