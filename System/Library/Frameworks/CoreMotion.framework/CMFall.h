/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMFall : NSObject
+(BOOL)areStatsAvailable;
-(BOOL)setStatsEnabled:(BOOL)arg1 ;
-(unsigned long long)setDataCollectionConfiguration:(unsigned long long)arg1 ;
-(id)fallConfig;
-(id)sendStatsDataToUrl:(id)arg1 ;
-(void)sendStatsDataToUrl:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)simulateEvent:(unsigned long long)arg1 ;
@end

