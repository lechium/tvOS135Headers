/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class TVSUIOSUpdateSlowRebootView, TVSUIOSUpdateView;

@interface TVSUIOSUpdateViewController : UIViewController {

	TVSUIOSUpdateSlowRebootView* _rebootView;
	TVSUIOSUpdateView* _progressView;

}
-(void)loadView;
-(void)setProgressPercent:(float)arg1 ;
-(void)showProgressView;
-(void)showSlowUpdateViewWithCompletion:(/*^block*/id)arg1 ;
@end

