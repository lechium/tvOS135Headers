/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <Foundation/NSPredicate.h>

@interface DNDSModeAssertionInvalidationPredicate : NSPredicate

@property (nonatomic,readonly) unsigned long long predicateType; 
+(id)predicateForAnyAssertion;
+(id)predicateForAssertionClientIdentifiers:(id)arg1 ;
+(id)predicateForAssertionsTakenBeforeDate:(id)arg1 ;
+(id)predicateForAssertionUUIDs:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(unsigned long long)predicateType;
@end
