/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFEmailAddress;

@interface WFEmailAddressContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFEmailAddress * emailAddress; 
+(id)typeDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)itemsWithTextCheckingResult:(id)arg1 ;
-(WFEmailAddress *)emailAddress;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
@end

