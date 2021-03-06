/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RTXPCActivityCriteria : NSObject {

	BOOL _requireNetworkConnectivity;
	BOOL _requireInexpensiveNetworkConnectivity;
	BOOL _allowBattery;
	BOOL _powerNap;
	double _interval;
	double _delay;
	double _gracePeriod;
	unsigned long long _priority;
	unsigned long long _networkTransferDirection;
	NSMutableDictionary* _additionalCriteria;

}

@property (nonatomic,retain) NSMutableDictionary * additionalCriteria;                   //@synthesize additionalCriteria=_additionalCriteria - In the implementation block
@property (nonatomic,readonly) double interval;                                          //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double delay;                                             //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double gracePeriod;                                       //@synthesize gracePeriod=_gracePeriod - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL requireNetworkConnectivity;                          //@synthesize requireNetworkConnectivity=_requireNetworkConnectivity - In the implementation block
@property (nonatomic,readonly) BOOL requireInexpensiveNetworkConnectivity;               //@synthesize requireInexpensiveNetworkConnectivity=_requireInexpensiveNetworkConnectivity - In the implementation block
@property (nonatomic,readonly) unsigned long long networkTransferDirection;              //@synthesize networkTransferDirection=_networkTransferDirection - In the implementation block
@property (nonatomic,readonly) BOOL allowBattery;                                        //@synthesize allowBattery=_allowBattery - In the implementation block
@property (nonatomic,readonly) BOOL powerNap;                                            //@synthesize powerNap=_powerNap - In the implementation block
+(const char*)convertPriority:(unsigned long long)arg1 ;
+(const char*)convertNetworkTransferDirection:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)priority;
-(double)interval;
-(double)delay;
-(double)gracePeriod;
-(BOOL)requireNetworkConnectivity;
-(BOOL)allowBattery;
-(id)initWithInterval:(double)arg1 gracePeriod:(double)arg2 priority:(unsigned long long)arg3 requireNetworkConnectivity:(BOOL)arg4 requireInexpensiveNetworkConnectivity:(BOOL)arg5 networkTransferDirection:(unsigned long long)arg6 allowBattery:(BOOL)arg7 powerNap:(BOOL)arg8 ;
-(void)setCriteria:(id)arg1 forKey:(id)arg2 ;
-(BOOL)requireInexpensiveNetworkConnectivity;
-(unsigned long long)networkTransferDirection;
-(BOOL)powerNap;
-(NSMutableDictionary *)additionalCriteria;
-(void)setAdditionalCriteria:(NSMutableDictionary *)arg1 ;
@end

