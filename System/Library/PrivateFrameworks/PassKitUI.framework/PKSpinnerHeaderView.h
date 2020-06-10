/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UIActivityIndicatorView;

@interface PKSpinnerHeaderView : UITableViewHeaderFooterView {

	UIActivityIndicatorView* _spinner;
	BOOL _showSpinner;

}

@property (assign,nonatomic) BOOL showSpinner;              //@synthesize showSpinner=_showSpinner - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setShowSpinner:(BOOL)arg1 ;
-(BOOL)showSpinner;
@end
