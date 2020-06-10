/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKStandingQuery.h>

@protocol OS_xpc_object;
@class NSString, NSObject;

@interface _DKDeviceActivityStandingQuery : NSObject <_DKStandingQuery> {

	NSString* queryIdentifier;
	NSObject*<OS_xpc_object> activity;

}

@property (nonatomic,retain) NSString * queryIdentifier; 
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity; 
-(id)init;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)_shouldDefer;
-(id)fetchResultForDayOfWeek:(long long)arg1 withStorage:(id)arg2 ;
-(void)setQueryIdentifier:(NSString *)arg1 ;
-(NSString *)queryIdentifier;
-(double)_deviceActivityEphemerality;
-(void)executeWithStorage:(id)arg1 referenceDate:(id)arg2 ;
-(id)_customIdentifierForDayOfWeek:(long long)arg1 ;
-(id)_predicateForDeletedEventsWithReferenceDate:(id)arg1 ;
-(long long)_computeSlotForDate:(id)arg1 ;
-(id)histogramForDate:(id)arg1 withReference:(id)arg2 andUpdate:(id)arg3 ;
-(id)fetchResultForDayOfWeek:(long long)arg1 ;
-(id)fetchResult;
-(void)executeWithStorage:(id)arg1 ;
-(id)fetchResultFromStorage:(id)arg1 ;
-(id)fetchResultWithReferenceDate:(id)arg1 withStorage:(id)arg2 ;
@end

