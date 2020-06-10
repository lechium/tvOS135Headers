/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFTripInfo;

@interface WFTripInfoContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFTripInfo * tripInfo; 
+(id)typeDescription;
+(id)outputTypes;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
-(id)distance;
-(id)travelTime;
-(id)routeName;
-(id)arrivalTime;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(WFTripInfo *)tripInfo;
@end

