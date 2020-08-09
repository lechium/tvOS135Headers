//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PBSystemOverlayController, PBSystemOverlaySession, PBSystemOverlaySessionDismissalContext;

@protocol PBSystemOverlayControllerDelegate <NSObject>

@optional
- (void)overlayController:(PBSystemOverlayController *)arg1 didCancelSession:(PBSystemOverlaySession *)arg2 withContext:(PBSystemOverlaySessionDismissalContext *)arg3;
- (void)overlayController:(PBSystemOverlayController *)arg1 didDismissSession:(PBSystemOverlaySession *)arg2;
- (void)overlayController:(PBSystemOverlayController *)arg1 willDismissSession:(PBSystemOverlaySession *)arg2 withContext:(PBSystemOverlaySessionDismissalContext *)arg3;
- (void)overlayController:(PBSystemOverlayController *)arg1 didPresentSession:(PBSystemOverlaySession *)arg2;
- (void)overlayController:(PBSystemOverlayController *)arg1 willPresentSession:(PBSystemOverlaySession *)arg2;
@end

