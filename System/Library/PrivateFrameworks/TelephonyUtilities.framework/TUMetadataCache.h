/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUMetadataCacheDataProviderDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface TUMetadataCache : NSObject <TUMetadataCacheDataProviderDelegate> {

	NSArray* _providers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * providers;                        //@synthesize providers=_providers - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classIdentifier;
-(NSString *)description;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isEmpty;
-(void)dataProvider:(id)arg1 requestedRefreshWithDestinationIDs:(id)arg2 ;
-(id)metadataForDestinationID:(id)arg1 ;
-(NSArray *)providers;
-(id)initWithQueue:(id)arg1 dataProviders:(id)arg2 ;
-(void)_updateCacheWithDestinationIDs:(id)arg1 onlyEmptyProviders:(BOOL)arg2 ;
-(id)initWithDataProviders:(id)arg1 ;
-(void)updateCacheWithDestinationIDs:(id)arg1 ;
-(void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)arg1 ;
@end
