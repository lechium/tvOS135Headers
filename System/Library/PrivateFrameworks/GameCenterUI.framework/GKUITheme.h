/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameCenterUI/GameCenterUI-Structs.h>
@class NSCache, GKNetworkImageSource, UIImage;

@interface GKUITheme : NSObject {

	NSCache* _resourceCache;

}

@property (nonatomic,retain) NSCache * resourceCache;                                                     //@synthesize resourceCache=_resourceCache - In the implementation block
@property (nonatomic,retain,readonly) GKNetworkImageSource * macGameIconSource; 
@property (nonatomic,retain,readonly) GKNetworkImageSource * photoListSource; 
@property (nonatomic,retain,readonly) GKNetworkImageSource * photoDetailSource; 
@property (nonatomic,retain,readonly) GKNetworkImageSource * iconLeaderboardListSource; 
@property (nonatomic,retain,readonly) GKNetworkImageSource * iconLeaderboardSetListSource; 
@property (nonatomic,readonly) GKNetworkImageSource * untreatedAchievementImageSource; 
@property (nonatomic,readonly) GKNetworkImageSource * untreatedAchievementImageDetailSource; 
@property (nonatomic,retain,readonly) UIImage * ratingStarsBackgroundImage; 
@property (nonatomic,retain,readonly) UIImage * ratingStarsForegroundImage; 
@property (nonatomic,retain,readonly) UIImage * interactiveRatingStarsForeground; 
@property (nonatomic,retain,readonly) UIImage * interactiveRatingStarsBackground; 
@property (nonatomic,readonly) CGSize formSheetSize; 
@property (nonatomic,readonly) double formSheetCornerRadius; 
+(id)sharedTheme;
-(id)init;
-(void)dealloc;
-(id)imageNamed:(id)arg1 ;
-(GKNetworkImageSource *)untreatedAchievementImageDetailSource;
-(GKNetworkImageSource *)untreatedAchievementImageSource;
-(id)achievementsDefaultIcon;
-(CGSize)formSheetSize;
-(id)avatarSourceWithDimension:(long long)arg1 ;
-(id)monogramSourceWithDimension:(long long)arg1 ;
-(GKNetworkImageSource *)macGameIconSource;
-(id)bubbleFriends;
-(id)bubbleHighlight;
-(id)bubbleAccept;
-(id)bubbleChallenges;
-(id)bubbleDecline;
-(id)bubbleGames;
-(id)bubbleInvite;
-(id)bubblePlay;
-(id)bubblePoints;
-(id)bubbleRequests;
-(id)bubbleShare;
-(id)bubbleSignin;
-(id)bubbleTurns;
-(void)clearResourceCache;
-(NSCache *)resourceCache;
-(void)setResourceCache:(NSCache *)arg1 ;
-(id)resourceWithName:(id)arg1 missingHandler:(/*^block*/id)arg2 ;
-(id)resourceForSelector:(SEL)arg1 missingHandler:(/*^block*/id)arg2 ;
-(id)defaultPlayerPhoto;
-(id)defaultLeaderboardIcon;
-(id)messagesInviteBackgroundImage;
-(UIImage *)ratingStarsBackgroundImage;
-(UIImage *)ratingStarsForegroundImage;
-(UIImage *)interactiveRatingStarsForeground;
-(UIImage *)interactiveRatingStarsBackground;
-(id)eventIconImage;
-(id)achievementsNotStartedIcon;
-(double)formSheetCornerRadius;
-(id)placeholderSourceWithDimension:(long long)arg1 ;
-(GKNetworkImageSource *)photoListSource;
-(GKNetworkImageSource *)photoDetailSource;
-(GKNetworkImageSource *)iconLeaderboardListSource;
-(GKNetworkImageSource *)iconLeaderboardSetListSource;
-(id)addPlayerButtonImage;
-(id)removePlayerButtonImage;
-(id)playerPickerUnselectedImage;
-(id)playerPickerSelectedImage;
-(id)navbarActionButtonIcon;
-(id)statusDotImage;
@end

