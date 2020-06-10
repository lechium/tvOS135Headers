/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MDLMatrix4x4Array : NSObject <NSCopying> {

	VtValue* _data;
	unsigned long long _elementCount;

}

@property (nonatomic,readonly) unsigned long long elementCount;              //@synthesize elementCount=_elementCount - In the implementation block
@property (nonatomic,readonly) unsigned long long precision; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(unsigned long long)precision;
-(id)initWithElementCount:(unsigned long long)arg1 ;
-(unsigned long long)elementCount;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 time:(double)arg2 ;
-(VtValue*)defaultVtValue;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 ;
-(void)setFloat4x4Array:(const SCD_Struct_MD1*)arg1 count:(unsigned long long)arg2 ;
-(void)setDouble4x4Array:(const SCD_Struct_MD1*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getFloat4x4Array:(SCD_Struct_MD1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDouble4x4Array:(SCD_Struct_MD1*)arg1 maxCount:(unsigned long long)arg2 ;
@end

