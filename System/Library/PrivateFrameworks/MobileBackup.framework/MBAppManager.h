/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject {

	MBSettingsContext* _settingsContext;
	NSMutableDictionary* _containersByID;
	NSMutableDictionary* _systemDataContainersByID;
	NSMutableDictionary* _systemSharedContainersByID;

}
+(id)_allPersistedDisabledDomainNames;
+(void)_persistDisabledDomainNames:(id)arg1 ;
+(id)appManager;
+(id)appManagerWithSettingsContext:(id)arg1 ;
-(void)dealloc;
-(id)containerWithIdentifier:(id)arg1 ;
-(id)allContainers;
-(id)allPlugins;
-(id)initWithSettingsContext:(id)arg1 ;
-(id)allApps;
-(id)_subdomainNamesForAppDomainNames:(id)arg1 ;
-(id)_allDisabledDomainNames;
-(id)allDisabledDomainNames;
-(id)_copyUserAppsWithError:(id*)arg1 ;
-(id)_copySystemContainersWithError:(id*)arg1 ;
-(id)_copySafeHarborsWithError:(id*)arg1 ;
-(id)_copySystemPluginsWithError:(id*)arg1 ;
-(id)_copyAppsWithPlists:(id)arg1 safeHarbor:(BOOL)arg2 error:(id*)arg3 ;
-(id)_copySystemPluginsWithPlists:(id)arg1 error:(id*)arg2 ;
-(id)_copySystemContainersWithPlists:(id)arg1 error:(id*)arg2 ;
-(id)createSafeHarborForContainer:(id)arg1 usingIntermediateRestoreDir:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)moveAppDataToSafeHarborForContainer:(id)arg1 usingIntermediateRestoreDir:(BOOL)arg2 withError:(id*)arg3 ;
-(void)removeAllDisabledDomainNames;
-(BOOL)isDomainNameEnabled:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forDomainName:(id)arg2 ;
-(id)allRestrictedDomainNames;
-(BOOL)loadAppsWithSafeHarbors:(BOOL)arg1 error:(id*)arg2 ;
-(id)allSystemContainers;
-(id)systemDataContainerWithIdentifier:(id)arg1 ;
-(id)systemSharedContainerWithIdentifier:(id)arg1 ;
-(id)appWithIdentifier:(id)arg1 ;
-(void)removeOldSafeHarbors;
-(void)removeOldAppPlaceholderDomainZip;
-(id)createSafeHarborForContainer:(id)arg1 error:(id*)arg2 ;
-(BOOL)moveAppDataToSafeHarborForContainer:(id)arg1 withError:(id*)arg2 ;
@end

