/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface PHQueryChangeDetectionCriteria : NSObject <NSCopying> {

	NSMutableDictionary* _attributeIndexValuesByEntityName;
	NSMutableDictionary* _relationshipIndexValuesByEntityName;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPLQueryChangeDetectionCriteria:(id)arg1 ;
-(void)enumerateEntitiesAndAttributeIndexesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEntitiesAndRelationshipIndexesBlock:(/*^block*/id)arg1 ;
@end

