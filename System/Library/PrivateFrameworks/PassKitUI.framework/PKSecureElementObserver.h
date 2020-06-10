/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKSecureElementObserver <NSObject>
@optional
-(void)secureElement:(id)arg1 deletionOfAppletsDidUpdateToProgress:(double)arg2;
-(void)secureElement:(id)arg1 deletionOfAppletsDidFinishWithSuccess:(BOOL)arg2;
-(void)secureElementDidEnterRestrictedMode:(id)arg1;
-(void)secureElementDidLeaveRestrictedMode:(id)arg1;
-(void)secureElementPairingDidChangeForReason:(unsigned long long)arg1;

@end

