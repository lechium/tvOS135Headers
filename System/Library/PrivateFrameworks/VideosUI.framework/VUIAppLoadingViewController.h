/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class VUIAppSpinnerView, UIView;

@interface VUIAppLoadingViewController : UIViewController {

	VUIAppSpinnerView* _loadingView;
	UIView* _parentView;
	UIView* _principalView;
	BOOL _cancelLoading;
	BOOL _loading;

}

@property (assign,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
-(BOOL)loading;
-(void)setView:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
@end

