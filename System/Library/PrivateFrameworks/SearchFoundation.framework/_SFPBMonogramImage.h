/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMonogramImage.h>
@class NSString, NSData;


@protocol _SFPBMonogramImage <NSObject>
@property (nonatomic,copy) NSString * monogramLetters; 
@property (assign,nonatomic) int monogramStyle; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(NSString *)monogramLetters;
-(void)setMonogramLetters:(id)arg1;
-(int)monogramStyle;
-(void)setMonogramStyle:(int)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBMonogramImage : PBCodable <_SFPBMonogramImage, NSSecureCoding> {

	int _monogramStyle;
	NSString* _monogramLetters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * monogramLetters;              //@synthesize monogramLetters=_monogramLetters - In the implementation block
@property (assign,nonatomic) int monogramStyle;                     //@synthesize monogramStyle=_monogramStyle - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)monogramLetters;
-(void)setMonogramLetters:(NSString *)arg1 ;
-(int)monogramStyle;
-(void)setMonogramStyle:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

