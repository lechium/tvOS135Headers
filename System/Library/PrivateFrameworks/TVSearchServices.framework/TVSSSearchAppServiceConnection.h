/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, BKSProcessAssertion;

@interface TVSSSearchAppServiceConnection : NSObject {

	NSXPCConnection* _connection;
	BKSProcessAssertion* _processAssertion;

}

@property (nonatomic,retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * processAssertion;              //@synthesize processAssertion=_processAssertion - In the implementation block
+(void)connectionWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)_init;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BKSProcessAssertion *)processAssertion;
-(void)setProcessAssertion:(BKSProcessAssertion *)arg1 ;
@end

