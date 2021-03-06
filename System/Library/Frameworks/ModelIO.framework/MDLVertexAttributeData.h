/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MDLMeshBufferMap;

@interface MDLVertexAttributeData : NSObject {

	MDLMeshBufferMap* _map;
	void* _dataStart;
	unsigned long long _stride;
	unsigned long long _format;
	unsigned long long _bufferSize;

}

@property (nonatomic,retain) MDLMeshBufferMap * map; 
@property (assign,nonatomic) void* dataStart; 
@property (assign,nonatomic) unsigned long long stride; 
@property (assign,nonatomic) unsigned long long format; 
@property (assign,nonatomic) unsigned long long bufferSize;              //@synthesize bufferSize=_bufferSize - In the implementation block
-(id)init;
-(MDLMeshBufferMap *)map;
-(unsigned long long)stride;
-(void)setStride:(unsigned long long)arg1 ;
-(unsigned long long)format;
-(void)setFormat:(unsigned long long)arg1 ;
-(void*)dataStart;
-(unsigned long long)bufferSize;
-(void)setMap:(MDLMeshBufferMap *)arg1 ;
-(void)setDataStart:(void*)arg1 ;
-(void)setbufferSize:(unsigned long long)arg1 ;
-(void)setBufferSize:(unsigned long long)arg1 ;
@end

