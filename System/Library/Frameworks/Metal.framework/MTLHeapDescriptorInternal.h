/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLHeapDescriptor.h>

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {

	MTLHeapDescriptorPrivate* _private;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(unsigned long long)size;
-(unsigned long long)storageMode;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)resourceOptions;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setResourceOptions:(unsigned long long)arg1 ;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(void)setHazardTrackingMode:(unsigned long long)arg1 ;
-(const MTLHeapDescriptorPrivate*)descriptorPrivate;
-(BOOL)validateWithDevice:(id)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
@end

