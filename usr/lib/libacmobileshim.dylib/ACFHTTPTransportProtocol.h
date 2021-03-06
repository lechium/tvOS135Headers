/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSDictionary, NSData;


@protocol ACFHTTPTransportProtocol <NSObject>
@property (nonatomic,retain) NSString * requestURLTemplate; 
@property (nonatomic,retain) NSArray * serverHosts; 
@property (nonatomic,retain) NSArray * serverAttemptsDelays; 
@property (nonatomic,retain) NSString * httpMethod; 
@property (nonatomic,retain) NSDictionary * httpHeader; 
@property (nonatomic,retain) NSDictionary * httpGETParameters; 
@property (nonatomic,retain) NSData * httpPOSTBody; 
@property (assign,nonatomic) double timeout; 
@property (assign,nonatomic) BOOL isCanceled; 
@property (nonatomic,copy) id retryCheckBlock; 
@required
-(void)setTimeout:(double)arg1;
-(double)timeout;
-(void)cancelRequest;
-(BOOL)isCanceled;
-(void)setIsCanceled:(BOOL)arg1;
-(NSString *)httpMethod;
-(void)setHttpMethod:(id)arg1;
-(void)setRetryCheckBlock:(/*^block*/id)arg1;
-(void)setRequestURLTemplate:(id)arg1;
-(void)setHttpHeader:(id)arg1;
-(void)setHttpGETParameters:(id)arg1;
-(void)setHttpPOSTBody:(id)arg1;
-(void)setServerHosts:(id)arg1;
-(void)setServerAttemptsDelays:(id)arg1;
-(id)retryCheckBlock;
-(NSArray *)serverHosts;
-(NSDictionary *)httpHeader;
-(NSData *)httpPOSTBody;
-(NSString *)requestURLTemplate;
-(NSDictionary *)httpGETParameters;
-(NSArray *)serverAttemptsDelays;
-(void)performRequestWithCompletionBlock:(/*^block*/id)arg1;

@end

