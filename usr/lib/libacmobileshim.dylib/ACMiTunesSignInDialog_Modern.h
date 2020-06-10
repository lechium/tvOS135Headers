/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMiTunesSignInDialog.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface ACMiTunesSignInDialog_Modern : ACMiTunesSignInDialog <UIAlertViewDelegate> {

	BOOL _isPresented;

}

@property (assign,nonatomic) BOOL isPresented;                      //@synthesize isPresented=_isPresented - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewDidLoad;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
-(BOOL)isPresented;
-(BOOL)shouldPasswordTextFieldReturnOnSignInDisallowed;
-(void)setIsPresented:(BOOL)arg1 ;
@end

