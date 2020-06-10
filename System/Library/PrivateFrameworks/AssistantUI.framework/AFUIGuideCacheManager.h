/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SAGuidanceGuideUpdate, NSObject, NSNumber, SAGuidanceGuideSnippet, SAGuidanceSuggestedUtterances;

@interface AFUIGuideCacheManager : NSObject {

	SAGuidanceGuideUpdate* _cachedGuideUpdate;
	NSObject*<OS_dispatch_queue> _cacheFileQueue;
	BOOL _isCheckingGuideUpdate;

}

@property (nonatomic,readonly) NSNumber * cachedGuideTag; 
@property (nonatomic,readonly) SAGuidanceGuideSnippet * cachedGuideSnippet; 
@property (nonatomic,readonly) SAGuidanceSuggestedUtterances * cachedSuggestedUtterances; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id)_cachedGuideUpdate;
-(BOOL)_shouldCheckForUpdateAtDate:(id)arg1 lastAppUpdateTime:(id)arg2 ;
-(void)_updateLastCheckedWithDate:(id)arg1 ;
-(id)_pathForCachedGuideUpdate;
-(void)updateCacheWithGuideUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateLastCheckedDate;
-(NSNumber *)cachedGuideTag;
-(void)_checkGuideUpdateUsingAFClientLiteWithTag:(id)arg1 ;
-(id)_aceObjectDictionaryAtFilepath:(id)arg1 ;
-(SAGuidanceGuideSnippet *)cachedGuideSnippet;
-(SAGuidanceSuggestedUtterances *)cachedSuggestedUtterances;
-(BOOL)shouldCheckForUpdateWithLastAppUpdateTime:(id)arg1 ;
-(void)_clearCachedGuide;
-(void)checkGuideUpdate;
@end

