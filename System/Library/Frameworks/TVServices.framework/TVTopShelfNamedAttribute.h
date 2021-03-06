/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface TVTopShelfNamedAttribute : NSObject <NSSecureCoding> {

	NSString* _name;
	NSArray* _values;

}

@property (nonatomic,copy,readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;              //@synthesize values=_values - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)values;
-(id)initWithName:(id)arg1 values:(id)arg2 ;
@end

