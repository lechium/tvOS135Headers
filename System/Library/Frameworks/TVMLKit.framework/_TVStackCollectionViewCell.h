/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIViewController;

@interface _TVStackCollectionViewCell : UICollectionViewCell {

	UIView* _cellContentView;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
@end

