//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSBulletinPresenter-Protocol.h"

@class NSString, PBSBulletin, TVImageProxy, TVSUIBulletinView;

@interface TVSBBulletinViewController : UIViewController <PBSBulletinPresenter>
{
    PBSBulletin *_bulletin;	// 8 = 0x8
    TVSUIBulletinView *_bulletinView;	// 16 = 0x10
    TVImageProxy *_imageProxy;	// 24 = 0x18
}

+ (id)_exportedInterface;	// IMP=0x0000000100003c6c
- (void).cxx_destruct;	// IMP=0x0000000100005400
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) TVSUIBulletinView *bulletinView; // @synthesize bulletinView=_bulletinView;
@property(retain, nonatomic) PBSBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (id)_convertToAttributedStringIfNeeded:(id)arg1 imagePointSize:(double)arg2;	// IMP=0x0000000100004e54
- (id)_bulletinImageForItem:(id)arg1;	// IMP=0x0000000100004728
- (void)_configureBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x0000000100004404
- (id)_bulletinViewForBulletin:(id)arg1;	// IMP=0x00000001000042d8
- (void)_hideBulletinViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000040b0
- (void)_showBulletinView:(_Bool)arg1;	// IMP=0x0000000100003f00
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003ef0
- (void)bulletinServiceUpdateWithBulletin:(id)arg1;	// IMP=0x0000000100003e6c
- (void)bulletinServiceBeginPresentationWithBulletin:(id)arg1;	// IMP=0x0000000100003d58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

