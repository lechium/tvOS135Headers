/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface TIKeyboardCandidateResultSetCoder : NSObject {

	NSMutableData* _mutableData;
	NSData* _data;
	unsigned long long _offset;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableData;                //@synthesize mutableData=_mutableData - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                  //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) const char* bytes; 
@property (nonatomic,readonly) const char* currentPosition; 
+(Class)classFromCandidateType:(int)arg1 ;
+(id)candidateTypeToClassNameMap;
+(id)encodeWithCandidateResultSet:(id)arg1 ;
+(id)decodeWithData:(id)arg1 ;
-(const char*)bytes;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(const char*)currentPosition;
-(id)initForEncoding;
-(id)initForDecodingWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 mutableData:(id)arg2 ;
-(id)decodeCandidate;
-(void)encodeBool:(BOOL)arg1 ;
-(BOOL)decodeBool;
-(void)encodeByte:(unsigned char)arg1 ;
-(unsigned char)decodeByte;
-(void)encodeShort:(unsigned short)arg1 ;
-(unsigned short)decodeShort;
-(void)encodeDouble:(double)arg1 ;
-(double)decodeDouble;
-(void)encodeUInt32:(unsigned)arg1 ;
-(unsigned)decodeUInt32;
-(void)encodeUInt64:(unsigned long long)arg1 ;
-(unsigned long long)decodeUInt64;
-(void)encodeString:(id)arg1 ;
-(id)decodeString;
-(void)encodeStringArray:(id)arg1 ;
-(id)decodeStringArray;
-(void)encodePointerValueArray:(id)arg1 ;
-(id)decodePointerValueArray;
-(id)dataFromCandidateResultSet:(id)arg1 ;
-(id)candidateResultSet;
-(NSMutableData *)mutableData;
-(void)setMutableData:(NSMutableData *)arg1 ;
@end

