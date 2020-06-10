/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGadgetDataSourceManager.h>
#import <libobjc.A.dylib/PXCMMCloudGadgetViewControllerDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class NSArray, PXForYouGadgetPriorityManager, PXCMMInvitationsHorizontalGadgetProvider, PXCMMSuggestionsHorizontalGadgetProvider, PXCloudWelcomeGadgetProvider, PXSharedAlbumActivityHorizontalGadgetProvider, PXHorizontalCollectionGadgetProvider, PXForYouEditSuggestionsGadgetProvider, PXForYouRecentInterestSuggestionsGadgetProvider, PXForYouMemoryGadgetProvider, PXPeopleQuestionsGadgetProvider, PXForYouFooterGadgetProvider, PXSampleSuggestionProvider, PXSampleGadgetProvider, PXTapToRadarGadgetProvider, NSString, PXGadgetNavigationHelper;

@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager <PXCMMCloudGadgetViewControllerDelegate, PXSettingsKeyObserver> {

	NSArray* _gadgetProviders;
	BOOL _isLaunchedToTest;
	PXForYouGadgetPriorityManager* _priorityManager;
	PXCMMInvitationsHorizontalGadgetProvider* _CMMInvitationsHorizontalGadgetProvider;
	PXCMMSuggestionsHorizontalGadgetProvider* _CMMSuggestionsHorizontalGadgetProvider;
	PXCloudWelcomeGadgetProvider* _CMMCloudWelcomeGadgetProvider;
	PXSharedAlbumActivityHorizontalGadgetProvider* _icpsActivityHorizontalGadgetProvider;
	PXHorizontalCollectionGadgetProvider* _editSuggestionsHorizontalGadgetProvider;
	PXForYouEditSuggestionsGadgetProvider* _editSuggestionsGadgetProvider;
	PXHorizontalCollectionGadgetProvider* _recentInterestSuggestionsHorizontalGadgetProvider;
	PXForYouRecentInterestSuggestionsGadgetProvider* _recentInterestsSuggestionsGadgetProvider;
	PXForYouMemoryGadgetProvider* _memoryGadgetProvider;
	PXPeopleQuestionsGadgetProvider* _peopleQuestionsGadgetProvider;
	PXHorizontalCollectionGadgetProvider* _peopleQuestionsHorizontalGadgetProvider;
	PXForYouFooterGadgetProvider* _footerGadgetProvider;
	PXSampleSuggestionProvider* _sampleSuggestionGadgetsProvider;
	PXSampleGadgetProvider* _sampleGadgetsProvider;
	PXTapToRadarGadgetProvider* _tapToRadarProvider;

}

