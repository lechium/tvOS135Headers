/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AdPlatforms.framework/AdPlatforms
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADStatusConditions_XPC.h>

@interface ADStatusConditionsImpl : NSObject <ADStatusConditions_XPC>
-(id)setupXPCConnection;
-(BOOL)isConditionRateLimited:(id)arg1 onOperation:(long long)arg2 ;
-(void)initializeRateLimitingBuffer;
-(void)setStatusCondition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearStatusCondition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cleanupExpiredConditionsInBuffer;
-(BOOL)operationWithCondition:(id)arg1 forType:(long long)arg2 ;
-(id)capped:(id)arg1 to:(unsigned long long)arg2 ;
@end
