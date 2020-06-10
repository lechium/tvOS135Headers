/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneManagerObserver <NSObject>
@optional
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(BOOL)arg4;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
-(void)sceneManager:(id)arg1 updateForScene:(id)arg2 preparedWithContext:(id)arg3;
-(void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3;
-(void)sceneManager:(id)arg1 updateForScene:(id)arg2 completedWithContext:(id)arg3 error:(id)arg4;

@end

