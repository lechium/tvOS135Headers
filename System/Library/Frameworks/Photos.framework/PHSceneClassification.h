/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PHSceneClassification : NSObject {

	unsigned _sceneIdentifier;
	double _confidence;

}

@property (nonatomic,readonly) unsigned sceneIdentifier;              //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,readonly) double confidence;                     //@synthesize confidence=_confidence - In the implementation block
+(id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(double)confidence;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned)sceneIdentifier;
-(id)initWithSceneIdentifier:(unsigned)arg1 confidence:(double)arg2 ;
-(BOOL)isEqualToSceneClassification:(id)arg1 ;
@end

