/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemMenuUI/TVSystemMenuUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVSystemMenuUI/TVLockupViewComponent.h>

@class UIImage, NSPersonNameComponents, _UIFloatingContentView, UIImageView, TVSUIOuterShadowView, UILabel, _TVSMHighContrastFocusView, NSString;

@interface _TVSMMonogramContentView : UIView <TVLockupViewComponent> {

	UIImage* _image;
	NSPersonNameComponents* _personNameComponents;
	_UIFloatingContentView* _floatingContentView;
	UIImageView* _contentImageView;
	TVSUIOuterShadowView* _focusedShadowView;
	TVSUIOuterShadowView* _unfocusedShadowView;
	UILabel* _initialsLabel;
	_TVSMHighContrastFocusView* _highContrastView;
	CGSize _imageSize;

}

@property (nonatomic,readonly) _UIFloatingContentView * floatingContentView;               //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,readonly) UIImageView * contentImageView;                             //@synthesize contentImageView=_contentImageView - In the implementation block
@property (nonatomic,readonly) TVSUIOuterShadowView * focusedShadowView;                   //@synthesize focusedShadowView=_focusedShadowView - In the implementation block
@property (nonatomic,readonly) TVSUIOuterShadowView * unfocusedShadowView;                 //@synthesize unfocusedShadowView=_unfocusedShadowView - In the implementation block
@property (nonatomic,readonly) UILabel * initialsLabel;                                    //@synthesize initialsLabel=_initialsLabel - In the implementation block
@property (nonatomic,readonly) _TVSMHighContrastFocusView * highContrastView;              //@synthesize highContrastView=_highContrastView - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                                           //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSPersonNameComponents * personNameComponents;                //@synthesize personNameComponents=_personNameComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_configureFloatingContentViewAppearance;
+(id)_silhouetteImage;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)imageSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSPersonNameComponents *)personNameComponents;
-(void)setPersonNameComponents:(NSPersonNameComponents *)arg1 ;
-(TVSUIOuterShadowView *)unfocusedShadowView;
-(TVSUIOuterShadowView *)focusedShadowView;
-(_UIFloatingContentView *)floatingContentView;
-(void)updateAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(UIImageView *)contentImageView;
-(void)_updateContentImage;
-(UILabel *)initialsLabel;
-(_TVSMHighContrastFocusView *)highContrastView;
@end

