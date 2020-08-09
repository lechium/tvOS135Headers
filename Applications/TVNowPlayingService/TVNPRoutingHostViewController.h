//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"
#import "TVNPRoutingMainViewControllerDelegate-Protocol.h"

@class NSObject, NSString, TVNPGroupableRoutingController;
@protocol OS_dispatch_group;

@interface TVNPRoutingHostViewController : UIViewController <PBSViewServicePresenter, TVNPRoutingMainViewControllerDelegate>
{
    _Bool _presentationEnded;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_initialFetchGroup;	// 16 = 0x10
    TVNPGroupableRoutingController *_routingController;	// 24 = 0x18
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100004fbc
+ (id)_exportedInterface;	// IMP=0x0000000100004ebc
- (void).cxx_destruct;	// IMP=0x0000000100005070
@property(nonatomic) _Bool presentationEnded; // @synthesize presentationEnded=_presentationEnded;
@property(readonly, nonatomic) TVNPGroupableRoutingController *routingController; // @synthesize routingController=_routingController;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *initialFetchGroup; // @synthesize initialFetchGroup=_initialFetchGroup;
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x0000000100004fd8
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004d7c
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004d78
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100004a74
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100004818

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

