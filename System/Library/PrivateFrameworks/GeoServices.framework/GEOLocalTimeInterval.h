/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOLocalTimeInterval : NSObject <NSSecureCoding> {

	double _startTime;
	double _endTime;

}

@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)initWithLocalTimeRange:(GEOPDLocalTimeRange*)arg1 ;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 ;
@end

