/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSMutableDictionary, NSDate;

@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager {

	NSMutableDictionary* _relevanceProviderMap;
	NSDate* _lastDateUpdate;

}
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_supportsHistoricProviders;
-(void)dealloc;
-(void)resume;
-(void)pause;
-(id)initWithQueue:(id)arg1 ;
-(void)_handleSignificantTimeChange;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_prepareForUpdate;
-(void)_handleActionPerformedNotifiction:(id)arg1 ;
-(void)_scheduleUpdatesForActionProvider:(id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(float)_relevanceForHistoricProvider:(id)arg1 ;
-(void)_addedProvider:(id)arg1 ;
-(void)_removeProvider:(id)arg1 ;
@end
