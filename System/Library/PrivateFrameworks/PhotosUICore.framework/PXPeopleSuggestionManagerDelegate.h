/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPeopleSuggestionManagerDelegate <NSObject>
@optional
-(void)confirmationCountUpdatedForSuggestionManager:(id)arg1 undoing:(BOOL)arg2;
-(void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1;

@required
-(void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
-(void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;

@end

