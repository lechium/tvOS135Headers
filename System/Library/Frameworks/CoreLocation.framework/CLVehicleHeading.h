/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface CLVehicleHeading : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double trueHeading; 
@property (nonatomic,readonly) NSDate * timestamp; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(id)shortDescription;
-(id)initWithClientVehicleHeading:(SCD_Struct_CL2)arg1 ;
-(double)trueHeading;
@end
