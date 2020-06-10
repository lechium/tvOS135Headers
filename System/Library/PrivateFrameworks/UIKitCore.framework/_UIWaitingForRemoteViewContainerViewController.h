/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIActivityIndicatorView;

@interface _UIWaitingForRemoteViewContainerViewController : UIViewController {

	UIActivityIndicatorView* _loadingSpinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingSpinner;              //@synthesize loadingSpinner=_loadingSpinner - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)stopSpinner;
-(void)setLoadingSpinner:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingSpinner;
@end
