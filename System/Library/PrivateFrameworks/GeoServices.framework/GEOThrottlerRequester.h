/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOThrottlerRequester : NSObject
+(id)sharedRequester;
-(id)getTokenOrInfoFor:(SCD_Struct_GE92)arg1 nextSafeRequestTime:(double*)arg2 availableRequestCount:(unsigned*)arg3 error:(id*)arg4 ;
-(BOOL)allowRequest:(SCD_Struct_GE92)arg1 forClient:(id)arg2 throttlerToken:(id*)arg3 error:(id*)arg4 ;
-(BOOL)_getTokenAndInfo:(id*)arg1 forRequest:(SCD_Struct_GE92)arg2 nextSafeRequestTime:(double*)arg3 availableRequestCount:(unsigned*)arg4 error:(id*)arg5 ;
-(BOOL)getThrottleStateFor:(SCD_Struct_GE92)arg1 nextSafeRequestTime:(double*)arg2 availableRequestCount:(unsigned*)arg3 error:(id*)arg4 ;
@end
