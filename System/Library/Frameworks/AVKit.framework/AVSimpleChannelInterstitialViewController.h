/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, AVLoadingIndicatorView;

@interface AVSimpleChannelInterstitialViewController : UIViewController {

	UILabel* _label;
	AVLoadingIndicatorView* _loadingIndicator;

}

@property (nonatomic,readonly) AVLoadingIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) UILabel * label; 
-(void)dealloc;
-(UILabel *)label;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(AVLoadingIndicatorView *)loadingIndicator;
@end

