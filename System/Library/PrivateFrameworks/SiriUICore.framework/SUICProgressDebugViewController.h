/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SUICProgressIndicatorViewControllerDataSource.h>

@class SUICProgressIndicatorViewController, UIButton, SUICProgressStateMachine, NSString, NSProgress;

@interface SUICProgressDebugViewController : UIViewController <SUICProgressIndicatorViewControllerDataSource> {

	SUICProgressIndicatorViewController* _indicatorViewController;
	UIButton* _eventGeneratorButton;
	SUICProgressStateMachine* _stateMachine;
	unsigned long long _testEventLoopCounter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
-(NSProgress *)progress;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)stateMachineForProgressIndicatorViewController:(id)arg1 ;
-(void)_eventGeneratorButtonTouchedUpInside:(id)arg1 ;
@end

