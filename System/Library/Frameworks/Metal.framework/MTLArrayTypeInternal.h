/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArrayType.h>

@class MTLType;

@interface MTLArrayTypeInternal : MTLArrayType {

	unsigned long long _dataType;
	unsigned _arrayLength : 32;
	unsigned _stride : 32;
	id _details;
	unsigned long long _elementType;
	MTLType* _elementTypeInfo;
	BOOL _isIndirectArgumentBuffer;
	unsigned long long _argumentIndexStride;

}

@property (assign) BOOL isIndirectArgumentBuffer;                                         //@synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long argumentIndexStride;                      //@synthesize argumentIndexStride=_argumentIndexStride - In the implementation block
@property (assign,nonatomic) unsigned long long indirectArgumentIndexStride; 
-(void)dealloc;
-(unsigned long long)arrayLength;
-(unsigned long long)stride;
-(void)setStride:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(BOOL)isIndirectArgumentBuffer;
-(unsigned long long)elementType;
-(id)elementStructType;
-(id)elementArrayType;
-(id)elementTypeDescription;
-(id)elementIndirectArgumentType;
-(unsigned long long)indirectArgumentIndexStride;
-(void)setIsIndirectArgumentBuffer:(BOOL)arg1 ;
-(id)initWithArrayLength:(unsigned long long)arg1 elementType:(unsigned long long)arg2 stride:(unsigned long long)arg3 details:(id)arg4 ;
-(void)setArgumentIndexStride:(unsigned long long)arg1 ;
-(id)elementTextureReferenceType;
-(id)elementPointerType;
-(void)setIndirectArgumentIndexStride:(unsigned long long)arg1 ;
-(unsigned long long)argumentIndexStride;
@end
