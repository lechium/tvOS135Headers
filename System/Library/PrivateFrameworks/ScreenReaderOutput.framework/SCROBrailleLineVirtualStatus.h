/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SCROBrailleLineVirtualStatus : NSObject {

	int _alignment;
	NSData* _data;
	long long _length;
	char* _cells;

}

@property (nonatomic,retain) NSData * data;                 //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) int alignment;                 //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long length;              //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) char* cells;                   //@synthesize cells=_cells - In the implementation block
-(void)dealloc;
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(char*)cells;
-(void)setCells:(char*)arg1 ;
@end

