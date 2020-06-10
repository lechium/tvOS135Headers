/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class FBSScene, FBSSerialQueue;

@interface FBSSceneAction : BSAction {

	FBSScene* _scene;
	FBSSerialQueue* _callOutQueue;

}

@property (nonatomic,retain) FBSScene * scene;                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) FBSSerialQueue * callOutQueue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
-(void)setCallOutQueue:(FBSSerialQueue *)arg1 ;
-(FBSSerialQueue *)callOutQueue;
-(void)setScene:(FBSScene *)arg1 ;
-(FBSScene *)scene;
@end
