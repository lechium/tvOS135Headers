/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _TVInspectorCapturingViewDelegate;
@class UILabel;

@interface _TVInspectorCapturingView : UIView {

	BOOL _testingHits;
	UILabel* _descriptionLabel;
	id<_TVInspectorCapturingViewDelegate> _delegate;

}

@property (getter=isTestingHits,nonatomic,readonly) BOOL testingHits;                            //@synthesize testingHits=_testingHits - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * descriptionLabel;                                //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) id<_TVInspectorCapturingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_TVInspectorCapturingViewDelegate>)delegate;
-(void)setDelegate:(id<_TVInspectorCapturingViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UILabel *)descriptionLabel;
-(void)didTapView:(id)arg1 ;
-(BOOL)isTestingHits;
@end
