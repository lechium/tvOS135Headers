/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPredictiveViewController.h>

@class UIView, NSString, NSArray;

@interface UICandidateViewController : UIViewController <UIPredictiveViewController> {

	UIView* _candidateView;

}

@property (nonatomic,retain) UIView * candidateView;                       //@synthesize candidateView=_candidateView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * displayedCandidates; 
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(BOOL)hidesExpandableButton;
-(UIView *)candidateView;
-(NSArray *)displayedCandidates;
-(long long)overrideUserInterfaceStyle;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(void)setCandidateView:(UIView *)arg1 ;
@end

