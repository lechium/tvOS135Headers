//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PXOneUpPresentationImplementationDelegate-Protocol.h"
#import "TVPPhotoLibraryOneUpViewControllerDelegate-Protocol.h"

@class NSString, PXOneUpPresentation;

@interface TVOneUpPresentationImplementationDelegate : NSObject <PXOneUpPresentationImplementationDelegate, TVPPhotoLibraryOneUpViewControllerDelegate>
{
    PXOneUpPresentation *_presentation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000fcb0
@property(retain, nonatomic) PXOneUpPresentation *presentation; // @synthesize presentation=_presentation;
- (id)previewViewControllerForOneUpPresentation:(id)arg1 allowingActions:(_Bool)arg2;	// IMP=0x000000010000fc80
- (void)photoLibraryOneUpControllerWillPop:(id)arg1;	// IMP=0x000000010000fa04
- (void)oneUpPresentation:(id)arg1 commitPreviewViewController:(id)arg2;	// IMP=0x000000010000f9e0
- (void)oneUpPresentation:(id)arg1 didDismissPreviewViewController:(id)arg2 committing:(_Bool)arg3;	// IMP=0x000000010000f9bc
- (void)oneUpPresentation:(id)arg1 stopAnimated:(_Bool)arg2;	// IMP=0x000000010000f9b8
- (_Bool)oneUpPresentation:(id)arg1 startAnimated:(_Bool)arg2 interactiveMode:(long long)arg3;	// IMP=0x000000010000f614

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

