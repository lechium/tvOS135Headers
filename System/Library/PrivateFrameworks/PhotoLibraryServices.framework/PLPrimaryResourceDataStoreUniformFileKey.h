/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>
#import <libobjc.A.dylib/PLChooserKeyProperties.h>

@interface PLPrimaryResourceDataStoreUniformFileKey : PLPrimaryResourceDataStoreKey <PLChooserKeyProperties> {

	PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 _keyStruct;

}

@property (assign,nonatomic) PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 keyStruct;              //@synthesize keyStruct=_keyStruct - In the implementation block
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
-(unsigned)resourceType;
-(id)keyData;
-(unsigned)resourceVersion;
-(BOOL)isDerivative;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(unsigned)recipeIDForAssetID:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 resourceVersion:(unsigned)arg2 resourceType:(unsigned)arg3 recipeID:(unsigned)arg4 ;
-(PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1)keyStruct;
-(void)setKeyStruct:(PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1)arg1 ;
@end

