//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SATVConsentViewController;

@protocol SATVConsentViewControllerDelegate <NSObject>
- (void)consentViewControllerDidSelectDissent:(SATVConsentViewController *)arg1;
- (void)consentViewControllerDidSelectConsent:(SATVConsentViewController *)arg1;

@optional
- (_Bool)consentViewControllerCanSelectDissent:(SATVConsentViewController *)arg1;
- (_Bool)consentViewControllerCanSelectConsent:(SATVConsentViewController *)arg1;
- (void)consentViewControllerDidSelectAuxiliary:(SATVConsentViewController *)arg1;
- (void)consentViewControllerDidSelectFooter:(SATVConsentViewController *)arg1;
@end

