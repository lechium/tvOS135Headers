/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBContactList.h>
@class _INPBCondition, NSArray;


@protocol _INPBContactList <NSObject>
@property (nonatomic,retain) _INPBCondition * condition; 
@property (nonatomic,readonly) BOOL hasCondition; 
@property (nonatomic,copy) NSArray * contacts; 
@property (nonatomic,readonly) unsigned long long contactsCount; 
@required
+(Class)contactType;
-(_INPBCondition *)condition;
-(void)setCondition:(id)arg1;
-(BOOL)hasCondition;
-(NSArray *)contacts;
-(void)setContacts:(id)arg1;
-(void)clearContacts;
-(void)addContact:(id)arg1;
-(id)contactAtIndex:(unsigned long long)arg1;
-(unsigned long long)contactsCount;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBCondition, NSArray, NSString;

@interface _INPBContactList : PBCodable <_INPBContactList, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBCondition* _condition;
	NSArray* _contacts;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBCondition * condition;                                                 //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) BOOL hasCondition; 
@property (nonatomic,copy) NSArray * contacts;                                                           //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) unsigned long long contactsCount; 
+(BOOL)supportsSecureCoding;
+(Class)contactType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_INPBCondition *)condition;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCondition:(_INPBCondition *)arg1 ;
-(BOOL)hasCondition;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(void)clearContacts;
-(void)addContact:(id)arg1 ;
-(id)contactAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)contactsCount;
@end
