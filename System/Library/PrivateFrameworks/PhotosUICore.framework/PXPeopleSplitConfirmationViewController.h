/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXPeopleConfirmationViewController.h>

@class UIView, UIButton, UIBarButtonItem, UILayoutGuide, NSLayoutConstraint, NSArray;

@interface PXPeopleSplitConfirmationViewController : PXPeopleConfirmationViewController {

	UIView* _interimLoadingView;
	UIButton* _confirmButton;
	UIButton* _denyButton;
	UIBarButtonItem* _undoButton;
	UILayoutGuide* _controlLayoutGuide;
	NSLayoutConstraint* _buttonSizeConstraint;
	NSLayoutConstraint* _firstButtonSpacingConstraint;
	NSLayoutConstraint* _secondButtonSpacingConstraint;
	NSLayoutConstraint* _controlGuideHeightConstraint;
	NSArray* _portraitConstraints;
	NSArray* _landscapeConstraints;
	NSArray* _commonConstraints;

}

@property (nonatomic,retain) UIView * interimLoadingView;                                     //@synthesize interimLoadingView=_interimLoadingView - In the implementation block
@property (nonatomic,retain) UIButton * confirmButton;                                        //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) UIButton * denyButton;                                           //@synthesize denyButton=_denyButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * undoButton;                                    //@synthesize undoButton=_undoButton - In the implementation block
@property (nonatomic,retain) UILayoutGuide * controlLayoutGuide;                              //@synthesize controlLayoutGuide=_controlLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonSizeConstraint;                       //@synthesize buttonSizeConstraint=_buttonSizeConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * firstButtonSpacingConstraint;               //@synthesize firstButtonSpacingConstraint=_firstButtonSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * secondButtonSpacingConstraint;              //@synthesize secondButtonSpacingConstraint=_secondButtonSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * controlGuideHeightConstraint;               //@synthesize controlGuideHeightConstraint=_controlGuideHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * portraitConstraints;                                   //@synthesize portraitConstraints=_portraitConstraints - In the implementation block
@property (nonatomic,retain) NSArray * landscapeConstraints;                                  //@synthesize landscapeConstraints=_landscapeConstraints - In the implementation block
@property (nonatomic,retain) NSArray * commonConstraints;                                     //@synthesize commonConstraints=_commonConstraints - In the implementation block
-(void)dealloc;
-(id)initWithPerson:(id)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateViewConstraints;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)undoButtonTapped:(id)arg1 ;
-(UIBarButtonItem *)undoButton;
-(void)setUndoButton:(UIBarButtonItem *)arg1 ;
-(void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2 ;
-(void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1 ;
-(void)updateViewWithViewState:(unsigned long long)arg1 ;
-(void)suggestionDidDisplay;
-(void)confirmTapped:(id)arg1 ;
-(void)denyTapped:(id)arg1 ;
-(UIButton *)confirmButton;
-(void)setConfirmButton:(UIButton *)arg1 ;
-(UIButton *)denyButton;
-(void)setDenyButton:(UIButton *)arg1 ;
-(NSArray *)portraitConstraints;
-(NSArray *)landscapeConstraints;
-(NSArray *)commonConstraints;
-(id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 andColor:(id)arg3 ;
-(void)_enableActionButtons;
-(void)_disableActionButtonsWithSelectedButton:(id)arg1 ;
-(id)_buttonBackgroundImageFromColor:(id)arg1 ;
-(void)_updateUndoButton;
-(UIView *)interimLoadingView;
-(void)setInterimLoadingView:(UIView *)arg1 ;
-(UILayoutGuide *)controlLayoutGuide;
-(void)setControlLayoutGuide:(UILayoutGuide *)arg1 ;
-(NSLayoutConstraint *)buttonSizeConstraint;
-(void)setButtonSizeConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)firstButtonSpacingConstraint;
-(void)setFirstButtonSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)secondButtonSpacingConstraint;
-(void)setSecondButtonSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)controlGuideHeightConstraint;
-(void)setControlGuideHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPortraitConstraints:(NSArray *)arg1 ;
-(void)setLandscapeConstraints:(NSArray *)arg1 ;
-(void)setCommonConstraints:(NSArray *)arg1 ;
@end

