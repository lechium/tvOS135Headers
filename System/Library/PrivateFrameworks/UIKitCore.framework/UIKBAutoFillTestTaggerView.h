/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol UIKBAutoFillTestTaggerViewDelegate;
@class UIKBAutoFillTestTagRequest, UIPickerView, UIToolbar, UIBarButtonItem, UIVisualEffectView, UILabel, NSArray, NSString;

@interface UIKBAutoFillTestTaggerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIKBAutoFillTestTagRequest* _currentRequest;
	UIPickerView* _pickerView;
	UIToolbar* _toolbar;
	UIBarButtonItem* _nextBarButtoItem;
	UIBarButtonItem* _previousBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	UIVisualEffectView* _visualEffectView;
	UILabel* _titleLabel;
	id<UIKBAutoFillTestTaggerViewDelegate> _delegate;
	NSArray* _tagRequests;

}

@property (assign,nonatomic,__weak) id<UIKBAutoFillTestTaggerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * tagRequests;                                                 //@synthesize tagRequests=_tagRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIKBAutoFillTestTaggerViewDelegate>)delegate;
-(void)setDelegate:(id<UIKBAutoFillTestTaggerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)_updateTitle;
-(void)_previousBarButtonAction:(id)arg1 ;
-(void)_nextBarButtonAction:(id)arg1 ;
-(void)_doneBarButtonAction:(id)arg1 ;
-(void)_performTagRequest:(id)arg1 ;
-(id)_formTypes;
-(id)_textFieldTypes;
-(void)_updateToolbarButtons;
-(void)setTagRequests:(NSArray *)arg1 ;
-(NSArray *)tagRequests;
@end

