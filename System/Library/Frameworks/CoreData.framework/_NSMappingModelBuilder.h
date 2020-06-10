/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel, NSEntityMapping, NSError;

@interface _NSMappingModelBuilder : NSObject {

	NSManagedObjectModel* _sourceModel;
	NSManagedObjectModel* _destinationModel;
	NSEntityMapping* _currentEntityMapping;
	NSError* _error;

}
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg1 ;
-(void)dealloc;
-(void)_resetCaches;
-(id)newEntityMappingWithSource:(id)arg1 destination:(id)arg2 ;
-(BOOL)inferPropertyMappingsForEntityMapping:(id)arg1 ;
-(id)newInferredPropertyMappingWithSourceAttribute:(id)arg1 destinationAttribute:(id)arg2 ;
-(id)newInferredPropertyMappingWithSourceRelationship:(id)arg1 destinationRelationship:(id)arg2 ;
-(BOOL)checkForSchemaMatchBetween:(id)arg1 andDestination:(id)arg2 ;
-(BOOL)_canTransformSourceAttributeType:(unsigned long long)arg1 toDestinationAttributeType:(unsigned long long)arg2 ;
-(id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 ;
-(id)newInferredMappingModel:(id*)arg1 ;
@end

