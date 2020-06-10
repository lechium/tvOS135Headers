/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VSMemoryMap : NSObject {

	int _fd;
	NSString* _filePath;
	unsigned long long _fileSize;
	void* _mappedData;

}

@property (nonatomic,readonly) NSString * filePath;                      //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) void* mappedData;                         //@synthesize mappedData=_mappedData - In the implementation block
@property (nonatomic,readonly) int fd;                                   //@synthesize fd=_fd - In the implementation block
-(void)dealloc;
-(unsigned long long)fileSize;
-(int)fd;
-(NSString *)filePath;
-(id)initWithFilePath:(id)arg1 ;
-(void*)mappedData;
-(BOOL)mmap;
-(void)madvise;
@end

