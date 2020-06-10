/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@protocol DEWriter;
@class NSObject;

@interface DECompressWriter : NSObject <DEWriter> {

	BOOL _compressed;
	BOOL _streamInitialized;
	BOOL _streamEnded;
	NSObject*<DEWriter> _writer;
	z_stream_s* _stream;

}

@property (nonatomic,retain) NSObject*<DEWriter> writer;              //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) z_stream_s* stream;                      //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) BOOL streamInitialized;                  //@synthesize streamInitialized=_streamInitialized - In the implementation block
@property (assign,nonatomic) BOOL streamEnded;                        //@synthesize streamEnded=_streamEnded - In the implementation block
@property (assign,nonatomic) BOOL compressed;                         //@synthesize compressed=_compressed - In the implementation block
+(BOOL)isCompressed:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
-(z_stream_s*)stream;
-(void)setStream:(z_stream_s*)arg1 ;
-(BOOL)compressed;
-(void)setCompressed:(BOOL)arg1 ;
-(NSObject*<DEWriter>)writer;
-(void)setWriter:(NSObject*<DEWriter>)arg1 ;
-(id)initWithWriter:(id)arg1 ;
-(id)compress:(id)arg1 finalize:(BOOL)arg2 ;
-(BOOL)streamInitialized;
-(void)setStreamInitialized:(BOOL)arg1 ;
-(BOOL)streamEnded;
-(void)setStreamEnded:(BOOL)arg1 ;
@end

