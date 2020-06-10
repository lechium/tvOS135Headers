/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSAttributedString;

@interface HMHTMLDocument : NSObject <NSCopying, NSSecureCoding> {

	NSString* _stringValue;

}

@property (copy,readonly) NSString * stringValue;                             //@synthesize stringValue=_stringValue - In the implementation block
@property (copy,readonly) NSAttributedString * attributedString; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(NSAttributedString *)attributedString;
-(BOOL)validateAndReturnError:(id*)arg1 ;
@end

