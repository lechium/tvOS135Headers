/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLStructMember.h>

@class NSString, MTLType;

@interface MTLStructMemberInternal : MTLStructMember {

	NSString* _name;
	unsigned long long _offset;
	unsigned _dataType : 16;
	id _details;
	unsigned long long _argumentIndex;
	unsigned long long _render_target;
	unsigned long long _raster_order_group;
	MTLType* _typeInfo;

}

@property (readonly) unsigned long long render_target;                   //@synthesize render_target=_render_target - In the implementation block
@property (readonly) unsigned long long raster_order_group;              //@synthesize raster_order_group=_raster_order_group - In the implementation block
-(id)name;
-(void)dealloc;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(id)structType;
-(id)arrayType;
-(unsigned long long)indirectArgumentIndex;
-(id)dataTypeDescription;
-(id)indirectArgumentType;
-(unsigned long long)render_target;
-(unsigned long long)raster_order_group;
-(id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 indirectArgumentIndex:(unsigned long long)arg4 render_target:(unsigned long long)arg5 raster_order_group:(unsigned long long)arg6 details:(id)arg7 ;
-(unsigned long long)argumentIndex;
-(id)textureReferenceType;
-(id)pointerType;
@end
