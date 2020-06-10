/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@protocol PXAssetImportStatusManager, PXCMMBannerTileControllerDelegate;
@class PXCMMViewModel, NSArray, PXMomentShareStatusPresentation, PXCMMPosterBannerView, PXCMMPeopleSuggestionsMediaProvider, PXCMMPeopleSuggestionsDataSourceManager, NSString, UIView;

@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXReusableObject, PXUIViewBasicTile> {

	unsigned long long _activityType;
	unsigned long long _sourceType;
	PXCMMViewModel* _viewModel;
	id<PXAssetImportStatusManager> _importStatusManager;
	NSArray* _localizedNames;
	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	id<PXCMMBannerTileControllerDelegate> _delegate;
	PXCMMPosterBannerView* _bannerView;
	PXCMMPeopleSuggestionsMediaProvider* _peopleSuggestionsMediaProvider;
	PXCMMPeopleSuggestionsDataSourceManager* _peopleSuggestionsDataSourceManager;

}

@property (nonatomic,retain) PXCMMPosterBannerView * bannerView;                                                        //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) PXCMMPeopleSuggestionsMediaProvider * peopleSuggestionsMediaProvider;                      //@synthesize peopleSuggestionsMediaProvider=_peopleSuggestionsMediaProvider - In the implementation block
@property (nonatomic,retain) PXCMMPeopleSuggestionsDataSourceManager * peopleSuggestionsDataSourceManager;              //@synthesize peopleSuggestionsDataSourceManager=_peopleSuggestionsDataSourceManager - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMBannerTileControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
+(id)new;
-(id)init;
-(id<PXCMMBannerTileControllerDelegate>)delegate;
-(void)setDelegate:(id<PXCMMBannerTileControllerDelegate>)arg1 ;
-(void)prepareForReuse;
-(UIView *)view;
-(PXCMMPosterBannerView *)bannerView;
-(void)setBannerView:(PXCMMPosterBannerView *)arg1 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXCMMPeopleSuggestionsMediaProvider *)peopleSuggestionsMediaProvider;
-(void)_updateLoadingPeopleSuggestions;
-(PXCMMPeopleSuggestionsDataSourceManager *)peopleSuggestionsDataSourceManager;
-(void)setPeopleSuggestionsDataSourceManager:(PXCMMPeopleSuggestionsDataSourceManager *)arg1 ;
-(void)_updateBannerActionButton;
-(id)initWithActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 viewModel:(id)arg3 momentShareStatusPresentation:(id)arg4 importStatusManager:(id)arg5 ;
-(void)setPeopleSuggestionDataSourceManager:(id)arg1 mediaProvider:(id)arg2 ;
-(void)_updateCounts;
-(void)_configureBannerViewActionButtonWithTitle:(id)arg1 ;
-(void)_updateContainsUnverifierPersons;
-(void)_updatePeopleSuggestionNames;
-(void)_updateLocalizedNamesByViewModel;
-(void)setPeopleSuggestionsMediaProvider:(PXCMMPeopleSuggestionsMediaProvider *)arg1 ;
@end

