/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSString;

@interface ML3Client : NSObject {

	int _processID;
	NSXPCConnection* _connection;
	NSString* _bundleID;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int processID;                                        //@synthesize processID=_processID - In the implementation block
@property (getter=isDaemonClient,nonatomic,readonly) BOOL daemonClient; 
+(id)daemonClient;
+(id)processClient;
-(id)description;
-(id)init;
-(id)initWithConnection:(id)arg1 ;
-(NSXPCConnection *)connection;
-(NSString *)bundleID;
-(int)processID;
-(BOOL)isDaemonClient;
@end
