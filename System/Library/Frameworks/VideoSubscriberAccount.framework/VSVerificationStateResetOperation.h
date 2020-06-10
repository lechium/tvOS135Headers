/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSAuditToken, VSOptional, VSStoreURLBag, NSURLSessionTask;

@interface VSVerificationStateResetOperation : VSAsyncOperation {

	VSAuditToken* _auditToken;
	VSOptional* _result;
	VSStoreURLBag* _bag;
	NSURLSessionTask* _resetStateTask;

}

@property (nonatomic,retain) VSStoreURLBag * bag;                            //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * resetStateTask;              //@synthesize resetStateTask=_resetStateTask - In the implementation block
@property (nonatomic,retain) VSOptional * result;                            //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                        //@synthesize auditToken=_auditToken - In the implementation block
-(id)init;
-(void)cancel;
-(VSOptional *)result;
-(VSAuditToken *)auditToken;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(VSStoreURLBag *)bag;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(void)executionDidBegin;
-(void)setResetStateTask:(NSURLSessionTask *)arg1 ;
-(void)_resetVerificationStateWithURL:(id)arg1 ;
-(NSURLSessionTask *)resetStateTask;
@end

