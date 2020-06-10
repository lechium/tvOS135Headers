/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NSDateInterval : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSDate * startDate; 
@property (copy,readonly) NSDate * endDate; 
@property (readonly) double duration; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)isEqualToDateInterval:(id)arg1 ;
-(BOOL)containsDate:(id)arg1 ;
-(BOOL)intersectsDateInterval:(id)arg1 ;
-(id)intersectionWithDateInterval:(id)arg1 ;
@end
