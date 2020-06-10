//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString, TVCSTapToSetupManager, UIAlertController, UIViewController;

@protocol TVCSTapToSetupManagerDelegate <NSObject>

@optional
- (void)tapToSetupManager:(TVCSTapToSetupManager *)arg1 presentErrorAlert:(UIAlertController *)arg2;
- (void)tapToSetupManager:(TVCSTapToSetupManager *)arg1 didFailSetupWithError:(NSError *)arg2;
- (void)tapToSetupManagerDidFinishSetup:(TVCSTapToSetupManager *)arg1;
- (void)tapToSetupManager:(TVCSTapToSetupManager *)arg1 didReceiveSetupInfo:(NSDictionary *)arg2;
- (void)tapToSetupManager:(TVCSTapToSetupManager *)arg1 didFinishAuthenticationForAccount:(unsigned long long)arg2 withResult:(_Bool)arg3 error:(NSError *)arg4;
- (void)tapToSetupManager:(TVCSTapToSetupManager *)arg1 willAttemptAuthenticationForAccount:(unsigned long long)arg2;
- (void)tapToSetupManager:(TVCSTapToSetupManager *)arg1 networkConnectionStateDidChange:(long long)arg2;
- (_Bool)tapToSetupManager:(TVCSTapToSetupManager *)arg1 shouldConnectToNetworkWithName:(NSString *)arg2;
- (void)tapToSetupManager:(TVCSTapToSetupManager *)arg1 didBeginConfigurationPhase:(long long)arg2 withMetadata:(NSString *)arg3;
- (void)tapToSetupManager:(TVCSTapToSetupManager *)arg1 didBeginSetupWithDeviceName:(NSString *)arg2 isNewFlow:(_Bool)arg3;
- (void)tapToSetupManagerDidPromptToBeginSetup:(TVCSTapToSetupManager *)arg1;
- (UIViewController *)presentingControllerForTTSUManager:(TVCSTapToSetupManager *)arg1;
@end

