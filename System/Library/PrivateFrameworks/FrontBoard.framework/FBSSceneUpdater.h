/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSSceneUpdater <NSObject>
@required
-(id)endpoint;
-(id)callOutQueue;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
-(id)hostProcess;
-(void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3;

@end
