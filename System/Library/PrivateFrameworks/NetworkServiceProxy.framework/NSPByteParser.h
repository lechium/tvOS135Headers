/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NSPByteParser : NSObject <NSCopying> {

	NSData* _data;
	const char* _bytes;
	const char* _cursor;
	unsigned long long _offset;

}

@property (readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (readonly) const char* bytes;                    //@synthesize bytes=_bytes - In the implementation block
@property (assign) const char* cursor;                     //@synthesize cursor=_cursor - In the implementation block
@property (assign) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)bytes;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(const char*)cursor;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setCursor:(const char*)arg1 ;
-(id)parseDomainName;
-(unsigned short)parse16Bits:(BOOL*)arg1 ;
-(unsigned)parse32Bits:(BOOL*)arg1 ;
-(id)parseAddressWithFamily:(unsigned char)arg1 ;
-(const char*)parseBytes:(unsigned long long)arg1 ;
-(unsigned char)parse8Bits:(BOOL*)arg1 ;
-(BOOL)advanceBy:(unsigned long long)arg1 andCopyTo:(void*)arg2 ;
@end
