//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PBSystemOverlaySession, PBSystemOverlaySessionDismissalContext;

@protocol PBSystemOverlaySessionDelegate <NSObject>
- (void)systemOverlaySessionDidInvalidate:(PBSystemOverlaySession *)arg1;
- (void)systemOverlaySessionDidCancel:(PBSystemOverlaySession *)arg1 withContext:(PBSystemOverlaySessionDismissalContext *)arg2;
- (void)systemOverlaySessionDidDismiss:(PBSystemOverlaySession *)arg1;
- (void)systemOverlaySessionWillDismiss:(PBSystemOverlaySession *)arg1 withContext:(PBSystemOverlaySessionDismissalContext *)arg2;
- (void)systemOverlaySessionDidPresent:(PBSystemOverlaySession *)arg1;
- (void)systemOverlaySessionWillPresent:(PBSystemOverlaySession *)arg1;
@end

