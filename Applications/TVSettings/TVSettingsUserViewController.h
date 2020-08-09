//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "TSKOpenViaURLViewControllerProtocol-Protocol.h"
#import "TVApplicationControllerDelegate-Protocol.h"

@class NSString, NSURL, TSKSettingItem, TVApplicationController, TVSettingsAccountsFacade, TVSettingsITMSFacade;

@interface TVSettingsUserViewController : TSKViewController <TVApplicationControllerDelegate, TSKOpenViaURLViewControllerProtocol>
{
    _Bool _shouldPresentManageSubscriptionsWhenURLBagLoads;	// 8 = 0x8
    TVSettingsAccountsFacade *_accountsFacade;	// 16 = 0x10
    TVSettingsITMSFacade *_itmsFacade;	// 24 = 0x18
    TVApplicationController *_subscriptionsAppController;	// 32 = 0x20
    TSKSettingItem *_editNameItem;	// 40 = 0x28
    TSKSettingItem *_asnPaidItem;	// 48 = 0x30
    TSKSettingItem *_asnFreeItem;	// 56 = 0x38
    NSURL *_dislayTriggerURL;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100053f38
@property(nonatomic) _Bool shouldPresentManageSubscriptionsWhenURLBagLoads; // @synthesize shouldPresentManageSubscriptionsWhenURLBagLoads=_shouldPresentManageSubscriptionsWhenURLBagLoads;
@property(retain, nonatomic) NSURL *dislayTriggerURL; // @synthesize dislayTriggerURL=_dislayTriggerURL;
@property(retain, nonatomic) TSKSettingItem *asnFreeItem; // @synthesize asnFreeItem=_asnFreeItem;
@property(retain, nonatomic) TSKSettingItem *asnPaidItem; // @synthesize asnPaidItem=_asnPaidItem;
@property(retain, nonatomic) TSKSettingItem *editNameItem; // @synthesize editNameItem=_editNameItem;
@property(retain, nonatomic) TVApplicationController *subscriptionsAppController; // @synthesize subscriptionsAppController=_subscriptionsAppController;
@property(retain, nonatomic) TVSettingsITMSFacade *itmsFacade; // @synthesize itmsFacade=_itmsFacade;
@property(retain, nonatomic) TVSettingsAccountsFacade *accountsFacade; // @synthesize accountsFacade=_accountsFacade;
- (id)_manage;	// IMP=0x000000010005341c
- (void)_togglePasswordFreeSetting;	// IMP=0x0000000100053338
- (id)_requirePassword;	// IMP=0x0000000100052bd0
- (id)_appleIDs;	// IMP=0x00000001000526cc
- (void)displayTriggeredByURL:(id)arg1;	// IMP=0x00000001000526b8
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00000001000524fc
- (id)_manageSubscriptionsViewController;	// IMP=0x000000010005230c
- (void)_removeUser;	// IMP=0x0000000100051e6c
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100051be8
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000100051b40
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100051940
- (id)loadSettingGroups;	// IMP=0x0000000100051848
- (void)dealloc;	// IMP=0x00000001000517b0
- (id)initWithAccountsFacade:(id)arg1;	// IMP=0x00000001000516ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
