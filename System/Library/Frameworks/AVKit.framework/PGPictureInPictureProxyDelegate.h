/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGPictureInPictureProxyDelegate <NSObject>
@optional
-(long long)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(id)arg1;
-(CGRect*)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
-(id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)arg1;
-(void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
-(void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;
-(void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;
-(void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2;
-(void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
-(void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
-(void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
-(void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;

@end

