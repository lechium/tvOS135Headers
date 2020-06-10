/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIView;

@interface UIKBCandidateView : UIKBKeyView {

	SCD_Struct_UI81 _visualStyling;
	UIView* _candidateKey;

}

@property (assign,nonatomic) SCD_Struct_UI81 visualStyling;              //@synthesize visualStyling=_visualStyling - In the implementation block
@property (nonatomic,retain) UIView * candidateKey;                      //@synthesize candidateKey=_candidateKey - In the implementation block
-(void)dealloc;
-(void)displayLayer:(id)arg1 ;
-(id)candidateList;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(SCD_Struct_UI81)visualStyling;
-(UIView *)candidateKey;
-(void)setVisualStyling:(SCD_Struct_UI81)arg1 ;
-(BOOL)isTenKey;
-(void)updateCandidateKey;
-(void)clearCandidateKey;
-(void)setCandidateKey:(UIView *)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
@end

