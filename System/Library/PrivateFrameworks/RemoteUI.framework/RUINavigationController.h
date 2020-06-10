/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@class UIView, RUIStyle;

@interface RUINavigationController : UINavigationController {

	unsigned long long _ruiSupportedInterfaceOrientations;
	UIView* _blurBackgroundView;
	RUIStyle* _style;
	/*^block*/id _menuDismissalHandler;

}

@property (nonatomic,retain) RUIStyle * style;                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id menuDismissalHandler;              //@synthesize menuDismissalHandler=_menuDismissalHandler - In the implementation block
-(RUIStyle *)style;
-(void)setStyle:(RUIStyle *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(BOOL)canBeShownFromSuspendedState;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setMenuDismissalHandler:(id)arg1 ;
-(void)_menuButtonPressed:(id)arg1 ;
-(id)menuDismissalHandler;
@end

