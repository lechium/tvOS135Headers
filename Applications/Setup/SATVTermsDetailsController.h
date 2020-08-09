//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SATVHeaderView, SATVLegalPresentation, UITableView;

@interface SATVTermsDetailsController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    long long _numberOfRows;	// 16 = 0x10
    NSString *_tvOSTerms;	// 24 = 0x18
    NSString *_warrantyTerms;	// 32 = 0x20
    NSString *_iCloudTerms;	// 40 = 0x28
    NSString *_gameCenterTerms;	// 48 = 0x30
    NSString *_parentalConsentTerms;	// 56 = 0x38
    SATVHeaderView *_bannerView;	// 64 = 0x40
    SATVLegalPresentation *_legalPresentation;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100027820
@property(retain, nonatomic) SATVLegalPresentation *legalPresentation; // @synthesize legalPresentation=_legalPresentation;
@property(retain, nonatomic) SATVHeaderView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSString *parentalConsentTerms; // @synthesize parentalConsentTerms=_parentalConsentTerms;
@property(retain, nonatomic) NSString *gameCenterTerms; // @synthesize gameCenterTerms=_gameCenterTerms;
@property(retain, nonatomic) NSString *iCloudTerms; // @synthesize iCloudTerms=_iCloudTerms;
@property(retain, nonatomic) NSString *warrantyTerms; // @synthesize warrantyTerms=_warrantyTerms;
@property(retain, nonatomic) NSString *tvOSTerms; // @synthesize tvOSTerms=_tvOSTerms;
@property(nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2;	// IMP=0x000000010002765c
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;	// IMP=0x00000001000275d8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000273c4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100027084
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010002705c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100027054
@property(readonly, nonatomic) struct CGSize sizeThatFits;
- (id)preferredFocusEnvironments;	// IMP=0x0000000100026f2c
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100026d30
- (void)loadView;	// IMP=0x00000001000268ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
