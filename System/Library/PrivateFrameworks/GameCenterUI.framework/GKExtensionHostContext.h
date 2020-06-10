/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/GKExtensionHostProtocol.h>

@class GKGame, GKExtensionRemoteViewController, NSString;

@interface GKExtensionHostContext : NSExtensionContext <GKExtensionHostProtocol> {

	GKGame* _game;
	GKExtensionRemoteViewController* _remoteViewControllerWeak;

}

@property (assign,nonatomic) GKExtensionRemoteViewController * remoteViewController;              //@synthesize remoteViewControllerWeak=_remoteViewControllerWeak - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GKGame * game;                                                       //@synthesize game=_game - In the implementation block
-(void)dealloc;
-(GKExtensionRemoteViewController *)remoteViewController;
-(void)setRemoteViewController:(GKExtensionRemoteViewController *)arg1 ;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
@end

