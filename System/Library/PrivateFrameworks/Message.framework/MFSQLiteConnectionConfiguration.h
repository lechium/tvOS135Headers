/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MFSQLiteConnectionConfiguration : NSObject <NSCopying> {

	NSString* _basePath;
	NSString* _databaseName;

}

@property (nonatomic,copy) NSString * basePath;                                 //@synthesize basePath=_basePath - In the implementation block
@property (nonatomic,copy) NSString * databaseName;                             //@synthesize databaseName=_databaseName - In the implementation block
@property (nonatomic,readonly) NSString * databasePath; 
@property (nonatomic,readonly) const char* databaseFileSystemPath; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)databasePath;
-(void)setDatabaseName:(NSString *)arg1 ;
-(NSString *)databaseName;
-(void)setBasePath:(NSString *)arg1 ;
-(id)_databasePathWithDatabaseName:(id)arg1 ;
-(NSString *)basePath;
-(const char*)databaseFileSystemPath;
@end
