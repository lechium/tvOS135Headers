/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ACDPreferences : NSObject
+(id)sharedPreferences;
-(void)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)reset;
-(double)serverTimeoutInterval;
@end
