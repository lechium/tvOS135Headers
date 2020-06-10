/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PXContextualMemoriesOptions : NSObject {

	double _accuracy;
	NSDate* _peopleProximityDate;

}

@property (assign,nonatomic) double accuracy;                           //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,retain) NSDate * peopleProximityDate;              //@synthesize peopleProximityDate=_peopleProximityDate - In the implementation block
-(id)init;
-(double)accuracy;
-(void)setAccuracy:(double)arg1 ;
-(NSDate *)peopleProximityDate;
-(void)setPeopleProximityDate:(NSDate *)arg1 ;
@end

