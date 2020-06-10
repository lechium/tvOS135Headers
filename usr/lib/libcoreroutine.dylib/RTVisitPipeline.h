/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, RTVisitHyperParameter, NSString, RTVisit, NSDate;

@interface RTVisitPipeline : NSObject {

	NSArray* _modules;
	NSMutableDictionary* _moduleStats;
	unsigned long long _iteration;
	RTVisitHyperParameter* _hyperParameter;
	BOOL _bootStrappingDone;
	NSString* _name;
	unsigned long long _type;
	RTVisit* _lastVisit;
	NSDate* _lastProcessedLocationDate;

}

@property (nonatomic,retain) NSDate * lastProcessedLocationDate;              //@synthesize lastProcessedLocationDate=_lastProcessedLocationDate - In the implementation block
@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) RTVisit * lastVisit;                           //@synthesize lastVisit=_lastVisit - In the implementation block
@property (assign,nonatomic) BOOL bootStrappingDone;                          //@synthesize bootStrappingDone=_bootStrappingDone - In the implementation block
+(id)typeToString:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithModules:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 lastVisit:(id)arg4 hyperParameter:(id)arg5 ;
-(id)filterLocations:(id)arg1 ;
-(id)processVisitCluster:(id)arg1 ;
-(id)filterVisit:(id)arg1 ;
-(id)processLocations:(id)arg1 ;
-(RTVisit *)lastVisit;
-(BOOL)bootStrappingDone;
-(void)setBootStrappingDone:(BOOL)arg1 ;
-(NSDate *)lastProcessedLocationDate;
-(void)setLastProcessedLocationDate:(NSDate *)arg1 ;
@end
