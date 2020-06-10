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

@interface CMPedometerEvent : NSObject <NSSecureCoding, NSCopying> {

	NSDate* fDate;
	long long fType;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)eventStringFromType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)initWithEventDate:(id)arg1 type:(long long)arg2 ;
@end
