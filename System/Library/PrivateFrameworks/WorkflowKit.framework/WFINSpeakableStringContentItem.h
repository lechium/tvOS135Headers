/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class INSpeakableString;

@interface WFINSpeakableStringContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) INSpeakableString * speakableString; 
+(id)typeDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)contentCategories;
-(INSpeakableString *)speakableString;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

