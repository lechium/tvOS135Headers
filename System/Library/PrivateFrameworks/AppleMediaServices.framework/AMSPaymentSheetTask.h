/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationControllerPrivateDelegate.h>

@protocol AMSBagProtocol, OS_dispatch_queue;
@class AMSPaymentSheetAssetCache, AKAppleIDAuthenticationContext, AMSPromise, NSObject, _PaymentSheetState, AMSPaymentSheetRequest, NSString;

@interface AMSPaymentSheetTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate> {

	id<AMSBagProtocol> _bag;
	AMSPaymentSheetAssetCache* _assetCache;
	AKAppleIDAuthenticationContext* _authenticationContext;
	AMSPromise* _paymentSheetPromise;
	NSObject*<OS_dispatch_queue> _presentationQueue;
	_PaymentSheetState* _state;
	AMSPaymentSheetRequest* _request;

}

@property (nonatomic,retain) AMSPaymentSheetAssetCache * assetCache;                              //@synthesize assetCache=_assetCache - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) AMSPromise * paymentSheetPromise;                                    //@synthesize paymentSheetPromise=_paymentSheetPromise - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> presentationQueue;                      //@synthesize presentationQueue=_presentationQueue - In the implementation block
@property (nonatomic,retain) _PaymentSheetState * state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AMSPaymentSheetRequest * request;                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                                              //@synthesize bag=_bag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_authenticationContextForRequest:(id)arg1 ;
-(AMSPaymentSheetRequest *)request;
-(void)setRequest:(AMSPaymentSheetRequest *)arg1 ;
-(_PaymentSheetState *)state;
-(void)setState:(_PaymentSheetState *)arg1 ;
-(AMSPaymentSheetAssetCache *)assetCache;
-(id)perform;
-(void)setAssetCache:(AMSPaymentSheetAssetCache *)arg1 ;
-(void)setAuthenticationContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(AKAppleIDAuthenticationContext *)authenticationContext;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)_paymentRequest;
-(NSObject*<OS_dispatch_queue>)presentationQueue;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationControllerDidFinish:(id)arg1 ;
-(void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2 ;
-(void)paymentAuthorizationController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2 ;
-(id)initWithRequest:(id)arg1 bag:(id)arg2 ;
-(void)setPaymentSheetPromise:(AMSPromise *)arg1 ;
-(BOOL)_presentPaymentSheetWithPaymentRequest:(id)arg1 error:(id*)arg2 ;
-(AMSPromise *)paymentSheetPromise;
-(float)_challengeSigningDelay;
-(void)setPresentationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
