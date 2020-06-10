/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TBAnalyticsEvent.h>

@class NSNumber, NSString, NSDictionary;

@interface TBCacheAnalyticsEvent : NSObject <TBAnalyticsEvent> {

	unsigned long long _status;
	NSNumber* _staleness;
	NSNumber* _tileKey;
	NSNumber* _type;
	NSNumber* _errorCode;
	NSString* _eventName;
	NSDictionary* _eventDictionary;

}

@property (assign,nonatomic) unsigned long long status;                   //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) NSNumber * staleness;                        //@synthesize staleness=_staleness - In the implementation block
@property (assign,nonatomic) NSNumber * tileKey;                          //@synthesize tileKey=_tileKey - In the implementation block
@property (assign,nonatomic) NSNumber * type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) NSNumber * errorCode;                        //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSString * eventName;                        //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) NSDictionary * eventDictionary;              //@synthesize eventDictionary=_eventDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheAnalyticsEventWithStatus:(unsigned long long)arg1 staleness:(unsigned long long)arg2 tileKey:(unsigned long long)arg3 type:(unsigned long long)arg4 error:(id)arg5 ;
+(id)cacheEventWithTotalCount:(unsigned long long)arg1 last24HoursCount:(unsigned long long)arg2 ;
-(NSNumber *)type;
-(void)setType:(NSNumber *)arg1 ;
-(unsigned long long)status;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(NSNumber *)errorCode;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSDictionary *)eventDictionary;
-(NSNumber *)tileKey;
-(void)setTileKey:(NSNumber *)arg1 ;
-(void)setEventDictionary:(NSDictionary *)arg1 ;
-(NSNumber *)staleness;
-(void)setStaleness:(NSNumber *)arg1 ;
@end

