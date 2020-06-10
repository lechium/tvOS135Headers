/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class UIActivityIndicatorView, NSString, UIView;

@interface PXPlaceholderView : UIView <PXReusableObject, PXUIViewBasicTile> {

	UIActivityIndicatorView* _indicator;
	BOOL _shouldShowIndicatorView;

}

@property (assign,nonatomic) BOOL shouldShowIndicatorView;              //@synthesize shouldShowIndicatorView=_shouldShowIndicatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
-(void)prepareForReuse;
-(UIView *)view;
-(void)layoutSubviews;
-(void)_updateSubviews;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
-(void)setShouldShowIndicatorView:(BOOL)arg1 ;
-(BOOL)shouldShowIndicatorView;
@end

