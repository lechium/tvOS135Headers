/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface WLKSubscriptionData : NSObject {

	NSDictionary* _backingDictionary;
	NSArray* _subscriptionArray;
	NSDictionary* _account;
	NSDictionary* _family;
	NSDictionary* _subscriptionsByAdamID;
	unsigned long long _activeSubscriptionsCount;
	NSDictionary* _activeTVPlusSubscription;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)subscriptions;
-(id)activeTVPlusSubscription;
-(BOOL)isEqualToSubscriptionData:(id)arg1 ;
-(id)subscriptionByAdamID:(id)arg1 ;
-(id)currentFamily;
-(id)currentAccount;
-(BOOL)isTVPlusSubscriber;
-(unsigned long long)activeSubscriptionsCount;
@end

