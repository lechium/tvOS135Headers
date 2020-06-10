/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface STVersionVectorNode : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long count;                                    //@synthesize count=_count - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(unsigned long long)count;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setCount:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)increment;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)join:(id)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
@end

