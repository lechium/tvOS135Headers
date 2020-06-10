/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGFeaturedMemoryGenerator : PGMemoryGenerator {

	BOOL _usesLowRequirements;
	BOOL _oldMemory;
	NSDate* _upperBoundLocalDate;

}

@property (nonatomic,retain) NSDate * upperBoundLocalDate;              //@synthesize upperBoundLocalDate=_upperBoundLocalDate - In the implementation block
@property (assign,nonatomic) BOOL usesLowRequirements;                  //@synthesize usesLowRequirements=_usesLowRequirements - In the implementation block
@property (assign,nonatomic) BOOL oldMemory;                            //@synthesize oldMemory=_oldMemory - In the implementation block
-(NSDate *)upperBoundLocalDate;
-(void)setUpperBoundLocalDate:(NSDate *)arg1 ;
-(BOOL)usesLowRequirements;
-(void)setUsesLowRequirements:(BOOL)arg1 ;
-(BOOL)oldMemory;
-(void)setOldMemory:(BOOL)arg1 ;
@end

