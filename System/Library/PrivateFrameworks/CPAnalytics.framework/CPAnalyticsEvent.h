/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSDictionary, CPAnalyticsSystemProperties;

@interface CPAnalyticsEvent : NSObject {

	NSString* _name;
	NSDate* _timestamp;
	NSDictionary* _payload;
	CPAnalyticsSystemProperties* _systemProperties;

}

@property (nonatomic,readonly) NSDictionary * payload;                                      //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) CPAnalyticsSystemProperties * systemProperties;              //@synthesize systemProperties=_systemProperties - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
-(NSString *)name;
-(id)propertyForKey:(id)arg1 ;
-(NSDate *)timestamp;
-(NSDictionary *)payload;
-(id)initWithName:(id)arg1 payload:(id)arg2 systemProperties:(id)arg3 ;
-(id)copyRawPayload;
-(CPAnalyticsSystemProperties *)systemProperties;
@end

