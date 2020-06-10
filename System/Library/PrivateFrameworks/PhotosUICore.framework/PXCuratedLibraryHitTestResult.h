/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGHitTestResult.h>

@class PXAssetReference, PXAssetCollectionReference;

@interface PXCuratedLibraryHitTestResult : PXGHitTestResult {

	long long _control;
	PXAssetReference* _assetReference;
	PXAssetCollectionReference* _assetCollectionReference;

}

@property (nonatomic,readonly) long long control;                                                  //@synthesize control=_control - In the implementation block
@property (nonatomic,readonly) PXAssetReference * assetReference;                                  //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
-(long long)control;
-(PXAssetReference *)assetReference;
-(PXAssetCollectionReference *)assetCollectionReference;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 ;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4 ;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetCollectionReference:(id)arg4 ;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4 assetCollectionReference:(id)arg5 ;
-(id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4 ;
@end

