/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSOrderedSet;

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSOrderedSet* _candidates;

}

@property (copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (copy) NSOrderedSet * candidates;              //@synthesize candidates=_candidates - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)addCandidate:(id)arg1 ;
-(NSOrderedSet *)candidates;
-(void)setCandidates:(NSOrderedSet *)arg1 ;
-(id)initWithTitle:(id)arg1 candidates:(id)arg2 ;
-(id)mutableCandidates;
-(BOOL)hasAlternativeText;
@end

