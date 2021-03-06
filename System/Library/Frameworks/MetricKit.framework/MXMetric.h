/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMeasurementFormatter;

@interface MXMetric : NSObject <NSSecureCoding> {

	NSMeasurementFormatter* _measurementFormatter;

}

@property (retain) NSMeasurementFormatter * measurementFormatter;              //@synthesize measurementFormatter=_measurementFormatter - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)JSONRepresentation;
-(id)DictionaryRepresentation;
-(NSMeasurementFormatter *)measurementFormatter;
-(void)setMeasurementFormatter:(NSMeasurementFormatter *)arg1 ;
@end

