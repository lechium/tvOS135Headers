/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SOAuthorizationRequest, NSURL, NSString, NSDictionary, NSData;

@interface ASAuthorizationProviderExtensionAuthorizationRequest : NSObject {

	SOAuthorizationRequest* _authorizationRequest;

}

@property (nonatomic,readonly) SOAuthorizationRequest * authorizationRequest;              //@synthesize authorizationRequest=_authorizationRequest - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * requestedOperation; 
@property (nonatomic,readonly) NSDictionary * httpHeaders; 
@property (nonatomic,readonly) NSData * httpBody; 
@property (nonatomic,copy,readonly) NSString * realm; 
@property (nonatomic,readonly) NSDictionary * extensionData; 
@property (nonatomic,copy,readonly) NSString * callerBundleIdentifier; 
@property (nonatomic,readonly) NSDictionary * authorizationOptions; 
-(void)cancel;
-(void)completeWithError:(id)arg1 ;
-(NSString *)realm;
-(NSURL *)url;
-(void)complete;
-(SOAuthorizationRequest *)authorizationRequest;
-(NSData *)httpBody;
-(NSDictionary *)httpHeaders;
-(id)initWithAuthorizationRequest:(id)arg1 ;
-(void)doNotHandle;
-(void)completeWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)presentAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)requestedOperation;
-(NSDictionary *)extensionData;
-(NSString *)callerBundleIdentifier;
-(NSDictionary *)authorizationOptions;
@end

