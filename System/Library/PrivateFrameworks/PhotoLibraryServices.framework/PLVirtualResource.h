/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLWriteableResource.h>
#import <libobjc.A.dylib/PLValidatesResourceModel.h>

@protocol PLAssetID, PLResourceDataStore, PLResourceDataStoreKey, PLCodecIdentity, PLUniformTypeIdentifierIdentity;
@class NSDate, PLVirtualResourceUniformTypeIdentifierProxy, NSURL, NSString;

@interface PLVirtualResource : NSObject <PLWriteableResource, PLValidatesResourceModel> {

	short _localAvailabilityTarget;
	short _remoteAvailability;
	short _remoteAvailabilityTarget;
	short _trashedState;
	unsigned _version;
	unsigned _resourceType;
	unsigned _recipeID;
	unsigned _orientation;
	int _qualitySortValue;
	float _scale;
	id<PLAssetID> _assetID;
	id<PLResourceDataStore> _dataStore;
	long long _dataStoreSubtype;
	id<PLResourceDataStoreKey> _dataStoreKey;
	long long _unorientedWidth;
	long long _unorientedHeight;
	id<PLCodecIdentity> _codecID;
	id<PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
	NSDate* _trashedDate;

}

@property (nonatomic,readonly) PLVirtualResourceUniformTypeIdentifierProxy * uniformTypeIdentifier; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned resourceType; 
@property (nonatomic,readonly) unsigned version; 
@property (nonatomic,readonly) unsigned recipeID; 
@property (nonatomic,readonly) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID; 
@property (nonatomic,readonly) unsigned orientation; 
@property (nonatomic,readonly) long long unorientedWidth; 
@property (nonatomic,readonly) long long unorientedHeight; 
@property (nonatomic,readonly) long long orientedWidth; 
@property (nonatomic,readonly) long long orientedHeight; 
@property (nonatomic,readonly) float scale; 
@property (nonatomic,copy,readonly) id<PLAssetID> assetID;                                                       //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) id<PLResourceDataStore> dataStore; 
@property (nonatomic,readonly) long long dataStoreSubtype; 
@property (nonatomic,readonly) id<PLResourceDataStoreKey> dataStoreKey; 
@property (nonatomic,readonly) short localAvailability; 
@property (nonatomic,readonly) short localAvailabilityTarget;                                                    //@synthesize localAvailabilityTarget=_localAvailabilityTarget - In the implementation block
@property (nonatomic,readonly) short remoteAvailability; 
@property (nonatomic,readonly) short remoteAvailabilityTarget;                                                   //@synthesize remoteAvailabilityTarget=_remoteAvailabilityTarget - In the implementation block
@property (nonatomic,readonly) int qualitySortValue; 
@property (nonatomic,readonly) id<PLCodecIdentity> codecID; 
@property (nonatomic,readonly) long long dataLength; 
@property (nonatomic,readonly) long long estimatedDataLength; 
@property (nonatomic,readonly) short trashedState;                                                               //@synthesize trashedState=_trashedState - In the implementation block
@property (nonatomic,readonly) NSDate * trashedDate;                                                             //@synthesize trashedDate=_trashedDate - In the implementation block
-(NSString *)debugDescription;
-(NSURL *)fileURL;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(float)scale;
-(unsigned)orientation;
-(void)setScale:(float)arg1 ;
-(void)setOrientation:(unsigned)arg1 ;
-(unsigned)resourceType;
-(void)setResourceType:(unsigned)arg1 ;
-(long long)estimatedDataLength;
-(long long)dataLength;
-(unsigned long long)cplType;
-(short)trashedState;
-(unsigned)recipeID;
-(void)setRecipeID:(unsigned)arg1 ;
-(short)localAvailability;
-(BOOL)isDerivative;
-(long long)unorientedHeight;
-(long long)unorientedWidth;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(id<PLAssetID>)assetID;
-(PLVirtualResourceUniformTypeIdentifierProxy *)uniformTypeIdentifier;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(id<PLResourceDataStore>)dataStore;
-(NSDate *)trashedDate;
-(void)setRemoteAvailability:(short)arg1 ;
-(short)remoteAvailability;
-(void)setUnorientedHeight:(long long)arg1 ;
-(void)setUnorientedWidth:(long long)arg1 ;
-(void)setQualitySortValue:(int)arg1 ;
-(int)qualitySortValue;
-(id<PLCodecIdentity>)codecID;
-(void)setDataStoreSubtype:(long long)arg1 ;
-(void)setUniformTypeIdentifierID:(id<PLUniformTypeIdentifierIdentity>)arg1 ;
-(void)setDataStore:(id<PLResourceDataStore>)arg1 ;
-(void)setDataStoreKey:(id<PLResourceDataStoreKey>)arg1 ;
-(void)setCodecID:(id<PLCodecIdentity>)arg1 ;
-(id)initWithRecipe:(id)arg1 forAsset:(id)arg2 ;
-(short)localAvailabilityTarget;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(BOOL)isDefaultOrientation;
-(BOOL)isPlayableVideo;
-(long long)orientedWidth;
-(long long)orientedHeight;
-(long long)dataStoreSubtype;
-(short)remoteAvailabilityTarget;
-(id)photosCTLJSONDict;
-(id)initWithAsset:(id)arg1 resourceType:(unsigned)arg2 version:(unsigned)arg3 recipeID:(unsigned)arg4 ;
@end

