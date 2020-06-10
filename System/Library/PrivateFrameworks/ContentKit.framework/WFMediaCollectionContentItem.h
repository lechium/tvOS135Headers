/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class MPMediaItemCollection;

@interface WFMediaCollectionContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) MPMediaItemCollection * collection; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
-(MPMediaItemCollection *)collection;
@end

