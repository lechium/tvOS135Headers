/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface _TVFlatIconCache : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSObject*<OS_dispatch_queue> _appStateQueue;
	NSObject*<OS_dispatch_queue> _updateQueue;
	NSMutableDictionary* _appIdentifierToInstalledCacheKeys;
	NSMutableDictionary* _appIdentifierToIconName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_iconsCacheDirectory;
+(id)_smallIconsCacheDirectory;
+(id)_launchImagesCacheDirectory;
+(void)_cleanStaleAssetsInCacheDirectory:(id)arg1 withInstalledCacheKeys:(id)arg2 ;
+(void)_disableLSWorkspaceInstallHandling;
-(id)init;
-(void)dealloc;
-(void)_update;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)_updateForInstalledApplications:(id)arg1 ;
-(void)_updateForUninstalledApplications:(id)arg1 ;
-(void)_appStateMonitorDidChange:(id)arg1 ;
-(void)_queue_appStateMonitorDidChange;
-(void)_removeCachedImagesForCacheKey:(id)arg1 ;
-(id)_cacheIconPathWithCacheKey:(id)arg1 ;
-(BOOL)_createApplicationIcon:(id)arg1 ;
-(id)_createFlatApplicationIconIfNeeded:(id)arg1 ;
-(id)_iconImageFromPath:(id)arg1 ;
-(id)_cacheSmallIconPathWithCacheKey:(id)arg1 ;
-(BOOL)_createSmallApplicationIcon:(id)arg1 ;
-(id)_createSmallFlatApplicationIconIfNeeded:(id)arg1 ;
-(void)_cleanStaleAssets;
-(BOOL)_createApplicationIcon:(id)arg1 size:(CGSize)arg2 cornerRadius:(double)arg3 destination:(id)arg4 ;
-(id)flatIconForAppProxy:(id)arg1 ;
-(id)smallFlatIconForAppProxy:(id)arg1 ;
-(id)_cacheLaunchImagePathWithCacheKey:(id)arg1 ;
-(void)_flushApplicationCachedImages:(id)arg1 ;
@end

