/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class UIView, NSString;

@interface PXSelectionBadgeUIViewTile : UIView <PXReusableObject, PXUIViewBasicTile> {

	BOOL _needsUpdate;
	UIView* _selectedView;
	UIView* _unselectedView;
	BOOL __selected;

}

@property (assign,setter=_setSelected:,nonatomic) BOOL _selected;              //@synthesize _selected=__selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
+(CGSize)preferredSize;
-(void)_invalidate;
-(void)prepareForReuse;
-(BOOL)_selected;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)view;
-(void)_setSelected:(BOOL)arg1 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
-(void)_updateBadgeViewIfNeeded;
-(void)_showSelectedView;
-(void)_showUnselectedView;
@end
