/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCacheBoundingStrategy.h>

@protocol CNTimeProvider;
@class NSMutableDictionary, NSString;

@interface _CNCacheFixedTTLBoundingStrategy : NSObject <CNCacheBoundingStrategy> {

	double _ttl;
	id<CNTimeProvider> _timeProvider;
	NSMutableDictionary* _timestamps;

}

@property (nonatomic,readonly) double ttl;                                    //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,readonly) id<CNTimeProvider> timeProvider;               //@synthesize timeProvider=_timeProvider - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * timestamps;              //@synthesize timestamps=_timestamps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(NSMutableDictionary *)timestamps;
-(double)ttl;
-(id)initWithTTL:(double)arg1 ;
-(id)initWithTTL:(double)arg1 timeProvider:(id)arg2 ;
-(BOOL)shouldEvictKey:(id)arg1 ;
-(id<CNTimeProvider>)timeProvider;
-(void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id*)arg3 ;
-(void)willAccessKey:(id)arg1 ;
@end
