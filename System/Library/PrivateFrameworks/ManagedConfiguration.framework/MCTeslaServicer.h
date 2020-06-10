/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSString, MCDeviceUploadCredentials, MCDeviceUploadOrganization, MCDeviceUploadSubmitDeviceRequestPayload;

@interface MCTeslaServicer : NSObject {

	/*^block*/id _callback;
	NSXPCConnection* _connection;
	NSString* _nonce;
	MCDeviceUploadCredentials* _userCredentials;
	MCDeviceUploadOrganization* _organization;
	MCDeviceUploadSubmitDeviceRequestPayload* _deviceUploadRequest;

}

@property (nonatomic,copy) id callback;                                                                   //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSString * nonce;                                                            //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,retain) MCDeviceUploadCredentials * userCredentials;                                 //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,retain) MCDeviceUploadOrganization * organization;                                   //@synthesize organization=_organization - In the implementation block
@property (nonatomic,retain) MCDeviceUploadSubmitDeviceRequestPayload * deviceUploadRequest;              //@synthesize deviceUploadRequest=_deviceUploadRequest - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)retrieveDeviceUploadOrganizationsWithCredentials:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)retrieveDeviceUploadRequestTypesWithCredentials:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)retrieveDeviceUploadSoldToIdsForOrganization:(id)arg1 credentials:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)submitDeviceUploadRequest:(id)arg1 credentials:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)provisionallyEnrollWithNonce:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)unenrollWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_connectionError;
-(void)_completeServiceWithSuccess:(BOOL)arg1 response:(id)arg2 error:(id)arg3 ;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(MCDeviceUploadCredentials *)userCredentials;
-(void)setUserCredentials:(MCDeviceUploadCredentials *)arg1 ;
-(MCDeviceUploadOrganization *)organization;
-(void)setOrganization:(MCDeviceUploadOrganization *)arg1 ;
-(MCDeviceUploadSubmitDeviceRequestPayload *)deviceUploadRequest;
-(void)setDeviceUploadRequest:(MCDeviceUploadSubmitDeviceRequestPayload *)arg1 ;
-(void)_callServiceByType:(long long)arg1 onProxy:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_retrieveProxyObjectAndRunServiceType:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

