//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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

