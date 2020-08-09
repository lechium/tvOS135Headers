//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface ASOnboardingPrivacyController : NSObject
{
    UIViewController *_linkController;	// 8 = 0x8
}

+ (id)makeArcadeSplashController;	// IMP=0x0000000100005f74
+ (id)makeAppStoreSplashController;	// IMP=0x0000000100005f40
+ (id)privacyLinkIdentifiersWithIsArcadeEnabled:(_Bool)arg1;	// IMP=0x0000000100005e84
- (void).cxx_destruct;	// IMP=0x0000000100005fbc
@property(retain, nonatomic) UIViewController *linkController; // @synthesize linkController=_linkController;
- (void)setPresentationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005dfc
- (void)dealloc;	// IMP=0x0000000100005d88
- (id)initWithIsArcadeSupported:(_Bool)arg1 withLocale:(id)arg2;	// IMP=0x0000000100005c38

@end

