/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/GKBubbleFlowableViewController.h>

@class GKRemoteUIController, NSString;

@interface GKRemoteUINavigationController : UINavigationController <GKBubbleFlowableViewController> {

	GKRemoteUIController* _remoteUIController;

}

@property (nonatomic,readonly) GKRemoteUIController * remoteUIController;              //@synthesize remoteUIController=_remoteUIController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(GKRemoteUIController *)remoteUIController;
-(id)initWithRemoteUIController:(id)arg1 ;
-(BOOL)_gkUsesBubbleFlowModalPresentation;
-(BOOL)_gkCanBeRemovedFromParentWhenCovered;
@end

