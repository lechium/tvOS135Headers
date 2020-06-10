/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKTournamentDefinitionInternal, GKPlayerInternal, NSString, NSDate;

@interface GKCustomTournamentRequestInternal : GKInternalRepresentation {

	BOOL _isCreatorInTournament;
	GKTournamentDefinitionInternal* _tournamentDefinition;
	GKPlayerInternal* _tournamentCreator;
	NSString* _tournamentName;
	NSString* _icon;
	long long _seedingMethod;
	long long _scoringMethod;
	long long _maxPlayers;
	long long _minPlayers;
	double _duration;
	NSDate* _startTime;
	long long _maxReplays;

}

@property (nonatomic,retain) GKTournamentDefinitionInternal * tournamentDefinition;              //@synthesize tournamentDefinition=_tournamentDefinition - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * tournamentCreator;                               //@synthesize tournamentCreator=_tournamentCreator - In the implementation block
@property (nonatomic,retain) NSString * tournamentName;                                          //@synthesize tournamentName=_tournamentName - In the implementation block
@property (nonatomic,retain) NSString * icon;                                                    //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) long long seedingMethod;                                            //@synthesize seedingMethod=_seedingMethod - In the implementation block
@property (assign,nonatomic) long long scoringMethod;                                            //@synthesize scoringMethod=_scoringMethod - In the implementation block
@property (assign,nonatomic) long long maxPlayers;                                               //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (assign,nonatomic) long long minPlayers;                                               //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) double duration;                                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                                 //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) long long maxReplays;                                               //@synthesize maxReplays=_maxReplays - In the implementation block
@property (assign,nonatomic) BOOL isCreatorInTournament;                                         //@synthesize isCreatorInTournament=_isCreatorInTournament - In the implementation block
+(id)secureCodedPropertyKeys;
+(id)customTournamentRequestWithTournamentDefinition:(id)arg1 player:(id)arg2 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSString *)icon;
-(void)setIcon:(NSString *)arg1 ;
-(long long)scoringMethod;
-(long long)seedingMethod;
-(GKTournamentDefinitionInternal *)tournamentDefinition;
-(void)setTournamentDefinition:(GKTournamentDefinitionInternal *)arg1 ;
-(NSString *)tournamentName;
-(void)setTournamentName:(NSString *)arg1 ;
-(void)setSeedingMethod:(long long)arg1 ;
-(void)setScoringMethod:(long long)arg1 ;
-(long long)maxPlayers;
-(void)setMaxPlayers:(long long)arg1 ;
-(long long)minPlayers;
-(void)setMinPlayers:(long long)arg1 ;
-(long long)maxReplays;
-(void)setMaxReplays:(long long)arg1 ;
-(void)setTournamentCreator:(GKPlayerInternal *)arg1 ;
-(GKPlayerInternal *)tournamentCreator;
-(BOOL)isCreatorInTournament;
-(void)setIsCreatorInTournament:(BOOL)arg1 ;
@end

