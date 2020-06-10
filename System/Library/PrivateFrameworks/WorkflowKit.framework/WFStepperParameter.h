/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@class NSNumber, NSString;

@interface WFStepperParameter : WFParameter {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSString* _singularNoun;
	NSString* _pluralNoun;

}

@property (nonatomic,copy,readonly) NSString * singularNoun;                            //@synthesize singularNoun=_singularNoun - In the implementation block
@property (nonatomic,copy,readonly) NSString * pluralNoun;                              //@synthesize pluralNoun=_pluralNoun - In the implementation block
@property (nonatomic,readonly) NSNumber * minimumValue;                                 //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumValue;                                 //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedLabelFormatString; 
-(id)initWithDefinition:(id)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(id)localizedLabel;
-(id)defaultSerializedRepresentation;
-(Class)singleStateClass;
-(NSString *)localizedLabelFormatString;
-(id)localizedLabelWithState:(id)arg1 includingPrefix:(BOOL)arg2 ;
-(NSString *)singularNoun;
-(NSString *)pluralNoun;
@end
