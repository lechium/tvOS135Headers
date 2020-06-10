/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSNumber;

@interface RTVisitDecoded : NSObject {

	double _logProbability;
	NSDate* _entryDate;
	NSDate* _exitDate;

}

@property (assign,nonatomic) double logProbability;                //@synthesize logProbability=_logProbability - In the implementation block
@property (nonatomic,retain) NSDate * entryDate;                   //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,retain) NSDate * exitDate;                    //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) NSNumber * outputType; 
-(id)description;
-(id)init;
-(NSNumber *)outputType;
-(NSDate *)exitDate;
-(NSDate *)entryDate;
-(void)setEntryDate:(NSDate *)arg1 ;
-(void)setExitDate:(NSDate *)arg1 ;
-(double)logProbability;
-(BOOL)noVisit;
-(id)initWithEntryDate:(id)arg1 exitDate:(id)arg2 logProbability:(double)arg3 ;
-(BOOL)partialVisit;
-(BOOL)completeVisit;
-(void)setLogProbability:(double)arg1 ;
@end

