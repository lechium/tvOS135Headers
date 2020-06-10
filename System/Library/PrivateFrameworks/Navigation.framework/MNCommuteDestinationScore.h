/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, MNCommuteDestination, NSString, NSHashTable, MNCommuteDestinationSuggestion;

@interface MNCommuteDestinationScore : NSObject {

	BOOL _destinationInvalid;
	int _score;
	NSDate* _lastUpdate;
	MNCommuteDestination* _destination;
	NSString* _descriptionExtras;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;                                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdate;                                         //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,nonatomic,__weak) MNCommuteDestination * destination;                   //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) BOOL destinationInvalid;                                   //@synthesize destinationInvalid=_destinationInvalid - In the implementation block
@property (nonatomic,readonly) int score;                                                 //@synthesize score=_score - In the implementation block
@property (readonly) double weightedScore; 
@property (readonly) MNCommuteDestinationSuggestion * destinationSuggestion; 
@property (nonatomic,readonly) NSString * descriptionExtras;                              //@synthesize descriptionExtras=_descriptionExtras - In the implementation block
+(double)weight;
+(id)sessionStartDate;
+(void)setSessionStartDate:(id)arg1 ;
+(id)sessionStartDateOrNow;
-(id)description;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(int)score;
-(void)setDestination:(MNCommuteDestination *)arg1 ;
-(MNCommuteDestination *)destination;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSDate *)lastUpdate;
-(id)initWithDestination:(id)arg1 ;
-(void)lastUpdateIsNow;
-(void)notifyObservers;
-(MNCommuteDestinationSuggestion *)destinationSuggestion;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(NSString *)descriptionExtras;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(double)weightedScore;
@end

