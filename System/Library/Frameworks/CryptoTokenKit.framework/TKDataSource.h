/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface TKDataSource : NSObject {

	NSData* _data;
	const char* _ptr;

}

@property (readonly) const char* ptr;              //@synthesize ptr=_ptr - In the implementation block
@property (readonly) const char* end; 
@property (readonly) NSData * data; 
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(const char*)end;
-(BOOL)bytesSafeToRead:(long long)arg1 ;
-(unsigned char)fetchByte;
-(id)fetchDataWithLength:(long long)arg1 ;
-(const char*)ptr;
@end
