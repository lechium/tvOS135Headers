/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBCreateNoteIntentResponse.h>
@class _INPBNote;


@protocol _INPBCreateNoteIntentResponse <NSObject>
@property (nonatomic,retain) _INPBNote * createdNote; 
@property (nonatomic,readonly) BOOL hasCreatedNote; 
@required
-(_INPBNote *)createdNote;
-(void)setCreatedNote:(id)arg1;
-(BOOL)hasCreatedNote;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBNote, NSString;

@interface _INPBCreateNoteIntentResponse : PBCodable <_INPBCreateNoteIntentResponse, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBNote* _createdNote;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBNote * createdNote;                                                    //@synthesize createdNote=_createdNote - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedNote; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBNote *)createdNote;
-(void)setCreatedNote:(_INPBNote *)arg1 ;
-(BOOL)hasCreatedNote;
@end

