/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSIndexSet;

@interface CHTokenizedTextResultColumn : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _tokenRows;

}

@property (nonatomic,copy,readonly) NSArray * tokenRows;                //@synthesize tokenRows=_tokenRows - In the implementation block
@property (nonatomic,readonly) NSIndexSet * strokeIndexes; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSIndexSet *)strokeIndexes;
-(id)initWithTokenRows:(id)arg1 ;
-(NSArray *)tokenRows;
-(BOOL)isEqualToTokenizedTextResultColumn:(id)arg1 ;
-(long long)indexOfEquivalentTokenRow:(id)arg1 tokenRange:(NSRange)arg2 ;
@end

