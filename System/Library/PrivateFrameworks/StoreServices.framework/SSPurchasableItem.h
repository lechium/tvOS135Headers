/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject {

	NSDictionary* _propertyValues;
	NSString* _tableName;
	SSSQLiteDatabase* _database;

}
+(id)databaseTable;
+(id)sortByDatePurchasedKey;
+(id)allPropertyKeys;
-(id)description;
-(void)dealloc;
-(long long)pid;
-(long long)storeID;
-(BOOL)isHidden;
-(long long)accountUniqueIdentifier;
-(id)propertyValues;
-(id)initWithPropertyValues:(id)arg1 ;
-(id)datePurchased;
@end
