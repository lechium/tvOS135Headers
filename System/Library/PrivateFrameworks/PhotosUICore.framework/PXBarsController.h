/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXActionPerformerDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class UIViewController, PXBarSpec, NSMutableDictionary, NSArray;

@interface PXBarsController : NSObject {

	SCD_Struct_PX37 _needsUpdateFlags;
	BOOL _wantsAnimatedBarsUpdate;
	UIViewController* _viewController;
	id<PXActionPerformerDelegate> _actionPerformerDelegate;
	PXBarSpec* _barSpec;
	NSMutableDictionary* _barButtonItemCache;

}

@property (nonatomic,retain) PXBarSpec * barSpec;                                                       //@synthesize barSpec=_barSpec - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * barButtonItemCache;                                //@synthesize barButtonItemCache=_barButtonItemCache - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                  //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXActionPerformerDelegate> actionPerformerDelegate;              //@synthesize actionPerformerDelegate=_actionPerformerDelegate - In the implementation block
@property (assign,nonatomic) BOOL wantsAnimatedBarsUpdate;                                              //@synthesize wantsAnimatedBarsUpdate=_wantsAnimatedBarsUpdate - In the implementation block
@property (nonatomic,readonly) NSArray * leftBarButtonItemIdentifiers; 
@property (nonatomic,readonly) NSArray * rightBarButtonItemIdentifiers; 
@property (nonatomic,readonly) NSArray * toolbarItemIdentifiers; 
-(id)init;
-(BOOL)_needsUpdate;
-(void)updateIfNeeded;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(PXBarSpec *)barSpec;
-(void)invalidateBars;
-(void)_updateBarsIfNeeded;
-(void)setBarSpec:(PXBarSpec *)arg1 ;
-(void)updateBars;
-(NSArray *)leftBarButtonItemIdentifiers;
-(NSArray *)rightBarButtonItemIdentifiers;
-(NSArray *)toolbarItemIdentifiers;
-(id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)arg1 ;
-(id)barButtonItemForIdentifier:(id)arg1 ;
-(void)invalidateBarButtonItemWithIdentifier:(id)arg1 ;
-(id<PXActionPerformerDelegate>)actionPerformerDelegate;
-(void)setActionPerformerDelegate:(id<PXActionPerformerDelegate>)arg1 ;
-(BOOL)wantsAnimatedBarsUpdate;
-(void)setWantsAnimatedBarsUpdate:(BOOL)arg1 ;
-(NSMutableDictionary *)barButtonItemCache;
@end

