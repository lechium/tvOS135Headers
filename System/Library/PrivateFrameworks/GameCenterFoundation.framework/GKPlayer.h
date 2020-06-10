/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <GameCenterFoundation/GKBasePlayer.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKPlayerInternal, NSAttributedString, NSArray, NSString, NSNumber, NSDate, GKGame;

@interface GKPlayer : GKBasePlayer <NSCoding, NSSecureCoding> {

	GKPlayerInternal* _internal;
	NSAttributedString* _whenString;
	NSArray* _friends;

}

@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) NSString * reason2; 
@property (assign,nonatomic) unsigned rid; 
@property (assign,nonatomic) int source; 
@property (readonly) NSString * referenceKey; 
@property (nonatomic,retain) NSArray * friends;                               //@synthesize friends=_friends - In the implementation block
@property (assign,nonatomic) BOOL isFriend; 
@property (nonatomic,retain) NSString * playerID; 
@property (retain) GKPlayerInternal * internal;                               //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * alias; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSNumber * friendLevel; 
@property (nonatomic,readonly) NSNumber * friendBiDirectional; 
@property (nonatomic,readonly) NSNumber * friendPlayedWith; 
@property (nonatomic,readonly) NSNumber * friendPlayedNearby; 
@property (nonatomic,readonly) long long avatarType; 
@property (nonatomic,retain) NSArray * monogramComponents; 
@property (nonatomic,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) GKGame * lastPlayedGame; 
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) BOOL isFamiliarFriend; 
@property (assign,nonatomic) unsigned long long numberOfFriends; 
@property (nonatomic,readonly) SCD_Struct_GK5 stats; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,retain) NSAttributedString * whenString;                 //@synthesize whenString=_whenString - In the implementation block
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,readonly) BOOL isAnonymousPlayer; 
@property (nonatomic,readonly) BOOL isUnknownPlayer; 
@property (nonatomic,readonly) BOOL isAutomatchPlayer; 
@property (nonatomic,retain,readonly) NSString * gamePlayerID; 
@property (nonatomic,retain,readonly) NSString * teamPlayerID; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * guestIdentifier; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)canonicalizedPlayerForInternal:(id)arg1 ;
+(void)loadPlayersForIdentifiersPrivate:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadPlayersForLegacyIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)cacheKeyForPlayerID:(id)arg1 ;
+(void)_loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)anonymousPlayer;
+(id)unknownPlayer;
+(id)automatchPlayer;
+(id)anonymousGuestPlayerWithIdentifier:(id)arg1 ;
+(void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadCompletePlayersForPlayers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)playerFromPlayerID:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)displayName;
-(GKPlayerInternal *)internal;
-(id)email;
-(SCD_Struct_GK5)stats;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(NSString *)cacheKey;
-(BOOL)hasPhoto;
-(NSString *)alias;
-(NSString *)referenceKey;
-(void)_postChangeNotification;
-(void)setInternal:(GKPlayerInternal *)arg1 ;
-(void)postChangeNotification;
-(NSArray *)friends;
-(void)setFriends:(NSArray *)arg1 ;
-(id)emails;
-(id)sortName;
-(NSString *)playerID;
-(NSString *)teamPlayerID;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(BOOL)scopedIDsArePersistent;
-(NSString *)gamePlayerID;
-(GKGame *)lastPlayedGame;
-(NSNumber *)friendLevel;
-(NSNumber *)friendBiDirectional;
-(NSNumber *)friendPlayedWith;
-(NSNumber *)friendPlayedNearby;
-(long long)avatarType;
-(void)setFriendLevel:(NSNumber *)arg1 ;
-(void)setFriendBiDirectional:(NSNumber *)arg1 ;
-(void)setFriendPlayedWith:(NSNumber *)arg1 ;
-(void)setFriendPlayedNearby:(NSNumber *)arg1 ;
-(void)loadCommonFriends:(BOOL)arg1 asPlayersWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadGamesPlayedIncludingInstalledGames:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isFamiliarFriend;
-(void)loadFriendsAsPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadRecentMatchesForGame:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)loadGamesPlayed:(/*^block*/id)arg1 ;
-(void)loadGamesPlayedDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)identifierForIDS;
-(void)loadProfileWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isFriendablePlayer;
-(NSAttributedString *)whenString;
-(void)setWhenString:(NSAttributedString *)arg1 ;
-(id)minimalPlayer;
@end

