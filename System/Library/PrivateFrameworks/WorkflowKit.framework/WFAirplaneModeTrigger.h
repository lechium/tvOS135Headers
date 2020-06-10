/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFAirplaneModeTrigger : WFTrigger {

	BOOL _onEnable;
	BOOL _onDisable;

}

@property (assign,nonatomic) BOOL onEnable;               //@synthesize onEnable=_onEnable - In the implementation block
@property (assign,nonatomic) BOOL onDisable;              //@synthesize onDisable=_onDisable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(unsigned)contextStoreQualityOfService;
-(id)contextStorePredicate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(BOOL)onEnable;
-(BOOL)onDisable;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setOnEnable:(BOOL)arg1 ;
-(void)setOnDisable:(BOOL)arg1 ;
@end

