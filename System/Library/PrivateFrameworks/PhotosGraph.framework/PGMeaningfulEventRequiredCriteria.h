/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMeaningfulEventCriteria.h>

@class NSString, NSDictionary, PGMeaningfulEventSceneSetTrait, PGMeaningfulEventSetTrait, PGMeaningfulEventLocationSetTrait, PGMeaningfulEventNumberTrait, PGMeaningfulEventPartOfDayTrait, PGMeaningfulEventLocationMobilityTrait;

@interface PGMeaningfulEventRequiredCriteria : PGMeaningfulEventCriteria {

	BOOL _mustBeInteresting;
	NSString* _identifier;
	double _minimumScore;
	/*^block*/id _completion;
	NSDictionary* _additionalInfo;

}

@property (nonatomic,readonly) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * meaningNodeLabel; 
@property (nonatomic,readonly) double minimumScore;                                                       //@synthesize minimumScore=_minimumScore - In the implementation block
@property (assign,nonatomic) BOOL mustBeInteresting;                                                      //@synthesize mustBeInteresting=_mustBeInteresting - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSceneSetTrait * scenesTrait; 
@property (nonatomic,retain) PGMeaningfulEventSetTrait * roisTrait; 
@property (nonatomic,retain) PGMeaningfulEventSetTrait * poisTrait; 
@property (nonatomic,retain) PGMeaningfulEventLocationSetTrait * locationsTrait; 
@property (nonatomic,retain) PGMeaningfulEventSetTrait * datesTrait; 
@property (nonatomic,retain) PGMeaningfulEventSetTrait * peopleTrait; 
@property (nonatomic,retain) PGMeaningfulEventNumberTrait * numberOfPeopleTrait; 
@property (nonatomic,retain) PGMeaningfulEventSetTrait * socialGroupsTrait; 
@property (nonatomic,retain) PGMeaningfulEventNumberTrait * minimumDurationTrait; 
@property (nonatomic,retain) PGMeaningfulEventNumberTrait * maximumDurationTrait; 
@property (nonatomic,retain) PGMeaningfulEventPartOfDayTrait * significantPartsOfDayTrait; 
@property (nonatomic,retain) PGMeaningfulEventPartOfDayTrait * allPartsOfDayTrait; 
@property (nonatomic,retain) PGMeaningfulEventLocationMobilityTrait * locationMobilityTrait; 
@property (nonatomic,retain) PGMeaningfulEventSetTrait * publicEventCategoriesTrait; 
@property (nonatomic,copy) id completion;                                                                 //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalInfo;                                               //@synthesize additionalInfo=_additionalInfo - In the implementation block
-(id)debugDescription;
-(id)description;
-(NSString *)identifier;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(double)minimumScore;
-(BOOL)mustBeInteresting;
-(id)initWithIdentifier:(id)arg1 minimumScore:(double)arg2 ;
-(NSString *)meaningNodeLabel;
-(void)setMustBeInteresting:(BOOL)arg1 ;
@end

