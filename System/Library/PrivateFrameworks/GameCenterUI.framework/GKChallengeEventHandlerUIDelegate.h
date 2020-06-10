/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKChallengeEventHandlerUIDelegate.h>

@protocol GKChallengeEventHandlerUIDelegate <NSObject>
@optional
-(void)showReceivedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3;
-(void)showLocallyCompletedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3;
-(void)showRemotelyCompletedBannerForReceivingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3;

@end


@class NSString;

@interface GKChallengeEventHandlerUIDelegate : NSObject <GKChallengeEventHandlerUIDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showReceivedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)showLocallyCompletedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)showRemotelyCompletedBannerForReceivingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3 ;
@end
