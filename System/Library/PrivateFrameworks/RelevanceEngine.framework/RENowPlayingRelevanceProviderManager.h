/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/RENowPlayingRelevanceProviderManagerProperties.h>

@interface RENowPlayingRelevanceProviderManager : RERelevanceProviderManager <RENowPlayingRelevanceProviderManagerProperties> {

	unsigned long long _state;

}

@property (nonatomic,readonly) unsigned long long state; 
+(id)_features;
+(Class)_relevanceProviderClass;
-(unsigned long long)state;
-(void)resume;
-(void)pause;
-(id)initWithQueue:(id)arg1 ;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_updatePlaybackState;
@end

