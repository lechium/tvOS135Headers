/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSString* _phoneNumber;
	id _underlyingResult;

}

@property (readonly) void* underlyingResult; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)range;
-(unsigned long long)resultType;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)phoneNumber;
-(void*)underlyingResult;
-(id)initWithRange:(NSRange)arg1 phoneNumber:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 phoneNumber:(id)arg2 underlyingResult:(void*)arg3 ;
@end

