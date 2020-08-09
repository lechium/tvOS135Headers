//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVActionStep-Protocol.h"
#import "SATVNetworkConfigurationDelegate-Protocol.h"

@class NSObject, NSString, SATVNetworkReachability, TVSEthernetInterface, TVSWiFiInterface, UIActivityIndicatorView, UIView;
@protocol OS_dispatch_source;

@interface SATVNetworkValidationViewController : SATVStepViewController <SATVNetworkConfigurationDelegate, SATVActionStep>
{
    _Bool standardNavigation;	// 8 = 0x8
    _Bool _observingNetworkInterface;	// 9 = 0x9
    _Bool _shouldWaitForPhysicalInterface;	// 10 = 0xa
    _Bool _observingEthernetNetworkInterface;	// 11 = 0xb
    _Bool _observingWiFiNetworkInterface;	// 12 = 0xc
    _Bool _presentingError;	// 13 = 0xd
    _Bool _interfaceAvailabilityTimerExpired;	// 14 = 0xe
    CDUnknownBlockType completionHandler;	// 16 = 0x10
    UIActivityIndicatorView *_activityIndicatorView;	// 24 = 0x18
    UIView *_activityIndicatorContainerView;	// 32 = 0x20
    SATVNetworkReachability *_networkReachability;	// 40 = 0x28
    TVSEthernetInterface *_ethernetInterface;	// 48 = 0x30
    TVSWiFiInterface *_wiFiInterface;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_interfaceAvailabilityTimer;	// 64 = 0x40
}

+ (id)stableKey;	// IMP=0x000000010007a1d8
- (void).cxx_destruct;	// IMP=0x000000010007d704
@property(nonatomic) _Bool interfaceAvailabilityTimerExpired; // @synthesize interfaceAvailabilityTimerExpired=_interfaceAvailabilityTimerExpired;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *interfaceAvailabilityTimer; // @synthesize interfaceAvailabilityTimer=_interfaceAvailabilityTimer;
@property(nonatomic, getter=isPresentingError) _Bool presentingError; // @synthesize presentingError=_presentingError;
@property(nonatomic, getter=isObservingWiFiNetworkInterface) _Bool observingWiFiNetworkInterface; // @synthesize observingWiFiNetworkInterface=_observingWiFiNetworkInterface;
@property(nonatomic, getter=isObservingEthernetNetworkInterface) _Bool observingEthernetNetworkInterface; // @synthesize observingEthernetNetworkInterface=_observingEthernetNetworkInterface;
@property(retain, nonatomic) TVSWiFiInterface *wiFiInterface; // @synthesize wiFiInterface=_wiFiInterface;
@property(retain, nonatomic) TVSEthernetInterface *ethernetInterface; // @synthesize ethernetInterface=_ethernetInterface;
@property(retain, nonatomic) SATVNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(retain, nonatomic) UIView *activityIndicatorContainerView; // @synthesize activityIndicatorContainerView=_activityIndicatorContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool shouldWaitForPhysicalInterface; // @synthesize shouldWaitForPhysicalInterface=_shouldWaitForPhysicalInterface;
@property(readonly, nonatomic, getter=isObservingNetworkInterface) _Bool observingNetworkInterface; // @synthesize observingNetworkInterface=_observingNetworkInterface;
@property(nonatomic, getter=isStandardNavigation) _Bool standardNavigation; // @synthesize standardNavigation;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
- (_Bool)_isFactoryActivated;	// IMP=0x000000010007d374
- (void)_stopObservingWiFiInterfaceChanges;	// IMP=0x000000010007d178
- (void)_observeWiFiInterfaceChanges;	// IMP=0x000000010007cf80
- (void)_stopObservingEthernetlInterfaceChanges;	// IMP=0x000000010007cd58
- (void)_observeEthernetInterfaceChanges;	// IMP=0x000000010007cb34
- (void)_pushNetworkConfigurationController;	// IMP=0x000000010007ca24
- (void)_pushWiFiController;	// IMP=0x000000010007c558
- (void)_forgetCurrentWiFiNetwork;	// IMP=0x000000010007c424
- (void)_wiFiConnectionFailed;	// IMP=0x000000010007c248
- (void)_ethernetConnectionFailed;	// IMP=0x000000010007c068
- (void)_connectionSucceeded;	// IMP=0x000000010007bf48
- (void)_presentReachabilityErrorIsWiFi:(_Bool)arg1 withOKAction:(CDUnknownBlockType)arg2;	// IMP=0x000000010007b9ec
- (void)_cancelInterfaceAvailabilityTimer;	// IMP=0x000000010007b9a8
- (void)_startInterfaceAvailabilityTimerIfNeeded;	// IMP=0x000000010007b7b4
- (void)_testReachabilityForWifi;	// IMP=0x000000010007b504
- (void)_testReachabilityForEthernet;	// IMP=0x000000010007b254
- (void)_testReachabilityForActiveInterfaceIfPossible;	// IMP=0x000000010007afdc
- (void)_hideActivityIndicator;	// IMP=0x000000010007af9c
- (void)_showActivityIndicator;	// IMP=0x000000010007af5c
- (void)didCompleteNetworkConfiguration;	// IMP=0x000000010007ae5c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010007ab48
- (void)viewDidLayoutSubviews;	// IMP=0x000000010007a9ec
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010007a99c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010007a8f0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010007a848
- (void)autoAdvance;	// IMP=0x000000010007a7c4
@property(readonly, nonatomic) _Bool isConfigured;
- (void)loadView;	// IMP=0x000000010007a324
- (void)dealloc;	// IMP=0x000000010007a2b8
- (id)init;	// IMP=0x000000010007a1e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end
