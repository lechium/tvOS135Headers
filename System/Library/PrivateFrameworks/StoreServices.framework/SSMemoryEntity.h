/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface SSMemoryEntity : NSObject <NSCopying> {

	long long _databaseID;
	NSMutableDictionary* _propertyValues;
	NSMutableDictionary* _externalPropertyValues;

}

@property (assign,nonatomic) long long databaseID;                                      //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertyValues;                      //@synthesize propertyValues=_propertyValues - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * externalPropertyValues;              //@synthesize externalPropertyValues=_externalPropertyValues - In the implementation block
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)defaultProperties;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
+(Class)databaseEntityClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForExternalProperty:(id)arg1 ;
-(void)setExternalValuesWithDictionary:(id)arg1 ;
-(void)setValuesWithDictionary:(id)arg1 ;
-(void)setDatabaseID:(long long)arg1 ;
-(void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2 ;
-(void)setValues:(id*)arg1 forProperties:(const id*)arg2 count:(long long)arg3 ;
-(void)setValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(long long)arg3 ;
-(long long)databaseID;
-(NSDictionary *)propertyValues;
-(NSDictionary *)externalPropertyValues;
-(id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2 ;
-(void)setValue:(id)arg1 forExternalProperty:(id)arg2 ;
@end

