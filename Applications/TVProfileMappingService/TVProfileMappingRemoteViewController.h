//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"
#import "TVProfileMappingViewControllerDelegate-Protocol.h"

@class NSString, UINavigationController;

@interface TVProfileMappingRemoteViewController : UIViewController <TVProfileMappingViewControllerDelegate, PBSViewServicePresenter>
{
    UINavigationController *_navigationController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100003eec
+ (id)_exportedInterface;	// IMP=0x0000000100003dc0
- (void).cxx_destruct;	// IMP=0x0000000100003fc0
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003db0
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100003b80
- (void)profileMappingViewController:(id)arg1 didFinishWithMap:(id)arg2;	// IMP=0x0000000100003b14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

