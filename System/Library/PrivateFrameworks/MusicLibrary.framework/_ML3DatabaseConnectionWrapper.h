/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3DatabaseConnection, NSThread;

@interface _ML3DatabaseConnectionWrapper : NSObject {

	ML3DatabaseConnection* _connection;
	NSThread* _owningThread;
	NSThread* _borrowingThread;
	unsigned long long _useCount;

}

@property (nonatomic,retain) ML3DatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSThread * owningThread;                         //@synthesize owningThread=_owningThread - In the implementation block
@property (nonatomic,retain) NSThread * borrowingThread;                      //@synthesize borrowingThread=_borrowingThread - In the implementation block
@property (assign,nonatomic) unsigned long long useCount;                     //@synthesize useCount=_useCount - In the implementation block
-(id)description;
-(void)setConnection:(ML3DatabaseConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(ML3DatabaseConnection *)connection;
-(unsigned long long)useCount;
-(void)setUseCount:(unsigned long long)arg1 ;
-(NSThread *)owningThread;
-(void)setOwningThread:(NSThread *)arg1 ;
-(NSThread *)borrowingThread;
-(void)setBorrowingThread:(NSThread *)arg1 ;
@end

