/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVControlServices.framework/TVControlServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVControlServices/TVCSEndpointServiceClientProtocol.h>

@protocol TVCSEndpointServiceConnectionDelegate;
@class NSXPCConnection, NSString;

@interface TVCSEndpointServiceConnection : NSObject <TVCSEndpointServiceClientProtocol> {

	id<TVCSEndpointServiceConnectionDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<TVCSEndpointServiceConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<TVCSEndpointServiceConnectionDelegate>)delegate;
-(void)setDelegate:(id<TVCSEndpointServiceConnectionDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)serviceProxy;
-(void)_handleConnectionInvalidation;
-(void)_handleConnectionInterruption;
-(void)pairedEndpointsDidChange:(id)arg1 ;
-(void)pairableEndpointsDidChange:(id)arg1 ;
@end

