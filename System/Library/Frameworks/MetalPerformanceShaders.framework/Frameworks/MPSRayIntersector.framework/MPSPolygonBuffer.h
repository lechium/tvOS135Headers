/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLBuffer;
@interface MPSPolygonBuffer : NSObject <NSCopying, NSSecureCoding> {

	id<MTLBuffer> _vertexBuffer;
	unsigned long long _vertexBufferOffset;
	id<MTLBuffer> _indexBuffer;
	unsigned long long _indexBufferOffset;
	id<MTLBuffer> _maskBuffer;
	unsigned long long _maskBufferOffset;
	unsigned long long _polygonCount;

}

@property (nonatomic,retain) id<MTLBuffer> vertexBuffer;                         //@synthesize vertexBuffer=_vertexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long vertexBufferOffset;              //@synthesize vertexBufferOffset=_vertexBufferOffset - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> indexBuffer;                          //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long indexBufferOffset;               //@synthesize indexBufferOffset=_indexBufferOffset - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> maskBuffer;                           //@synthesize maskBuffer=_maskBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long maskBufferOffset;                //@synthesize maskBufferOffset=_maskBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long polygonCount;                    //@synthesize polygonCount=_polygonCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)polygonBuffer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)indexBufferOffset;
-(void)setIndexBufferOffset:(unsigned long long)arg1 ;
-(id<MTLBuffer>)indexBuffer;
-(void)setIndexBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)vertexBuffer;
-(void)setVertexBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)vertexBufferOffset;
-(void)setVertexBufferOffset:(unsigned long long)arg1 ;
-(id<MTLBuffer>)maskBuffer;
-(void)setMaskBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)maskBufferOffset;
-(void)setMaskBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)polygonCount;
-(void)setPolygonCount:(unsigned long long)arg1 ;
-(void)validateWithVerticesPerPolygon:(unsigned long long)arg1 vertexStride:(unsigned long long)arg2 indexStride:(unsigned long long)arg3 ;
@end

