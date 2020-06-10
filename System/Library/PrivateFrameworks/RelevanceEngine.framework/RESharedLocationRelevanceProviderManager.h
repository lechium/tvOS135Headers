/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REEngineLocationManagerObserver.h>
#import <libobjc.A.dylib/RESharedLocationRelevanceProviderManagerProperties.h>

@class CLLocation, NSString;

@interface RESharedLocationRelevanceProviderManager : RERelevanceProviderManager <REEngineLocationManagerObserver, RESharedLocationRelevanceProviderManagerProperties> {

	CLLocation* _lastLocationUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocation * currentLocation; 
+(BOOL)_wantsSeperateRelevanceQueue;
-(void)resume;
-(void)pause;
-(CLLocation *)currentLocation;
-(void)_queue_loadLocation:(id)arg1 ;
-(void)locationManagerDidUpdateLocation:(id)arg1 ;
@end

