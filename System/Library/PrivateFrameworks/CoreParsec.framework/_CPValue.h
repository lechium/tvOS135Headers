/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_CPFeedbackJSONObject.h>
#import <libobjc.A.dylib/_CPValue.h>
@class NSString, _CPStruct, _CPListValue, NSData;


@protocol _CPValue <NSObject>
@property (assign,nonatomic) int null_value; 
@property (assign,nonatomic) double number_value; 
@property (nonatomic,copy) NSString * string_value; 
@property (assign,nonatomic) BOOL bool_value; 
@property (nonatomic,retain) _CPStruct * struct_value; 
@property (nonatomic,retain) _CPListValue * list_value; 
@property (nonatomic,copy) NSData * bytes_value; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichKind; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(unsigned long long)whichKind;
-(void)setNull_value:(int)arg1;
-(void)setNumber_value:(double)arg1;
-(void)setString_value:(id)arg1;
-(void)setBool_value:(BOOL)arg1;
-(void)setStruct_value:(id)arg1;
-(void)setList_value:(id)arg1;
-(void)setBytes_value:(id)arg1;
-(int)null_value;
-(double)number_value;
-(NSString *)string_value;
-(BOOL)bool_value;
-(_CPStruct *)struct_value;
-(_CPListValue *)list_value;
-(NSData *)bytes_value;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _CPStruct, _CPListValue, NSData, NSDictionary;

@interface _CPValue : PBCodable <_CPFeedbackJSONObject, _CPValue, NSSecureCoding> {

	BOOL _bool_value;
	int _null_value;
	double _number_value;
	NSString* _string_value;
	_CPStruct* _struct_value;
	_CPListValue* _list_value;
	NSData* _bytes_value;
	unsigned long long _whichKind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) int null_value;                                         //@synthesize null_value=_null_value - In the implementation block
@property (assign,nonatomic) double number_value;                                    //@synthesize number_value=_number_value - In the implementation block
@property (nonatomic,copy) NSString * string_value;                                  //@synthesize string_value=_string_value - In the implementation block
@property (assign,nonatomic) BOOL bool_value;                                        //@synthesize bool_value=_bool_value - In the implementation block
@property (nonatomic,retain) _CPStruct * struct_value;                               //@synthesize struct_value=_struct_value - In the implementation block
@property (nonatomic,retain) _CPListValue * list_value;                              //@synthesize list_value=_list_value - In the implementation block
@property (nonatomic,copy) NSData * bytes_value;                                     //@synthesize bytes_value=_bytes_value - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichKind;                         //@synthesize whichKind=_whichKind - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)feedbackJSON;
-(void)clearKind;
-(unsigned long long)whichKind;
-(void)setNull_value:(int)arg1 ;
-(void)setNumber_value:(double)arg1 ;
-(void)setString_value:(NSString *)arg1 ;
-(void)setBool_value:(BOOL)arg1 ;
-(void)setStruct_value:(_CPStruct *)arg1 ;
-(void)setList_value:(_CPListValue *)arg1 ;
-(void)setBytes_value:(NSData *)arg1 ;
-(int)null_value;
-(double)number_value;
-(NSString *)string_value;
-(BOOL)bool_value;
-(_CPStruct *)struct_value;
-(_CPListValue *)list_value;
-(NSData *)bytes_value;
@end

