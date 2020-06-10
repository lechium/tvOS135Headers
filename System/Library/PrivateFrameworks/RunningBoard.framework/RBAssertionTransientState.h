/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface RBAssertionTransientState : NSObject <NSCopying, BSDescriptionProviding> {

	NSMutableDictionary* _cpuUsageViolationPoliciesByRole;
	NSMutableSet* _tags;

}

@property (nonatomic,readonly) NSSet * tags;                        //@synthesize tags=_tags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSSet *)tags;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)addTag:(id)arg1 ;
-(unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)arg1 ;
-(void)setMaxCPUUsageViolationPolicy:(unsigned long long)arg1 forRole:(unsigned char)arg2 ;
-(void)unionState:(id)arg1 ;
@end
