/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKEventStatsCounterInternalProperty.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeResultStatsCounter : NSObject <_DKEventStatsCounterInternalProperty> {

	_DKEventStatsCounterInternal* _internal;

}

@property (retain) _DKEventStatsCounterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 ;
-(id)eventName;
-(_DKEventStatsCounterInternal *)internal;
-(id)eventType;
-(void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2 success:(BOOL)arg3 ;
-(unsigned long long)countWithTypeValue:(id)arg1 success:(BOOL)arg2 ;
-(id)typeValues;
-(void)setInternal:(_DKEventStatsCounterInternal *)arg1 ;
-(void)incrementCountWithTypeValue:(id)arg1 success:(BOOL)arg2 ;
@end

