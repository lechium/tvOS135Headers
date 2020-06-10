/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, HMFUnfairLock;

@interface HMDAccessoryPairingEventRetryMap : NSObject {

	NSMutableDictionary* _retryCountMap;
	HMFUnfairLock* _accessoryPairingRetryMapLock;

}

@property (nonatomic,readonly) NSMutableDictionary * retryCountMap;                       //@synthesize retryCountMap=_retryCountMap - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * accessoryPairingRetryMapLock;              //@synthesize accessoryPairingRetryMapLock=_accessoryPairingRetryMapLock - In the implementation block
+(id)sharedInstance;
-(id)init;
-(HMFUnfairLock *)accessoryPairingRetryMapLock;
-(NSMutableDictionary *)retryCountMap;
-(unsigned long long)retryCountForIdentifier:(id)arg1 ;
-(void)clearRetryCountMap;
-(void)incrementRetryCount:(id)arg1 ;
@end
