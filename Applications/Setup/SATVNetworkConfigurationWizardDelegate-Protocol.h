//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SATVNetworkConfigurationWizardViewController;

@protocol SATVNetworkConfigurationWizardDelegate <NSObject>
- (void)interfaceDidBecomeInactiveForConfigurationWizard:(SATVNetworkConfigurationWizardViewController *)arg1;
- (void)didCancelNetworkConfigurationWizard:(SATVNetworkConfigurationWizardViewController *)arg1;
- (void)didCompleteNetworkConfigurationWizard:(SATVNetworkConfigurationWizardViewController *)arg1;
- (void)didRequestEntryForOption:(unsigned long long)arg1 completion:(void (^)(void))arg2;
@end

