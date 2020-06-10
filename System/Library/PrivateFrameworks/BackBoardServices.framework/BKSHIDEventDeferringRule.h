/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSHIDEventDeferringPredicate, BKSHIDEventDeferringTarget, NSString;

@interface BKSHIDEventDeferringRule : NSObject <NSCopying, NSSecureCoding> {

	BKSHIDEventDeferringPredicate* _predicate;
	BKSHIDEventDeferringTarget* _target;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) BKSHIDEventDeferringPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringTarget * target;                    //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                      //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ruleForDeferringEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2 withReason:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(BKSHIDEventDeferringTarget *)target;
-(BKSHIDEventDeferringPredicate *)predicate;
-(id)_initWithPredicate:(id)arg1 target:(id)arg2 reason:(id)arg3 ;
@end

