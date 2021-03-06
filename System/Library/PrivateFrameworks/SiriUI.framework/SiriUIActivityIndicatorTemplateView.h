/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIBaseTemplateView.h>
#import <SiriUI/SiriUITemplateView.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface SiriUIActivityIndicatorTemplateView : SiriUIBaseTemplateView <SiriUITemplateView> {

	UILabel* _detailTextLabel;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) UILabel * detailTextLabel;                                               //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;                                   //@synthesize spinnerView=_spinnerView - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIActivityIndicatorTemplateModel> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview; 
-(id)initWithDataSource:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(UILabel *)detailTextLabel;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(double)desiredHeight;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
@end

