/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface _GEOETARemoteProvider : NSObject {

	NSObject*<OS_xpc_object> _connection;
	/*^block*/id _willSendRequestHandler;
	/*^block*/id _finishedHandler;
	/*^block*/id _networkActivityHandler;
	/*^block*/id _errorHandler;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id willSendRequestHandler;                          //@synthesize willSendRequestHandler=_willSendRequestHandler - In the implementation block
@property (nonatomic,copy) id finishedHandler;                                 //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id networkActivityHandler;                          //@synthesize networkActivityHandler=_networkActivityHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                    //@synthesize errorHandler=_errorHandler - In the implementation block
+(id)provderWithWillSendRequest:(/*^block*/id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)setFinishedHandler:(id)arg1 ;
-(void)setWillSendRequestHandler:(id)arg1 ;
-(void)setNetworkActivityHandler:(id)arg1 ;
-(id)willSendRequestHandler;
-(id)finishedHandler;
-(id)networkActivityHandler;
@end

