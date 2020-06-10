/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class INCustomObject;

@interface WFCustomIntentOutputContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) INCustomObject * customObject; 
+(id)codableDescription;
+(id)typeDescription;
+(id)outputTypes;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(INCustomObject *)customObject;
@end
