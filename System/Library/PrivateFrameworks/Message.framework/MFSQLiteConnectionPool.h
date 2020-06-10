/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFSQLiteConnectionPoolDelegate, OS_dispatch_semaphore, OS_dispatch_source;
#import <Message/Message-Structs.h>
@class NSLock, NSMutableSet, NSObject;

@interface MFSQLiteConnectionPool : NSObject {

	id<MFSQLiteConnectionPoolDelegate> _delegate;
	NSLock* _cacheLock;
	NSMutableSet* _cache;
	unsigned long long _cacheSize;
	unsigned long long _cacheGeneration;
	unsigned long long _maxConcurrentBackgroundReaders;
	unsigned long long _maxConcurrentWriters;
	NSLock* _checkoutLock;
	CFDictionaryRef _checkoutMap;
	NSObject*<OS_dispatch_semaphore> _backgroundReaderSemaphore;
	int _backgroundReadersWaiting;
	NSObject*<OS_dispatch_semaphore> _writerSemaphore;
	int _writersWaiting;
	NSObject*<OS_dispatch_source> _terminationTimer;

}

@property (assign) id<MFSQLiteConnectionPoolDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long cacheSize; 
@property (readonly) unsigned long long maxConcurrentBackgroundReaders;              //@synthesize maxConcurrentBackgroundReaders=_maxConcurrentBackgroundReaders - In the implementation block
@property (readonly) unsigned long long maxConcurrentWriters; 
@property (readonly) unsigned long long backgroundReadersWaiting; 
@property (readonly) unsigned long long writersWaiting; 
-(void)dealloc;
-(id<MFSQLiteConnectionPoolDelegate>)delegate;
-(void)setDelegate:(id<MFSQLiteConnectionPoolDelegate>)arg1 ;
-(void)flush;
-(unsigned long long)cacheSize;
-(id)readerConnection;
-(id)writerConnection;
-(void)checkInConnection:(id)arg1 ;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2 ;
-(unsigned long long)writersWaiting;
-(void)interruptConnectionsAfterDelay:(double)arg1 ;
-(void)cancelTerminationTimer;
-(id)backgroundReaderConnection;
-(id)_connectionWithType:(unsigned long long)arg1 ;
-(id)_semaphoreForConnectionType:(unsigned long long)arg1 waitCounter:(int*)arg2 ;
-(void)_interruptActiveConnections;
-(unsigned long long)maxConcurrentReaders;
-(unsigned long long)maxConcurrentWriters;
-(unsigned long long)backgroundReadersWaiting;
-(unsigned long long)maxConcurrentBackgroundReaders;
@end

