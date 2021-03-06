/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface CDDCloudKitClient : NSObject {

	BOOL _interrupted;
	BOOL _invalidated;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL interrupted;                          //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,readonly) BOOL invalidated;                          //@synthesize invalidated=_invalidated - In the implementation block
-(void)dealloc;
-(BOOL)_valid;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)handleMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_setInvalidated;
-(void)_setInterrupted;
-(BOOL)registerClientStore:(id)arg1 withMirroringOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)scheduleBackupTaskForClientStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)interrupted;
-(BOOL)invalidated;
@end

