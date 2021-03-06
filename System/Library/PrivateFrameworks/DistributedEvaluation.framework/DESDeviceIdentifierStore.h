/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSMutableDictionary;

@interface DESDeviceIdentifierStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _storeURL;
	NSMutableDictionary* _deviceIdentifiers;

}

@property (nonatomic,retain) NSURL * storeURL;                                     //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceIdentifiers;              //@synthesize deviceIdentifiers=_deviceIdentifiers - In the implementation block
+(void)initialize;
-(NSMutableDictionary *)deviceIdentifiers;
-(void)setDeviceIdentifiers:(NSMutableDictionary *)arg1 ;
-(NSURL *)storeURL;
-(void)_readIdentifierStore;
-(void)_writeIdentifierStore;
-(id)initWithStoreURL:(id)arg1 ;
-(id)identifierForBundleId:(id)arg1 ;
-(void)setStoreURL:(NSURL *)arg1 ;
@end

