/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSCurrentServerTimeProvider;
@class IDSCurrentServerTimePair;

@interface IDSCurrentServerTime : NSObject {

	IDSCurrentServerTimePair* _timePair;
	id<IDSCurrentServerTimeProvider> _serverTimeProvider;

}

@property (nonatomic,retain) id<IDSCurrentServerTimeProvider> serverTimeProvider;              //@synthesize serverTimeProvider=_serverTimeProvider - In the implementation block
@property (retain) IDSCurrentServerTimePair * timePair;                                        //@synthesize timePair=_timePair - In the implementation block
+(id)sharedInstance;
-(id)initWithServerTimeProvider:(id)arg1 ;
-(void)_storeInitialServerTime;
-(IDSCurrentServerTimePair *)timePair;
-(double)currentServerTimeInterval;
-(id<IDSCurrentServerTimeProvider>)serverTimeProvider;
-(void)setTimePair:(IDSCurrentServerTimePair *)arg1 ;
-(double)_refreshTimeInterval;
-(void)_refreshServerTime;
-(id)currentServerTimeDate;
-(void)setServerTimeProvider:(id<IDSCurrentServerTimeProvider>)arg1 ;
@end

