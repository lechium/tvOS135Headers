/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBMutableData;

@interface PBDataWriter : NSObject {

	PBMutableData* _data;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)data;
-(BOOL)writeData:(id)arg1 ;
-(id)immutableData;
-(void)writeInt32:(int)arg1 forTag:(unsigned)arg2 ;
-(void)writeInt64:(long long)arg1 forTag:(unsigned)arg2 ;
-(void)writeUint32:(unsigned)arg1 forTag:(unsigned)arg2 ;
-(void)writeUint64:(unsigned long long)arg1 forTag:(unsigned)arg2 ;
-(void)writeBOOL:(BOOL)arg1 forTag:(unsigned)arg2 ;
-(void)writeSint32:(int)arg1 forTag:(unsigned)arg2 ;
-(void)writeSint64:(long long)arg1 forTag:(unsigned)arg2 ;
-(void)writeDouble:(double)arg1 forTag:(unsigned)arg2 ;
-(void)writeFloat:(float)arg1 forTag:(unsigned)arg2 ;
-(void)writeFixed32:(unsigned)arg1 forTag:(unsigned)arg2 ;
-(void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned)arg2 ;
-(void)writeSfixed32:(int)arg1 forTag:(unsigned)arg2 ;
-(void)writeSfixed64:(long long)arg1 forTag:(unsigned)arg2 ;
-(void)writeString:(id)arg1 forTag:(unsigned)arg2 ;
-(void)writeData:(id)arg1 forTag:(unsigned)arg2 ;
-(void)writeBigEndianFixed16:(unsigned short)arg1 ;
-(void)writeBigEndianFixed32:(unsigned)arg1 ;
-(void)writeBigEndianShortThenString:(id)arg1 ;
-(void)writeProtoBuffer:(id)arg1 ;
-(void)writeInt8:(char)arg1 ;
-(void)writeUint8:(unsigned char)arg1 ;
-(void)writeBareVarint:(unsigned long long)arg1 ;
-(void)writeTag:(unsigned)arg1 andType:(unsigned char)arg2 ;
@end

