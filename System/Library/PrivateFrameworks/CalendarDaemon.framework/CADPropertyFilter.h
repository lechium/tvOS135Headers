/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADFilter.h>

@class NSString, NSDate;

@interface CADPropertyFilter : CADFilter {

	long long _property;
	long long _comparison;
	NSString* _stringValue;
	long long _integerValue;
	NSDate* _dateValue;

}

@property (nonatomic,readonly) long long property;                  //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) long long comparison;                //@synthesize comparison=_comparison - In the implementation block
@property (nonatomic,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) long long integerValue;              //@synthesize integerValue=_integerValue - In the implementation block
@property (nonatomic,readonly) NSDate * dateValue;                  //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL isString; 
@property (nonatomic,readonly) BOOL isInteger; 
@property (nonatomic,readonly) BOOL isDate; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)integerValue;
-(BOOL)validate;
-(long long)property;
-(NSDate *)dateValue;
-(BOOL)isString;
-(BOOL)isDate;
-(BOOL)isInteger;
-(long long)comparison;
-(BOOL)applicableToEntityType:(int)arg1 ;
-(id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4 ;
-(BOOL)validateWithRequiredPropertyType:(int)arg1 ;
-(id)initWithProperty:(long long)arg1 comparison:(long long)arg2 stringValue:(id)arg3 ;
-(id)initWithProperty:(long long)arg1 comparison:(long long)arg2 integerValue:(long long)arg3 ;
-(id)initWithProperty:(long long)arg1 comparison:(long long)arg2 dateValue:(id)arg3 ;
@end
