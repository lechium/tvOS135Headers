/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@class NSMutableIndexSet, NSIndexSet, NSString;

@interface PXGAnimationDataStore : NSObject <PXGDiagnosticsProvider> {

	unsigned _spriteCapacity;
	unsigned short _groupCapacity;
	unsigned _mappedSpriteCapacity;
	unsigned short _mappedAnimationCapacity;
	NSMutableIndexSet* _activeGroupIndexes;
	unsigned short _mappedAnimationCount;
	unsigned _spriteCount;
	unsigned _mappedSpriteCount;
	SCD_Struct_PX111* _spriteInfos;
	SCD_Struct_PX112* _groupInfos;
	unsigned short* _animationIndexBySpriteIndex;
	unsigned short* _groupIndexByAnimationIndex;

}

@property (assign,nonatomic) unsigned spriteCount;                                       //@synthesize spriteCount=_spriteCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX111* spriteInfos;                            //@synthesize spriteInfos=_spriteInfos - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * activeGroupIndexes; 
@property (nonatomic,readonly) SCD_Struct_PX112* groupInfos;                             //@synthesize groupInfos=_groupInfos - In the implementation block
@property (assign,nonatomic) unsigned mappedSpriteCount;                                 //@synthesize mappedSpriteCount=_mappedSpriteCount - In the implementation block
@property (nonatomic,readonly) unsigned short* animationIndexBySpriteIndex;              //@synthesize animationIndexBySpriteIndex=_animationIndexBySpriteIndex - In the implementation block
@property (assign,nonatomic) unsigned short mappedAnimationCount;                        //@synthesize mappedAnimationCount=_mappedAnimationCount - In the implementation block
@property (nonatomic,readonly) unsigned short* groupIndexByAnimationIndex;               //@synthesize groupIndexByAnimationIndex=_groupIndexByAnimationIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)diagnosticDescription;
-(SCD_Struct_PX111*)spriteInfos;
-(unsigned)spriteCount;
-(void)setSpriteCount:(unsigned)arg1 ;
-(void)applySpriteChangeDetails:(id)arg1 ;
-(id)spriteIndexesExpiringAtTime:(double)arg1 ;
-(NSIndexSet *)activeGroupIndexes;
-(unsigned short)checkOutGroup;
-(void)_resizeStorageToGroupIndex:(unsigned short)arg1 ;
-(void)checkInGroupAtIndexes:(id)arg1 ;
-(void)setMappedSpriteCount:(unsigned)arg1 ;
-(void)increaseMappedSpriteCountBy:(unsigned)arg1 usingAnimationIndex:(unsigned short)arg2 ;
-(void)setMappedAnimationCount:(unsigned short)arg1 ;
-(SCD_Struct_PX112*)groupInfos;
-(unsigned)mappedSpriteCount;
-(unsigned short*)animationIndexBySpriteIndex;
-(unsigned short)mappedAnimationCount;
-(unsigned short*)groupIndexByAnimationIndex;
@end

