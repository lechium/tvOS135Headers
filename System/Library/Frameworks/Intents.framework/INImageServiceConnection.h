/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INImageLoading.h>
#import <libobjc.A.dylib/INImageStoring.h>

@class NSXPCConnection, NSCache, NSString;

@interface INImageServiceConnection : NSObject <INImageLoading, INImageStoring> {

	NSXPCConnection* _connection;
	NSCache* _localStorageCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
+(id)sharedConnection;
-(id)init;
-(void)dealloc;
-(NSString *)serviceIdentifier;
-(BOOL)canStoreImage:(id)arg1 ;
-(void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)servicePriority;
-(oneway void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_localStorageCache;
-(BOOL)canLoadImageDataForImage:(id)arg1 ;
-(void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(SCD_Struct_IN7)arg3 completion:(/*^block*/id)arg4 ;
-(void)loadImageDataAndSizeForImage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)loadDataImageFromImage:(id)arg1 scaledSize:(SCD_Struct_IN7)arg2 error:(id*)arg3 ;
-(id)synchronousServiceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_availableBundleIdentifiers;
-(id)schemaURLsForBundleIdentifiers:(id)arg1 ;
-(id)imageServiceSchemaURLsForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)availableSchemasWithError:(id*)arg1 ;
-(id)loadSchemasForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)accessBundleContentForBundleIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)fetchShareExtensionIntentForExtensionContextUUID:(id)arg1 ;
@end

