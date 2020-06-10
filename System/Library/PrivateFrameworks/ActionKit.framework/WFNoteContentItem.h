/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>

@class INNote;

@interface WFNoteContentItem : WFContentItem

@property (nonatomic,readonly) INNote * note; 
+(id)typeDescription;
+(id)outputTypes;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)hasLibrary;
-(id)modificationDate;
-(id)creationDate;
-(id)body;
-(INNote *)note;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)fullText;
@end

