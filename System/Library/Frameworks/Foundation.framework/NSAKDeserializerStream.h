/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSDeserializerStream.h>

@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {

	const void* memory;
	const char* current;
	unsigned long long left;
	unsigned long long max;
	BOOL freeWhenDone;

}
-(void)dealloc;
-(id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(int)readInt;
-(unsigned long long)readAlignedDataSize;
-(void)readData:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initFromPath:(id)arg1 ;
@end

