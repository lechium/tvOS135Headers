/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/PDAssertionRequestDelegate.h>
#import <libobjc.A.dylib/PDAssertionCoordinatorExportedInterface.h>

@protocol OS_dispatch_queue, PDAssertionCoordinatorDelegate;
@class NSMutableDictionary, NSObject, PKEntitlementWhitelist, NSMutableArray, NSString;

@interface PDAssertionCoordinator : PDXPCService <PDAssertionRequestDelegate, PDAssertionCoordinatorExportedInterface> {

	NSMutableDictionary* _assertionsByType;
	NSObject*<OS_dispatch_queue> _coordinatorSerialQueue;
	PKEntitlementWhitelist* _whitelist;
	long long _suppressionPermissionState;
	NSMutableArray* _pendingAssertionRequests;
	BOOL _isForegroundApplication;
	id<PDAssertionCoordinatorDelegate> _delegate;
	NSString* _bundleIdentifier;

}

@property (assign,nonatomic,__weak) id<PDAssertionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isForegroundApplication;                                    //@synthesize isForegroundApplication=_isForegroundApplication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PDAssertionCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PDAssertionCoordinatorDelegate>)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 shouldInvalidateWhenBackgrounded:(BOOL)arg3 ;
-(void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 isValid:(/*^block*/id)arg3 ;
-(void)setIsForegroundApplication:(BOOL)arg1 ;
-(id)assertionsOfType:(unsigned long long)arg1 ;
-(void)invalidateAllAssertions;
-(void)cancelPendingAssertionRequests;
-(BOOL)isForegroundApplication;
-(void)invalidateAssertionsForBackgroundApplicationState;
-(void)processPendingAssertionRequests;
-(void)assertionRequestDidTimeout:(id)arg1 ;
-(void)_addRequestForAssertion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_processPendingAssertionRequests;
-(void)_acquireContactlessInterfaceSuppressionAssertion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_acquireAssertion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_cancelPendingAssertionRequest:(id)arg1 ;
-(void)_showAlertForContactlessInterfaceSuppression;
@end

