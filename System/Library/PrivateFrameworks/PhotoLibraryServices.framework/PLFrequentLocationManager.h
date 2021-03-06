/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, PLRoutineService;

@interface PLFrequentLocationManager : NSObject {

	NSSet* _currentFrequentLocations;
	PLRoutineService* _routineManager;

}

@property (nonatomic,retain) PLRoutineService * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
@property (nonatomic,retain) NSSet * currentFrequentLocations;               //@synthesize currentFrequentLocations=_currentFrequentLocations - In the implementation block
-(id)init;
-(BOOL)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)arg1 ;
-(id)_createFrequentLocationsWithAllMoments:(id)arg1 ;
-(NSSet *)currentFrequentLocations;
-(void)setCurrentFrequentLocations:(NSSet *)arg1 ;
-(PLRoutineService *)routineManager;
-(void)setRoutineManager:(PLRoutineService *)arg1 ;
@end

