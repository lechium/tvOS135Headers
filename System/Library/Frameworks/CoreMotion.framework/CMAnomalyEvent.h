/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMAnomalyEvent : NSObject <NSSecureCoding, NSCopying> {

	BOOL _acknowledgement;
	long long _state;
	long long _response;
	long long _resolution;
	double _absoluteTimestamp;
	unsigned long long _identifier;

}

@property (assign,nonatomic) long long response;                                         //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) long long resolution;                                       //@synthesize resolution=_resolution - In the implementation block
@property (assign,getter=isAcknowledgement,nonatomic) BOOL acknowledgement;              //@synthesize acknowledgement=_acknowledgement - In the implementation block
@property (assign,nonatomic) double absoluteTimestamp;                                   //@synthesize absoluteTimestamp=_absoluteTimestamp - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) unsigned long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long state;                                          //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)identifier;
-(long long)state;
-(long long)response;
-(void)setResponse:(long long)arg1 ;
-(NSDate *)timestamp;
-(long long)resolution;
-(void)setResolution:(long long)arg1 ;
-(void)setAcknowledgement:(BOOL)arg1 ;
-(id)initWithIdentifier:(unsigned long long)arg1 absoluteTimestamp:(double)arg2 state:(long long)arg3 response:(long long)arg4 resolution:(long long)arg5 ;
-(id)initWithIdentifier:(unsigned long long)arg1 absoluteTimestamp:(double)arg2 state:(long long)arg3 response:(long long)arg4 resolution:(long long)arg5 acknowledgement:(BOOL)arg6 ;
-(BOOL)isAcknowledgement;
-(double)absoluteTimestamp;
-(void)setAbsoluteTimestamp:(double)arg1 ;
@end

