/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAMutableFloatArray;

@interface PHAAssetFingerprint : NSObject {

	PHAMutableFloatArray* _floatArray;

}

@property (nonatomic,copy,readonly) PHAMutableFloatArray * floatArray;              //@synthesize floatArray=_floatArray - In the implementation block
+(long long)versionForVersionName:(id)arg1 ;
+(id)versionNameForVersion:(long long)arg1 ;
+(id)_fingerprintWithSceneprint:(id)arg1 ;
+(id)_fingerprintsWithSceneprints:(id)arg1 ;
+(id)_fingerprintsWithVersion256OfAssets:(id)arg1 error:(id*)arg2 ;
+(id)_fingerprintsWithVersion2048OfAssets:(id)arg1 error:(id*)arg2 ;
+(id)fingerprintsWithVersion:(long long)arg1 forAssets:(id)arg2 error:(id*)arg3 ;
+(id)fingerprintWithVersion:(long long)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFloatArray:(id)arg1 ;
-(PHAMutableFloatArray *)floatArray;
@end

