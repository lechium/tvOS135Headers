/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class _UIAccessDeniedView;

@interface PLUIPrivacyViewController : UIViewController {

	BOOL _showingAccessDeniedView;
	_UIAccessDeniedView* _accessDeniedView;

}
-(void)dealloc;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(void)_updateAccessDeniedView;
-(void)_showCancelButton;
-(void)_cancelButtonClicked:(id)arg1 ;
@end
