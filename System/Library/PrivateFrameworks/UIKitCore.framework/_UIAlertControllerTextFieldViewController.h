/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewController.h>

@protocol _UIAlertControllerTextFieldViewControllerContaining;
@class NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout, NSArray;

@interface _UIAlertControllerTextFieldViewController : UICollectionViewController {

	NSMutableArray* textFieldViews;
	NSMutableArray* textFields;
	BOOL _textFieldsCanBecomeFirstResponder;
	UIAlertControllerVisualStyle* _visualStyle;
	UICollectionViewFlowLayout* _collectionViewLayout;
	BOOL _hidden;
	id<_UIAlertControllerTextFieldViewControllerContaining> _container;

}

@property (assign,nonatomic,__weak) id<_UIAlertControllerTextFieldViewControllerContaining> container;              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL textFieldsCanBecomeFirstResponder; 
@property (assign,nonatomic) UIAlertControllerVisualStyle * visualStyle; 
@property (readonly) NSArray * textFields; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                           //@synthesize hidden=_hidden - In the implementation block
-(id)init;
-(id<_UIAlertControllerTextFieldViewControllerContaining>)container;
-(void)setContainer:(id<_UIAlertControllerTextFieldViewControllerContaining>)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)resignFirstResponder;
-(NSArray *)textFields;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(id)textFieldAtIndex:(long long)arg1 ;
-(UIAlertControllerVisualStyle *)visualStyle;
-(void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1 ;
-(void)setVisualStyle:(UIAlertControllerVisualStyle *)arg1 ;
-(BOOL)textFieldsCanBecomeFirstResponder;
-(void)updateTextFieldStyle;
-(void)_returnKeyPressedInTextField:(id)arg1 ;
-(long long)numberOfTextFields;
-(double)_bottomMarginForTextFields;
-(id)addTextFieldWithPlaceholder:(id)arg1 ;
-(id)textFieldContainerViews;
-(void)removeAllTextFields;
@end

