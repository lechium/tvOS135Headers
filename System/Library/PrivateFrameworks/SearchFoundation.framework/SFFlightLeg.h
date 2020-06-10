/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFFlightLeg.h>
@class NSDate, NSString, SFAirport, NSDictionary, NSData;


@protocol SFFlightLeg <NSObject>
@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSDate * departurePublishedTime; 
@property (nonatomic,copy) NSDate * departureActualTime; 
@property (nonatomic,copy) NSString * departureTerminal; 
@property (nonatomic,copy) NSString * departureGate; 
@property (nonatomic,retain) SFAirport * departureAirport; 
@property (nonatomic,copy) NSDate * arrivalPublishedTime; 
@property (nonatomic,copy) NSDate * arrivalActualTime; 
@property (nonatomic,copy) NSString * arrivalTerminal; 
@property (nonatomic,copy) NSString * arrivalGate; 
@property (nonatomic,retain) SFAirport * arrivalAirport; 
@property (nonatomic,retain) SFAirport * divertedAirport; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * baggageClaim; 
@property (nonatomic,copy) NSDate * departureGateClosedTime; 
@property (nonatomic,copy) NSDate * departureRunwayTime; 
@property (nonatomic,copy) NSDate * arrivalRunwayTime; 
@property (nonatomic,copy) NSDate * arrivalGateTime; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(int)status;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setStatus:(int)arg1;
-(NSData *)jsonData;
-(void)setDeparturePublishedTime:(id)arg1;
-(void)setDepartureActualTime:(id)arg1;
-(void)setDepartureTerminal:(id)arg1;
-(void)setDepartureGate:(id)arg1;
-(void)setDepartureAirport:(id)arg1;
-(void)setArrivalPublishedTime:(id)arg1;
-(void)setArrivalActualTime:(id)arg1;
-(void)setArrivalTerminal:(id)arg1;
-(void)setArrivalGate:(id)arg1;
-(void)setArrivalAirport:(id)arg1;
-(void)setDivertedAirport:(id)arg1;
-(void)setBaggageClaim:(id)arg1;
-(void)setDepartureGateClosedTime:(id)arg1;
-(void)setDepartureRunwayTime:(id)arg1;
-(void)setArrivalRunwayTime:(id)arg1;
-(void)setArrivalGateTime:(id)arg1;
-(NSDate *)departurePublishedTime;
-(NSDate *)departureActualTime;
-(NSString *)departureTerminal;
-(NSString *)departureGate;
-(SFAirport *)departureAirport;
-(NSDate *)arrivalPublishedTime;
-(NSDate *)arrivalActualTime;
-(NSString *)arrivalTerminal;
-(NSString *)arrivalGate;
-(SFAirport *)arrivalAirport;
-(SFAirport *)divertedAirport;
-(NSString *)baggageClaim;
-(NSDate *)departureGateClosedTime;
-(NSDate *)departureRunwayTime;
-(NSDate *)arrivalRunwayTime;
-(NSDate *)arrivalGateTime;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, SFAirport, NSDictionary, NSData;

@interface SFFlightLeg : NSObject <SFFlightLeg, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _status;
	NSDate* _departurePublishedTime;
	NSDate* _departureActualTime;
	NSString* _departureTerminal;
	NSString* _departureGate;
	SFAirport* _departureAirport;
	NSDate* _arrivalPublishedTime;
	NSDate* _arrivalActualTime;
	NSString* _arrivalTerminal;
	NSString* _arrivalGate;
	SFAirport* _arrivalAirport;
	SFAirport* _divertedAirport;
	NSString* _title;
	NSString* _baggageClaim;
	NSDate* _departureGateClosedTime;
	NSDate* _departureRunwayTime;
	NSDate* _arrivalRunwayTime;
	NSDate* _arrivalGateTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int status;                                             //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSDate * departurePublishedTime;                          //@synthesize departurePublishedTime=_departurePublishedTime - In the implementation block
