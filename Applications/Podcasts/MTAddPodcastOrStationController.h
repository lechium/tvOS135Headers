//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTModalDismissing-Protocol.h"

@class NSString, UIAlertController, UIBarButtonItem;

@interface MTAddPodcastOrStationController : NSObject <MTModalDismissing>
{
    UIBarButtonItem *_plusButtonItem;	// 8 = 0x8
    UIAlertController *_alertController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100085c80
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
- (void)dismissAllModalsAnimated:(_Bool)arg1;	// IMP=0x0000000100085bd0
- (_Bool)userHasSomePodcasts;	// IMP=0x0000000100085abc
- (id)presentingViewController;	// IMP=0x0000000100085a60
- (id)createAndSaveStationWithTitle:(id)arg1;	// IMP=0x00000001000856e0
- (void)presentStationWithTitle:(id)arg1;	// IMP=0x0000000100085638
- (void)presentAddStationUI;	// IMP=0x0000000100085158
- (void)performSubscribe:(id)arg1;	// IMP=0x00000001000850b8
- (void)presentAddPodcastUIWithUrl:(id)arg1;	// IMP=0x0000000100084ad0
- (void)presentAddPodcastUI;	// IMP=0x0000000100084ac0
- (void)plusButtonPressed:(id)arg1;	// IMP=0x000000010008465c
- (id)plusButtonItem;	// IMP=0x00000001000845fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

