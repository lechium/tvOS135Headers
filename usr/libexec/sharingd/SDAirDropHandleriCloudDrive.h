//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAirDropHandler.h"

@class NSURL, SFAirDropAction;

__attribute__((visibility("hidden")))
@interface SDAirDropHandleriCloudDrive : SDAirDropHandler
{
    NSURL *_iCloudDriveURL;	// 8 = 0x8
    SFAirDropAction *_action;	// 16 = 0x10
    _Bool _useOpenWithText;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010007f8c4
@property(nonatomic) _Bool useOpenWithText; // @synthesize useOpenWithText=_useOpenWithText;
- (void)saveCompletedItemsToiCloudDrive;	// IMP=0x000000010007f8a0
- (void)openCompletedItemsWithFilesApp;	// IMP=0x000000010007f89c
@property(readonly, nonatomic) SFAirDropAction *action;
- (void)updatePossibleActions;	// IMP=0x000000010007f54c
- (id)cancelActionTitleToAccompanyActions:(id)arg1;	// IMP=0x000000010007f540
- (id)suitableContentsDescription;	// IMP=0x000000010007f534
- (long long)transferTypes;	// IMP=0x000000010007f4fc
- (_Bool)canHandleTransfer;	// IMP=0x000000010007f4dc
- (id)initWithTransfer:(id)arg1;	// IMP=0x000000010007f4a8

@end

