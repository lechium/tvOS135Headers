/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGGraphIngestPlace.h>

@class NSString;

@interface PGGraphResolvedPlace : NSObject <PGGraphIngestPlace> {

	NSString* _placeInterestType;
	double _confidence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * placeInterestType;              //@synthesize placeInterestType=_placeInterestType - In the implementation block
@property (nonatomic,readonly) double confidence;                         //@synthesize confidence=_confidence - In the implementation block
-(double)confidence;
-(NSString *)placeInterestType;
-(id)initWithPlaceOfInterestType:(id)arg1 confidence:(double)arg2 ;
@end

