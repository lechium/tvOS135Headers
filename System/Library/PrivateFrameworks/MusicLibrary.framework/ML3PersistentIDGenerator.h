/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3DatabaseConnection, NSString;

@interface ML3PersistentIDGenerator : NSObject {

	ML3DatabaseConnection* _connection;
	NSString* _tableName;
	NSString* _validateStartingPersistentIdSQL;
	NSString* _nextUsedPersistentIdSQL;
	long long _currentPersistentID;
	long long _nextUsedPersistentID;

}
-(id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2 ;
-(long long)nextPersistentID;
-(void)_calculateNewRun;
@end
