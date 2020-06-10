/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSURLRequestProperties, SSAuthenticationContext, SSVURLDataConsumer, NSURL, SSVFairPlaySAPSession, SSVSAPSignaturePolicy, SSURLBag, SSVURLBagInterpreter, NSURLRequest, NSString;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {

	SSURLRequestProperties* _requestProperties;
	SSAuthenticationContext* _authenticationContext;
	SSVURLDataConsumer* _dataConsumer;
	NSURL* _destinationFileURL;
	BOOL _runsInProcess;
	SSVFairPlaySAPSession* _sapSession;
	SSVSAPSignaturePolicy* _sapSignaturePolicy;
	BOOL _sendsResponseForHTTPFailures;
	BOOL _shouldMescalSign;
	SSURLBag* _urlBag;
	SSVURLBagInterpreter* _urlBagInterpreter;

}

@property (copy) SSAuthenticationContext * authenticationContext; 
@property (retain) SSVURLDataConsumer * dataConsumer; 
@property (assign) BOOL runsInProcess; 
@property (assign) BOOL sendsResponseForHTTPFailures; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
@property (copy) SSVSAPSignaturePolicy * SAPSignaturePolicy; 
@property (assign,nonatomic) id<SSURLConnectionRequestDelegate> delegate; 
@property (readonly) NSURLRequest * URLRequest; 
@property (readonly) SSURLRequestProperties * requestProperties; 
@property (copy) NSURL * destinationFileURL; 
@property (assign) BOOL shouldMescalSign; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(id)initWithURLRequest:(id)arg1 ;
-(SSVURLDataConsumer *)dataConsumer;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSURLRequest *)URLRequest;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)configureWithURLBagDictionary:(id)arg1 ;
-(void)setSAPSignaturePolicy:(SSVSAPSignaturePolicy *)arg1 ;
-(void)setDataConsumer:(SSVURLDataConsumer *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(SSURLRequestProperties *)requestProperties;
-(void)configureWithURLBag:(id)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
-(SSVSAPSignaturePolicy *)SAPSignaturePolicy;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(id)initWithRequestProperties:(id)arg1 ;
-(BOOL)_canRunInProcess;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(BOOL)runsInProcess;
-(NSURL *)destinationFileURL;
-(BOOL)sendsResponseForHTTPFailures;
-(BOOL)shouldMescalSign;
-(void)setSendsResponseForHTTPFailures:(BOOL)arg1 ;
-(void)setShouldMescalSign:(BOOL)arg1 ;
-(void)setDestinationFileURL:(NSURL *)arg1 ;
-(void)setRunsInProcess:(BOOL)arg1 ;
@end

