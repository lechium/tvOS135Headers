/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUMetadataCacheDataProviderDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface TUMetadataCacheDataProvider : NSObject {

	id<TUMetadataCacheDataProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _providerCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * providerCache;                                //@synthesize providerCache=_providerCache - In the implementation block
@property (assign,nonatomic,__weak) id<TUMetadataCacheDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(id)classIdentifier;
-(id)description;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isEmpty;
-(id<TUMetadataCacheDataProviderDelegate>)delegate;
-(void)setDelegate:(id<TUMetadataCacheDataProviderDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)refresh;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(void)setObject:(id)arg1 forDestinationID:(id)arg2 ;
-(NSMutableDictionary *)providerCache;
-(id)metadataForDestinationID:(id)arg1 ;
@end