@property (nonatomic,copy) NSDate * departureActualTime;                             //@synthesize departureActualTime=_departureActualTime - In the implementation block
@property (nonatomic,copy) NSString * departureTerminal;                             //@synthesize departureTerminal=_departureTerminal - In the implementation block
@property (nonatomic,copy) NSString * departureGate;                                 //@synthesize departureGate=_departureGate - In the implementation block
@property (nonatomic,retain) SFAirport * departureAirport;                           //@synthesize departureAirport=_departureAirport - In the implementation block
@property (nonatomic,copy) NSDate * arrivalPublishedTime;                            //@synthesize arrivalPublishedTime=_arrivalPublishedTime - In the implementation block
@property (nonatomic,copy) NSDate * arrivalActualTime;                               //@synthesize arrivalActualTime=_arrivalActualTime - In the implementation block
@property (nonatomic,copy) NSString * arrivalTerminal;                               //@synthesize arrivalTerminal=_arrivalTerminal - In the implementation block
@property (nonatomic,copy) NSString * arrivalGate;                                   //@synthesize arrivalGate=_arrivalGate - In the implementation block
@property (nonatomic,retain) SFAirport * arrivalAirport;                             //@synthesize arrivalAirport=_arrivalAirport - In the implementation block
@property (nonatomic,retain) SFAirport * divertedAirport;                            //@synthesize divertedAirport=_divertedAirport - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * baggageClaim;                                  //@synthesize baggageClaim=_baggageClaim - In the implementation block
@property (nonatomic,copy) NSDate * departureGateClosedTime;                         //@synthesize departureGateClosedTime=_departureGateClosedTime - In the implementation block
@property (nonatomic,copy) NSDate * departureRunwayTime;                             //@synthesize departureRunwayTime=_departureRunwayTime - In the implementation block
@property (nonatomic,copy) NSDate * arrivalRunwayTime;                               //@synthesize arrivalRunwayTime=_arrivalRunwayTime - In the implementation block
@property (nonatomic,copy) NSDate * arrivalGateTime;                                 //@synthesize arrivalGateTime=_arrivalGateTime - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(int)status;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(BOOL)hasStatus;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setDeparturePublishedTime:(NSDate *)arg1 ;
-(void)setDepartureActualTime:(NSDate *)arg1 ;
-(void)setDepartureTerminal:(NSString *)arg1 ;
-(void)setDepartureGate:(NSString *)arg1 ;
-(void)setDepartureAirport:(SFAirport *)arg1 ;
-(void)setArrivalPublishedTime:(NSDate *)arg1 ;
-(void)setArrivalActualTime:(NSDate *)arg1 ;
-(void)setArrivalTerminal:(NSString *)arg1 ;
-(void)setArrivalGate:(NSString *)arg1 ;
-(void)setArrivalAirport:(SFAirport *)arg1 ;
-(void)setDivertedAirport:(SFAirport *)arg1 ;
-(void)setBaggageClaim:(NSString *)arg1 ;
-(void)setDepartureGateClosedTime:(NSDate *)arg1 ;
-(void)setDepartureRunwayTime:(NSDate *)arg1 ;
-(void)setArrivalRunwayTime:(NSDate *)arg1 ;
-(void)setArrivalGateTime:(NSDate *)arg1 ;
-(NSDate *)departurePublishedTime;
-(NSDate *)departureActualTime;
-(NSString *)departureTerminal;
-(NSString *)departureGate;
-(SFAirport *)departureAirport;
-(NSDate *)arrivalPublishedTime;
-(NSDate *)arrivalActualTime;
-(NSString *)arrivalTerminal;
-(NSString *)arrivalGate;
-(SFAirport *)arrivalAirport;
-(SFAirport *)divertedAirport;
-(NSString *)baggageClaim;
-(NSDate *)departureGateClosedTime;
-(NSDate *)departureRunwayTime;
-(NSDate *)arrivalRunwayTime;
-(NSDate *)arrivalGateTime;
@end

