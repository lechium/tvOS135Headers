/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, INCodableEnum, NSString;

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding> {

	NSDictionary* _valuesByIndex;
	INCodableEnum* _codableEnum;
	NSString* _enumNamespace;

}

@property (nonatomic,retain) INCodableEnum * codableEnum;              //@synthesize codableEnum=_codableEnum - In the implementation block
@property (nonatomic,copy) NSString * enumNamespace;                   //@synthesize enumNamespace=_enumNamespace - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)valueType;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(Class)resolutionResultClass;
-(Class)_relationshipValueTransformerClass;
-(INCodableEnum *)codableEnum;
-(id)valueForIndex:(unsigned long long)arg1 ;
-(id)valueWithName:(id)arg1 ;
-(void)setCodableEnum:(INCodableEnum *)arg1 ;
-(NSString *)enumNamespace;
-(void)setEnumNamespace:(NSString *)arg1 ;
@end