@property (nonatomic,retain) PXCMMInvitationsHorizontalGadgetProvider * CMMInvitationsHorizontalGadgetProvider;                       //@synthesize CMMInvitationsHorizontalGadgetProvider=_CMMInvitationsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXCMMSuggestionsHorizontalGadgetProvider * CMMSuggestionsHorizontalGadgetProvider;                       //@synthesize CMMSuggestionsHorizontalGadgetProvider=_CMMSuggestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXCloudWelcomeGadgetProvider * CMMCloudWelcomeGadgetProvider;                                            //@synthesize CMMCloudWelcomeGadgetProvider=_CMMCloudWelcomeGadgetProvider - In the implementation block
@property (nonatomic,retain) PXSharedAlbumActivityHorizontalGadgetProvider * icpsActivityHorizontalGadgetProvider;                    //@synthesize icpsActivityHorizontalGadgetProvider=_icpsActivityHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXHorizontalCollectionGadgetProvider * editSuggestionsHorizontalGadgetProvider;                          //@synthesize editSuggestionsHorizontalGadgetProvider=_editSuggestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouEditSuggestionsGadgetProvider * editSuggestionsGadgetProvider;                                   //@synthesize editSuggestionsGadgetProvider=_editSuggestionsGadgetProvider - In the implementation block
@property (nonatomic,retain) PXHorizontalCollectionGadgetProvider * recentInterestSuggestionsHorizontalGadgetProvider;                //@synthesize recentInterestSuggestionsHorizontalGadgetProvider=_recentInterestSuggestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouRecentInterestSuggestionsGadgetProvider * recentInterestsSuggestionsGadgetProvider;              //@synthesize recentInterestsSuggestionsGadgetProvider=_recentInterestsSuggestionsGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouMemoryGadgetProvider * memoryGadgetProvider;                                                     //@synthesize memoryGadgetProvider=_memoryGadgetProvider - In the implementation block
@property (nonatomic,retain) PXPeopleQuestionsGadgetProvider * peopleQuestionsGadgetProvider;                                         //@synthesize peopleQuestionsGadgetProvider=_peopleQuestionsGadgetProvider - In the implementation block
@property (nonatomic,retain) PXHorizontalCollectionGadgetProvider * peopleQuestionsHorizontalGadgetProvider;                          //@synthesize peopleQuestionsHorizontalGadgetProvider=_peopleQuestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouFooterGadgetProvider * footerGadgetProvider;                                                     //@synthesize footerGadgetProvider=_footerGadgetProvider - In the implementation block
@property (nonatomic,retain) PXSampleSuggestionProvider * sampleSuggestionGadgetsProvider;                                            //@synthesize sampleSuggestionGadgetsProvider=_sampleSuggestionGadgetsProvider - In the implementation block
@property (nonatomic,retain) PXSampleGadgetProvider * sampleGadgetsProvider;                                                          //@synthesize sampleGadgetsProvider=_sampleGadgetsProvider - In the implementation block
@property (nonatomic,retain) PXTapToRadarGadgetProvider * tapToRadarProvider;                                                         //@synthesize tapToRadarProvider=_tapToRadarProvider - In the implementation block
@property (nonatomic,readonly) PXForYouGadgetPriorityManager * priorityManager;                                                       //@synthesize priorityManager=_priorityManager - In the implementation block
@property (nonatomic,readonly) BOOL isLaunchedToTest;                                                                                 //@synthesize isLaunchedToTest=_isLaunchedToTest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder; 
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_calendarDayChanged;
-(PXForYouGadgetPriorityManager *)priorityManager;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg1 ;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg1 ;
-(void)removeCachedProviders;
-(id)gadgetProviders;
-(/*^block*/id)gadgetSortComparator;
-(id)initWithPriorityManager:(id)arg1 isLaunchedToTest:(BOOL)arg2 ;
-(BOOL)_canShowSurveyQuestionsGadget;
-(void)didLoadDataForPriorities;
-(/*^block*/id)gadgetProviderSortComparator;
-(unsigned long long)_adjustGadgetTypeForRanking:(unsigned long long)arg1 ;
-(long long)_adjustComparasionForInbox:(long long)arg1 gadgetType1:(unsigned long long)arg2 gadgeType2:(unsigned long long)arg3 ;
-(long long)_compareRank1:(long long)arg1 rank2:(long long)arg2 ;
-(id)filteredUndisplayedGadgets:(id)arg1 ;
-(BOOL)_resetSortingRanksIfNecessary;
-(BOOL)isLaunchedToTest;
-(PXCMMInvitationsHorizontalGadgetProvider *)CMMInvitationsHorizontalGadgetProvider;
-(void)setCMMInvitationsHorizontalGadgetProvider:(PXCMMInvitationsHorizontalGadgetProvider *)arg1 ;
-(PXCMMSuggestionsHorizontalGadgetProvider *)CMMSuggestionsHorizontalGadgetProvider;
-(void)setCMMSuggestionsHorizontalGadgetProvider:(PXCMMSuggestionsHorizontalGadgetProvider *)arg1 ;
-(PXCloudWelcomeGadgetProvider *)CMMCloudWelcomeGadgetProvider;
-(void)setCMMCloudWelcomeGadgetProvider:(PXCloudWelcomeGadgetProvider *)arg1 ;
-(PXSharedAlbumActivityHorizontalGadgetProvider *)icpsActivityHorizontalGadgetProvider;
-(void)setIcpsActivityHorizontalGadgetProvider:(PXSharedAlbumActivityHorizontalGadgetProvider *)arg1 ;
-(PXHorizontalCollectionGadgetProvider *)editSuggestionsHorizontalGadgetProvider;
-(void)setEditSuggestionsHorizontalGadgetProvider:(PXHorizontalCollectionGadgetProvider *)arg1 ;
-(PXForYouEditSuggestionsGadgetProvider *)editSuggestionsGadgetProvider;
-(void)setEditSuggestionsGadgetProvider:(PXForYouEditSuggestionsGadgetProvider *)arg1 ;
-(PXHorizontalCollectionGadgetProvider *)recentInterestSuggestionsHorizontalGadgetProvider;
-(void)setRecentInterestSuggestionsHorizontalGadgetProvider:(PXHorizontalCollectionGadgetProvider *)arg1 ;
-(PXForYouRecentInterestSuggestionsGadgetProvider *)recentInterestsSuggestionsGadgetProvider;
-(void)setRecentInterestsSuggestionsGadgetProvider:(PXForYouRecentInterestSuggestionsGadgetProvider *)arg1 ;
-(PXForYouMemoryGadgetProvider *)memoryGadgetProvider;
-(void)setMemoryGadgetProvider:(PXForYouMemoryGadgetProvider *)arg1 ;
-(PXPeopleQuestionsGadgetProvider *)peopleQuestionsGadgetProvider;
-(void)setPeopleQuestionsGadgetProvider:(PXPeopleQuestionsGadgetProvider *)arg1 ;
-(PXHorizontalCollectionGadgetProvider *)peopleQuestionsHorizontalGadgetProvider;
-(void)setPeopleQuestionsHorizontalGadgetProvider:(PXHorizontalCollectionGadgetProvider *)arg1 ;
-(PXForYouFooterGadgetProvider *)footerGadgetProvider;
-(void)setFooterGadgetProvider:(PXForYouFooterGadgetProvider *)arg1 ;
-(PXSampleSuggestionProvider *)sampleSuggestionGadgetsProvider;
-(void)setSampleSuggestionGadgetsProvider:(PXSampleSuggestionProvider *)arg1 ;
-(PXSampleGadgetProvider *)sampleGadgetsProvider;
-(void)setSampleGadgetsProvider:(PXSampleGadgetProvider *)arg1 ;
-(PXTapToRadarGadgetProvider *)tapToRadarProvider;
-(void)setTapToRadarProvider:(PXTapToRadarGadgetProvider *)arg1 ;
@end

