/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCManagedDefaultsManager : NSObject
+(id)sharedManager;
-(id)managedDefaultsPathForDomain:(id)arg1 ;
-(id)managedDefaultsForDomain:(id)arg1 ;
-(void)setDefaults:(id)arg1 forManagedDomain:(id)arg2 ;
-(id)managedSystemDefaultsForDomain:(id)arg1 ;
-(void)setGlobalPreferencesDefaults:(id)arg1 ;
-(BOOL)domainHasManagedDefaults:(id)arg1 ;
-(void)addDefaults:(id)arg1 toManagedDomain:(id)arg2 ;
-(void)removeDefaults:(id)arg1 fromManagedDomain:(id)arg2 ;
-(void)addGlobalPreferenceDefaults:(id)arg1 ;
-(void)removeGlobalPreferenceDefaults:(id)arg1 ;
-(void)removeAllManagedDefaultsFromDomain:(id)arg1 ;
-(void)sendManagedDefaultsChangedNotificationForDomains:(id)arg1 ;
@end

