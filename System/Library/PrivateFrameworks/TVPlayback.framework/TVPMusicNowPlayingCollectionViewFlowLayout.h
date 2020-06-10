/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSIndexPath;

@interface TVPMusicNowPlayingCollectionViewFlowLayout : UICollectionViewFlowLayout {

	BOOL _shouldDisableFocusEffects;
	BOOL _singleCoverModeEnabled;
	NSIndexPath* _currentIndexPath;

}

@property (assign,nonatomic) BOOL shouldDisableFocusEffects;                                           //@synthesize shouldDisableFocusEffects=_shouldDisableFocusEffects - In the implementation block
@property (assign,getter=isSingleCoverModeEnabled,nonatomic) BOOL singleCoverModeEnabled;              //@synthesize singleCoverModeEnabled=_singleCoverModeEnabled - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentIndexPath;                                           //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
+(Class)layoutAttributesClass;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)currentIndexPath;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(BOOL)isSingleCoverModeEnabled;
-(BOOL)shouldDisableFocusEffects;
-(void)setShouldDisableFocusEffects:(BOOL)arg1 ;
-(void)setSingleCoverModeEnabled:(BOOL)arg1 ;
@end
