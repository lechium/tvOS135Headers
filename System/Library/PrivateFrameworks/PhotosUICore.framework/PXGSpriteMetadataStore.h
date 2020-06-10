/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableIndexSet;

@interface PXGSpriteMetadataStore : NSObject {

	unsigned short _resizableCapInsetsCapacity;
	SCD_Struct_PX74* _resizableCapInsets;
	unsigned short _effectsCapacity;
	SCD_Struct_PX48* _effectData;
	int* _effectShaderFlags;
	NSMutableIndexSet* _reusableEffectIds;
	unsigned short _numberOfResizableCapInsets;
	unsigned short _numberOfEffects;

}

@property (nonatomic,readonly) unsigned short numberOfResizableCapInsets;              //@synthesize numberOfResizableCapInsets=_numberOfResizableCapInsets - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_PX74* resizableCapInsets;              //@synthesize resizableCapInsets=_resizableCapInsets - In the implementation block
@property (nonatomic,readonly) unsigned short numberOfEffects;                         //@synthesize numberOfEffects=_numberOfEffects - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_PX48* effectData;                      //@synthesize effectData=_effectData - In the implementation block
@property (nonatomic,readonly) const int* effectShaderFlags;                           //@synthesize effectShaderFlags=_effectShaderFlags - In the implementation block
-(id)init;
-(void)dealloc;
-(const SCD_Struct_PX48*)effectData;
-(unsigned short)addResizableCapInsets:(SCD_Struct_PX74)arg1 ;
-(unsigned short)_indexOfResizableCapInsets:(SCD_Struct_PX74)arg1 ;
-(unsigned short)addEffectWithShaderFlags:(int)arg1 ;
-(void)removeEffectWithId:(unsigned short)arg1 ;
-(SCD_Struct_PX48*)dataForEffectId:(unsigned short)arg1 ;
-(unsigned short)numberOfResizableCapInsets;
-(const SCD_Struct_PX74*)resizableCapInsets;
-(unsigned short)numberOfEffects;
-(const int*)effectShaderFlags;
@end

