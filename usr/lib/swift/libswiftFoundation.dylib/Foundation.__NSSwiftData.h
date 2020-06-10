/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/swift/libswiftFoundation.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@interface Foundation.__NSSwiftData : NSData {

	 _backing;
	 _range;

}

@property (readonly,nonatomic) long long length; 
@property (readonly,nonatomic) void* bytes; 
-(id)copyWithZone:(void*)arg1 ;
-(id)mutableCopyWithZone:(void*)arg1 ;
-(id)init;
-(long long)length;
-(void*)bytes;
-(BOOL)_isCompact;
-(id)initWithBytes:(void*)arg1 length:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_providesConcreteBacking;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithBase64Encoding:(id)arg1 ;
@end

