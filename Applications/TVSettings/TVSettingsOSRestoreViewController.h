//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSOSUpdateServiceDelegate-Protocol.h"

@class NSString, TVSUIOSUpdateView, UITapGestureRecognizer;

@interface TVSettingsOSRestoreViewController : UIViewController <PBSOSUpdateServiceDelegate>
{
    _Bool _cancelOnExit;	// 8 = 0x8
    TVSUIOSUpdateView *_progressView;	// 16 = 0x10
    UITapGestureRecognizer *_menuRecognizer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100036a8c
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(nonatomic) _Bool cancelOnExit; // @synthesize cancelOnExit=_cancelOnExit;
@property(retain, nonatomic) TVSUIOSUpdateView *progressView; // @synthesize progressView=_progressView;
- (void)_menuButtonAction:(id)arg1;	// IMP=0x00000001000366b0
- (void)osUpdateServiceDidFinishApplyWithData:(id)arg1;	// IMP=0x00000001000365a4
- (void)osUpdateServiceDidEncounterSlowUpdateWithData:(id)arg1;	// IMP=0x00000001000365a0
- (void)osUpdateServiceDidUpdateApplyProgressWithData:(id)arg1;	// IMP=0x000000010003659c
- (void)osUpdateServiceDidStartApplyWithData:(id)arg1;	// IMP=0x00000001000364ec
- (void)osUpdateServiceDidStartRedownloadWithData:(id)arg1;	// IMP=0x00000001000364e8
- (void)osUpdateServiceDidFinishDownloadWithData:(id)arg1;	// IMP=0x00000001000363b8
- (void)osUpdateServiceDidUpdateDownloadProgressWithData:(id)arg1;	// IMP=0x00000001000360a4
- (void)osUpdateServiceDidStartDownloadWithData:(id)arg1;	// IMP=0x00000001000360a0
- (void)osUpdateServiceDidFinishCheckWithData:(id)arg1;	// IMP=0x0000000100035f74
- (void)osUpdateServiceDidStartCheckWithData:(id)arg1;	// IMP=0x0000000100035edc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100035dfc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100035ccc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100035a9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

