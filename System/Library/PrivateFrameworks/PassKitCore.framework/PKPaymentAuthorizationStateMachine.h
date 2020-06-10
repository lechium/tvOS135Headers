/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKContinuityPaymentCoordinatorDelegate.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol PKAggregateDictionaryProtocol, PKPaymentAuthorizationStateMachineDelegate, OS_dispatch_source, OS_dispatch_group;
@class CBCentralManager, PKPaymentService, PKPaymentWebService, PKPaymentAuthorizationDataModel, PKInAppPaymentSession, PKPeerPaymentSession, PKContinuityPaymentService, PKContinuityPaymentCoordinator, NSMutableArray, NSObject, PKPaymentAuthorizationClientCallbackStateParam, NSString, NSArray;

@interface PKPaymentAuthorizationStateMachine : NSObject <PKContinuityPaymentCoordinatorDelegate, CBCentralManagerDelegate> {

	BOOL _hasReceivedRemoteDeviceUpdate;
	BOOL _awaitingClientCallbackReply;
	BOOL _awaitingWebServiceResponse;
	BOOL _detectedBluetoothOn;
	CBCentralManager* _bluetoothCentralManager;
	PKPaymentService* _paymentService;
	PKPaymentWebService* _paymentWebService;
	PKPaymentAuthorizationDataModel* _model;
	id<PKAggregateDictionaryProtocol> _aggregateDictionary;
	PKInAppPaymentSession* _inAppPaymentSession;
	PKPeerPaymentSession* _peerPaymentSession;
	PKContinuityPaymentService* _continuityPaymentService;
	double _updatePaymentDeviceTimeout;
	id<PKPaymentAuthorizationStateMachineDelegate> _delegate;
	unsigned long long _state;
	PKContinuityPaymentCoordinator* _continuityPaymentCoordinator;
	NSMutableArray* _callbackQueue;
	unsigned long long _hostApplicationState;
	NSObject*<OS_dispatch_source> _clientCallbackTimer;
	PKPaymentAuthorizationClientCallbackStateParam* _mostRecentClientCallback;
	NSString* _instanceIdentifier;
	unsigned long long _prepareTransactionDetailsCounter;
	NSObject*<OS_dispatch_group> _delayAuthorizedStateGroup;
	NSArray* _remoteDevicesToUpdate;

}

