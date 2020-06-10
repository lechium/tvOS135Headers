/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSTimeZone;

@interface NSISO8601DateFormatter : NSFormatter <NSSecureCoding> {

	CFDateFormatterRef _formatter;
	NSTimeZone* _timeZone;
	unsigned long long _formatOptions;

}

@property (copy) NSTimeZone * timeZone; 
@property (assign) unsigned long long formatOptions; 
+(BOOL)supportsSecureCoding;
+(id)stringFromDate:(id)arg1 timeZone:(id)arg2 formatOptions:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(id)stringFromDate:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)updateFormatter;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout NSRange*)arg3 error:(out id*)arg4 ;
-(void)setFormatOptions:(unsigned long long)arg1 ;
-(unsigned long long)formatOptions;
-(id)dateFromString:(id)arg1 ;
@end

