//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVSettingsIPEntryViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TVSEthernetInterface, TVSettingsIPEntryViewController;

@interface TVSettingsNetworkConfigureIPWizardViewController : UIViewController <TVSettingsIPEntryViewControllerDelegate, UIGestureRecognizerDelegate>
{
    NSString *_ipAddress;	// 8 = 0x8
    NSString *_subnetMask;	// 16 = 0x10
    NSString *_routerAddress;	// 24 = 0x18
    NSString *_primaryDNSAddress;	// 32 = 0x20
    TVSEthernetInterface *_interface;	// 40 = 0x28
    long long _currentState;	// 48 = 0x30
    TVSettingsIPEntryViewController *_currentViewController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100076620
@property(retain, nonatomic) TVSettingsIPEntryViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) TVSEthernetInterface *interface; // @synthesize interface=_interface;
- (void)_transitionFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000100076288
- (id)_configureDNSAddressVC;	// IMP=0x0000000100076134
- (id)_configureRouterAddressVC;	// IMP=0x0000000100075fe0
- (id)_configureSubnetMaskVC;	// IMP=0x0000000100075e8c
- (id)_configureIPAddressVC;	// IMP=0x0000000100075d38
- (id)_viewControllerForState:(long long)arg1;	// IMP=0x0000000100075cfc
- (void)_setAutomaticConfigurationEnabled:(_Bool)arg1;	// IMP=0x0000000100075ae4
- (long long)_initialState;	// IMP=0x0000000100075adc
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100075a98
- (void)_menuPressed:(id)arg1;	// IMP=0x00000001000759b8
- (void)ipEntryViewControllerDidFinish:(id)arg1;	// IMP=0x0000000100075834
- (id)preferredFocusEnvironments;	// IMP=0x000000010007581c
- (_Bool)becomeFirstResponder;	// IMP=0x0000000100075804
- (void)viewDidLoad;	// IMP=0x000000010007557c
- (id)initWithInterface:(id)arg1;	// IMP=0x00000001000753a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

