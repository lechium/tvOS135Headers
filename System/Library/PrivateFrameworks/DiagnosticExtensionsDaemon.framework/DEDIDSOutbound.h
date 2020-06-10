/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDWorkerProtocol.h>
#import <libobjc.A.dylib/DEDClientProtocol.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@protocol OS_os_log;
@class DEDIDSConnection, NSString, NSObject;

@interface DEDIDSOutbound : NSObject <DEDWorkerProtocol, DEDClientProtocol, DEDSecureArchiving> {

	DEDIDSConnection* _connection;
	NSString* _deviceAddress;
	NSString* _sessionID;
	NSObject*<OS_os_log> _log;

}

@property (__weak) DEDIDSConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (retain) NSString * deviceAddress;                        //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (retain) NSString * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(id)sessionWithID:(id)arg1 withDeviceAtAddress:(id)arg2 connection:(id)arg3 ;
-(id)init;
-(void)setConnection:(DEDIDSConnection *)arg1 ;
-(DEDIDSConnection *)connection;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(long long)transportType;
-(void)cancelSession:(id)arg1 ;
-(NSString *)deviceAddress;
-(void)setDeviceAddress:(NSString *)arg1 ;
-(void)pingSession:(id)arg1 ;
-(void)listAvailableExtensionsForSession:(id)arg1 ;
-(void)getSessionStatusWithSession:(id)arg1 ;
-(void)syncSessionStatusWithSession:(id)arg1 ;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3 ;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4 ;
-(void)scheduleNotificationForSession:(id)arg1 ;
-(void)cancelNotificationForSession:(id)arg1 ;
-(void)pongSession:(id)arg1 ;
-(void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2 ;
-(void)adoptFiles:(id)arg1 forSession:(id)arg2 ;
-(void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2 ;
-(void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3 ;
-(void)commitSession:(id)arg1 ;
-(void)didCommitSession:(id)arg1 ;
-(void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3 ;
-(void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4 ;
-(void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3 ;
-(void)didCancelSession:(id)arg1 ;
-(void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3 ;
@end

