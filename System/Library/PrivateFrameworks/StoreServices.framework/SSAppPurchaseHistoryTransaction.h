/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryTransaction : NSObject {

	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)dealloc;
-(SSSQLiteDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
@end