@property (nonatomic,retain) PKContinuityPaymentCoordinator * continuityPaymentCoordinator;                          //@synthesize continuityPaymentCoordinator=_continuityPaymentCoordinator - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbackQueue;                                                         //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,setter=_setState:,nonatomic) unsigned long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long hostApplicationState;                                                //@synthesize hostApplicationState=_hostApplicationState - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedRemoteDeviceUpdate;                                                     //@synthesize hasReceivedRemoteDeviceUpdate=_hasReceivedRemoteDeviceUpdate - In the implementation block
@property (assign,nonatomic) BOOL awaitingClientCallbackReply;                                                       //@synthesize awaitingClientCallbackReply=_awaitingClientCallbackReply - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> clientCallbackTimer;                                      //@synthesize clientCallbackTimer=_clientCallbackTimer - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationClientCallbackStateParam * mostRecentClientCallback;              //@synthesize mostRecentClientCallback=_mostRecentClientCallback - In the implementation block
@property (assign,nonatomic) BOOL awaitingWebServiceResponse;                                                        //@synthesize awaitingWebServiceResponse=_awaitingWebServiceResponse - In the implementation block
@property (nonatomic,retain) NSString * instanceIdentifier;                                                          //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long prepareTransactionDetailsCounter;                                    //@synthesize prepareTransactionDetailsCounter=_prepareTransactionDetailsCounter - In the implementation block
@property (nonatomic,readonly) BOOL useSecureElement; 
@property (assign,nonatomic) BOOL detectedBluetoothOn;                                                               //@synthesize detectedBluetoothOn=_detectedBluetoothOn - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> delayAuthorizedStateGroup;                                 //@synthesize delayAuthorizedStateGroup=_delayAuthorizedStateGroup - In the implementation block
@property (nonatomic,retain) NSArray * remoteDevicesToUpdate;                                                        //@synthesize remoteDevicesToUpdate=_remoteDevicesToUpdate - In the implementation block
@property (nonatomic,retain) PKPaymentService * paymentService;                                                      //@synthesize paymentService=_paymentService - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                                                //@synthesize paymentWebService=_paymentWebService - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationDataModel * model;                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) id<PKAggregateDictionaryProtocol> aggregateDictionary;                                  //@synthesize aggregateDictionary=_aggregateDictionary - In the implementation block
@property (nonatomic,retain) PKInAppPaymentSession * inAppPaymentSession;                                            //@synthesize inAppPaymentSession=_inAppPaymentSession - In the implementation block
@property (nonatomic,retain) PKPeerPaymentSession * peerPaymentSession;                                              //@synthesize peerPaymentSession=_peerPaymentSession - In the implementation block
@property (nonatomic,retain) PKContinuityPaymentService * continuityPaymentService;                                  //@synthesize continuityPaymentService=_continuityPaymentService - In the implementation block
@property (assign,nonatomic) double updatePaymentDeviceTimeout;                                                      //@synthesize updatePaymentDeviceTimeout=_updatePaymentDeviceTimeout - In the implementation block
@property (nonatomic,retain) CBCentralManager * bluetoothCentralManager;                                             //@synthesize bluetoothCentralManager=_bluetoothCentralManager - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationStateMachineDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id<PKPaymentAuthorizationStateMachineDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationStateMachineDelegate>)arg1 ;
-(unsigned long long)state;
-(void)start;
-(NSMutableArray *)callbackQueue;
-(void)_start;
-(void)_setState:(unsigned long long)arg1 ;
-(void)didCancel;
-(NSString *)instanceIdentifier;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(PKPaymentAuthorizationDataModel *)model;
-(void)_unregisterForNotifications;
-(void)setModel:(PKPaymentAuthorizationDataModel *)arg1 ;
-(void)didBecomeActive:(BOOL)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)setCallbackQueue:(NSMutableArray *)arg1 ;
-(void)_registerForNotifications;
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(void)_clientCallbackTimedOut;
-(void)__setState:(unsigned long long)arg1 param:(id)arg2 ;
-(void)_sendDidTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 withParam:(id)arg3 ;
-(void)_performPrepareTransactionDetailsRequestWithParam:(id)arg1 ;
-(void)_performNonceRequestWithParam:(id)arg1 ;
-(void)_performAuthorizationWithParam:(id)arg1 ;
-(void)_performRewrapRequestWithParam:(id)arg1 ;
-(void)_performDidAuthorizeCallbackWithParam:(id)arg1 ;
-(void)_removeWebServiceConfigurationIfNeeded;
-(void)_applyWebServiceConfigurationIfNeeded;
-(void)setUpdatePaymentDeviceTimeout:(double)arg1 ;
-(void)_postStateMachineWillStartNotification;
-(void)_setState:(unsigned long long)arg1 param:(id)arg2 ;
-(void)_advanceToNextState;
-(void)_performCancelRemotePaymentRequest;
-(void)_enqueueDidRequestMerchantSession;
-(void)_performInstallmentBind;
-(void)_enqueueInitialCallbacks;
-(void)_processErrorsForDataType:(long long)arg1 ;
-(void)_enqueueDidSelectPaymentPass:(id)arg1 ;
-(void)_enqueueDidSelectShippingContact:(id)arg1 ;
-(void)_enqueueDidUpdateAccountServicePaymentMethod:(id)arg1 ;
-(void)_updateModelWithShippingMethods:(id)arg1 paymentSummaryItems:(id)arg2 contentItems:(id)arg3 ;
-(void)didReceiveShippingContactCompleteWithUpdate:(id)arg1 ;
-(void)_enqueueCallbackOfKind:(long long)arg1 withObject:(id)arg2 ;
-(void)didReceiveShippingMethodCompleteWithUpdate:(id)arg1 ;
-(void)_enqueueDidSelectPaymentPass:(id)arg1 paymentApplication:(id)arg2 ;
-(void)didSelectRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2 ;
-(PKContinuityPaymentCoordinator *)continuityPaymentCoordinator;
-(void)_performSendClientUpdateWithShippingMethods:(id)arg1 paymentSummaryItems:(id)arg2 paymentApplication:(id)arg3 status:(long long)arg4 ;
-(void)_enqueueDidSelectRemotePaymentInstrument:(id)arg1 ;
-(void)didReceivePaymentMethodCompleteWithUpdate:(id)arg1 ;
-(BOOL)useSecureElement;
-(void)_performSendPaymentResult:(id)arg1 ;
-(void)didReceivePaymentAuthorizationResult:(id)arg1 ;
-(void)_deviceUpdateDidFailWithNoEiligbleRemoteDevices:(id)arg1 ;
-(void)_updateModelWithRemoteDevices:(id)arg1 ;
-(void)_startPayment;
-(void)_processBluetoothState:(long long)arg1 ;
-(void)_startRemoteDeviceUpdate;
-(id)_createNewRemotePaymentRequest;
-(void)_startHandoff;
-(CBCentralManager *)bluetoothCentralManager;
-(void)_performUpdatePaymentDevices;
-(void)_enqueueDidSelectPaymentMethodWithBindToken:(id)arg1 ;
-(void)_enqueueDidSelectPaymentMethodWithQuote:(id)arg1 ;
-(void)_dispatchNextCallbackParam;
-(void)_performSendRemotePaymentRequest;
-(BOOL)hasPendingCallbacks;
-(id)_dequeuePendingCallbackParam;
-(void)_startClientCallbackTimer;
-(void)_cancelClientCallbackTimer;
-(void)_enqueueDidSelectRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2 ;
-(void)_applyBillingInformationToPayment:(id)arg1 ;
-(void)_applyShippingMethodToPayment:(id)arg1 ;
-(void)_applyShippingInformationToPayment:(id)arg1 ;
-(void)_enqueueDidAuthorizePaymentWithPayment:(id)arg1 ;
-(id)_transactionWithPaymentToken:(id)arg1 ;
-(id)_transactionWithPurchase:(id)arg1 paymentHash:(id)arg2 ;
-(id)_pendingTransactionOnPeerPaymentPassForAuthorizedPeerPaymentQuote:(id)arg1 ;
-(id)_pendingTransactionOnAlternateFundingSourceForAutorizedPeerPaymentQuote:(id)arg1 ;
-(void)_applyBillingInformationToAuthorizedQuote:(id)arg1 ;
-(void)_enqeueDidAuthorizePurchaseWithParam:(id)arg1 ;
-(void)_enqueueDidAuthorizeDisbursementWithVoucher:(id)arg1 ;
-(void)_enqueueDidAuthorizePeerPaymentQuoteWithAuthorizedQuote:(id)arg1 ;
-(void)_enqueueDidAuthorizeAccountServicePaymentRequestWithApplePayTrustSignature:(id)arg1 ;
-(void)_enqueueDidAuthorizePaymentWithInstallmentAuthorizationToken:(id)arg1 ;
-(void)_enqueueDidAuthorizePaymentWithToken:(id)arg1 ;
-(void)_enqueueDidAuthorizeContext;
-(void)_enqueueDidAuthorizePaymentWithByPassPayment:(id)arg1 ;
-(void)_enqueueDidAuthorizePaymentWithRemotePayment:(id)arg1 ;
-(void)_handleStateMachineWillStartNotification:(id)arg1 ;
-(id)_billingInformationFromPaymentRequest:(id)arg1 ;
-(void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(id)arg1 ;
-(void)continuityPaymentCoordinator:(id)arg1 didTimeoutTotalWithPaymentDevices:(id)arg2 ;
-(void)continuityPaymentCoordinator:(id)arg1 didReceiveUpdatedPaymentDevices:(id)arg2 ;
-(void)continuityPaymentCoordinator:(id)arg1 didReceivePayment:(id)arg2 ;
-(void)continuityPaymentCoordinatorDidReceiveCancellation:(id)arg1 ;
-(void)setBluetoothCentralManager:(CBCentralManager *)arg1 ;
-(void)setPaymentService:(PKPaymentService *)arg1 ;
-(BOOL)canSelectPaymentOptions;
-(void)didResignActive:(BOOL)arg1 ;
-(void)didBecomeOccluded:(BOOL)arg1 ;
-(void)didEncounterError:(id)arg1 ;
-(void)didEncounterFatalError:(id)arg1 ;
-(void)didResolveError;
-(void)didRequestMerchantSession;
-(void)didReceiveMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2 ;
-(void)didSelectShippingEmail:(id)arg1 ;
-(void)didSelectShippingPhoneNumber:(id)arg1 ;
-(void)didSelectShippingName:(id)arg1 ;
-(void)didSelectBillingAddress:(id)arg1 ;
-(void)didSelectShippingContact:(id)arg1 ;
-(void)didUpdatePeerPaymentBalance:(id)arg1 ;
-(void)didSelectBankAccount:(id)arg1 ;
-(void)didReceiveShippingContactCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3 ;
-(void)didSelectShippingMethod:(id)arg1 ;
-(void)didReceiveUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2 ;
-(void)didReceiveShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2 ;
-(void)didSelectPaymentPass:(id)arg1 ;
-(void)didSelectPaymentPass:(id)arg1 paymentApplication:(id)arg2 ;
-(void)didSelectRemotePaymentInstrument:(id)arg1 ;
-(void)didReceivePaymentMethodCompleteWithSummaryItems:(id)arg1 ;
-(void)didAuthenticateWithCredential:(id)arg1 ;
-(void)didAuthenticateWithAuthenticatorEvaluationResponse:(id)arg1 ;
-(void)didReceivePaymentAuthorizationStatus:(long long)arg1 ;
-(void)delayAuthorizedStateByDuration:(double)arg1 ;
-(void)beginDelayingAuthorizedState;
-(void)endDelayingAuthorizedState;
-(void)_simulatePayment;
-(PKPaymentService *)paymentService;
-(id<PKAggregateDictionaryProtocol>)aggregateDictionary;
-(void)setAggregateDictionary:(id<PKAggregateDictionaryProtocol>)arg1 ;
-(PKInAppPaymentSession *)inAppPaymentSession;
-(void)setInAppPaymentSession:(PKInAppPaymentSession *)arg1 ;
-(PKPeerPaymentSession *)peerPaymentSession;
-(void)setPeerPaymentSession:(PKPeerPaymentSession *)arg1 ;
-(PKContinuityPaymentService *)continuityPaymentService;
-(void)setContinuityPaymentService:(PKContinuityPaymentService *)arg1 ;
-(double)updatePaymentDeviceTimeout;
-(void)setContinuityPaymentCoordinator:(PKContinuityPaymentCoordinator *)arg1 ;
-(unsigned long long)hostApplicationState;
-(void)setHostApplicationState:(unsigned long long)arg1 ;
-(BOOL)hasReceivedRemoteDeviceUpdate;
-(void)setHasReceivedRemoteDeviceUpdate:(BOOL)arg1 ;
-(BOOL)awaitingClientCallbackReply;
-(void)setAwaitingClientCallbackReply:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)clientCallbackTimer;
-(void)setClientCallbackTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(PKPaymentAuthorizationClientCallbackStateParam *)mostRecentClientCallback;
-(void)setMostRecentClientCallback:(PKPaymentAuthorizationClientCallbackStateParam *)arg1 ;
-(BOOL)awaitingWebServiceResponse;
-(void)setAwaitingWebServiceResponse:(BOOL)arg1 ;
-(unsigned long long)prepareTransactionDetailsCounter;
-(void)setPrepareTransactionDetailsCounter:(unsigned long long)arg1 ;
-(BOOL)detectedBluetoothOn;
-(void)setDetectedBluetoothOn:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_group>)delayAuthorizedStateGroup;
-(void)setDelayAuthorizedStateGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSArray *)remoteDevicesToUpdate;
-(void)setRemoteDevicesToUpdate:(NSArray *)arg1 ;
@end

