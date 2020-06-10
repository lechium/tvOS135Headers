/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/STSyncableSubObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>

@class NSString, NSData, STBlueprint;

@interface STBlueprintConfiguration : NSManagedObject <STSyncableSubObject, STUniquelySerializableManagedObject>

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) NSData * payloadPlist; 
@property (nonatomic,retain) STBlueprint * blueprint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<STSerializableManagedObject> syncableRootObject; 
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 ;
+(id)cemConfigurationIdentifierWithType:(id)arg1 forUser:(id)arg2 ;
+(Class)cemDeclarationClassForConfigurationType:(id)arg1 ;
+(id)blueprintConfigurationTypeForDeclaration:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)cemConfiguration;
-(void)setCemConfiguration:(id)arg1 ;
-(id<STSerializableManagedObject>)syncableRootObject;
@end

