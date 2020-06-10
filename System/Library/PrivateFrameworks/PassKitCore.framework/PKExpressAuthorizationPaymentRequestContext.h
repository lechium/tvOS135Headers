/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPaymentPass, LAContext, NSSet;

@interface PKExpressAuthorizationPaymentRequestContext : NSObject {

	PKPaymentPass* _pass;
	LAContext* _context;
	NSSet* _result;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) PKPaymentPass * pass;                    //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic,__weak) LAContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSSet * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(NSSet *)result;
-(LAContext *)context;
-(void)setContext:(LAContext *)arg1 ;
-(void)setResult:(NSSet *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)invokeCompletion;
@end

