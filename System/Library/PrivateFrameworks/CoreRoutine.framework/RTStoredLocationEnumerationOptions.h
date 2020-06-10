/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateInterval;

@interface RTStoredLocationEnumerationOptions : NSObject <NSSecureCoding, NSCopying> {

	NSDateInterval* _dateInterval;
	double _horizontalAccuracy;
	unsigned long long _batchSize;

}

@property (nonatomic,copy) NSDateInterval * dateInterval;               //@synthesize dateInterval=_dateInterval - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;                 //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;              //@synthesize batchSize=_batchSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(double)horizontalAccuracy;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(BOOL)isEqualToOptions:(id)arg1 ;
-(id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3 ;
@end

