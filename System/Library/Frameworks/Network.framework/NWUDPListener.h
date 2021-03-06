/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_listener, NWUDPListenerDelegate;
@class NWEndpoint, NSError, NSObject, NWParameters;

@interface NWUDPListener : NSObject {

	NWEndpoint* _localEndpoint;
	NSError* _error;
	NSObject*<OS_nw_listener> _internalListener;
	NWParameters* _parameters;
	NWEndpoint* _endpoint;
	id<NWUDPListenerDelegate> _delegate;

}

@property (retain) NSObject*<OS_nw_listener> internalListener;              //@synthesize internalListener=_internalListener - In the implementation block
@property (retain) NWParameters * parameters;                               //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                   //@synthesize endpoint=_endpoint - In the implementation block
@property (__weak) id<NWUDPListenerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NWEndpoint * localEndpoint;                    //@synthesize localEndpoint=_localEndpoint - In the implementation block
-(id<NWUDPListenerDelegate>)delegate;
-(void)setDelegate:(id<NWUDPListenerDelegate>)arg1 ;
-(void)handleError:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NWEndpoint *)endpoint;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(NWEndpoint *)localEndpoint;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(NWParameters *)parameters;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(void)setParameters:(NWParameters *)arg1 ;
-(void)handleConnection:(id)arg1 ;
-(NSObject*<OS_nw_listener>)internalListener;
-(void)setInternalListener:(NSObject*<OS_nw_listener>)arg1 ;
@end

