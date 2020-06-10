/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIScorecardViewDelegate <NSObject>
@optional
-(id)backgroundImageForScorecardViewMaterial:(id)arg1;
-(int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;

@required
-(long long)styleForScorecardView:(id)arg1;
-(long long)numberOfRowsInScorecardView:(id)arg1;
-(long long)numberOfScoreValuesForScorecardView:(id)arg1 inRow:(long long)arg2;
-(id)scoreValue:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
-(double)maximumWidthForScorecardView:(id)arg1;

@end
