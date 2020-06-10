/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _NSItemProviderLoading, NSItemProviderDataTransferDelegate;
@class NSMutableDictionary, NSMutableOrderedSet, NSArray, NSUUID, NSString, NSDictionary, NSData;

@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying> {

	/*^block*/id _previewImageHandler;
	NSMutableDictionary* _metadata;
	id<_NSItemProviderLoading> _loadOperator;
	NSMutableDictionary* _representationByType;
	NSMutableOrderedSet* _typeOrder;
	NSArray* _representations;
	NSMutableDictionary* _preferredRepresentationByType;
	NSUUID* _UUID;
	NSString* _suggestedName;
	NSString* _sanitizedSuggestedName;
	NSDictionary* _userInfo;
	id<NSItemProviderDataTransferDelegate> _dataTransferDelegate;

}

@property (nonatomic,copy) NSData * teamData; 
@property (assign,nonatomic) CGSize preferredPresentationSize; 
@property (assign,nonatomic) long long preferredPresentationStyle; 
@property (copy) id previewImageHandler; 
@property (nonatomic,retain) NSMutableDictionary * _representationByType;                       //@synthesize representationByType=_representationByType - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * _typeOrder;                                  //@synthesize typeOrder=_typeOrder - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _preferredRepresentationByType;              //@synthesize preferredRepresentationByType=_preferredRepresentationByType - In the implementation block
@property (retain) id<_NSItemProviderLoading> _loadOperator;                                    //@synthesize loadOperator=_loadOperator - In the implementation block
@property (copy) NSDictionary * userInfo;                                                       //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) NSArray * _representations;                                                //@synthesize representations=_representations - In the implementation block
@property (readonly) NSUUID * _UUID;                                                            //@synthesize UUID=_UUID - In the implementation block
@property (__weak) id<NSItemProviderDataTransferDelegate> dataTransferDelegate;                 //@synthesize dataTransferDelegate=_dataTransferDelegate - In the implementation block
@property (copy,readonly) NSString * _sanitizedSuggestedName;                                   //@synthesize sanitizedSuggestedName=_sanitizedSuggestedName - In the implementation block
@property (copy,readonly) NSArray * registeredTypeIdentifiers; 
@property (copy) NSString * suggestedName;                                                      //@synthesize suggestedName=_suggestedName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTeamData:(NSData *)arg1 ;
-(NSData *)teamData;
-(CGSize)preferredPresentationSize;
-(void)setPreferredPresentationSize:(CGSize)arg1 ;
-(long long)preferredPresentationStyle;
-(void)setPreferredPresentationStyle:(long long)arg1 ;
-(Class)_highestFidelityClassForLoading:(id)arg1 ;
-(id)_loadObjectOfClass:(Class)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_addFileURLRepresentationIfPossible;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(id)initWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(NSUUID *)_UUID;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)set_loadOperator:(id<_NSItemProviderLoading>)arg1 ;
-(NSArray *)registeredTypeIdentifiers;
-(void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<_NSItemProviderLoading>)_loadOperator;
-(void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_commonInitGenerateUUID:(BOOL)arg1 ;
-(NSMutableOrderedSet *)_typeOrder;
-(id)_availableTypes;
-(id)_representationConformingToType:(id)arg1 ;
-(void)_setItemRepresentation:(id)arg1 ;
-(void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 visibility:(long long)arg3 loader:(/*^block*/id)arg4 ;
-(void)_addRepresentationType_v2:(id)arg1 preferredRepresentation:(long long)arg2 loader:(/*^block*/id)arg3 ;
-(id)_representationForType:(id)arg1 ;
-(NSMutableDictionary *)_representationByType;
-(id)_availableTypesWithFilterBlock:(/*^block*/id)arg1 ;
-(id)registeredTypeIdentifiersWithFileOptions:(long long)arg1 ;
-(BOOL)_hasRepresentationConformingToType:(id)arg1 ;
-(id<NSItemProviderDataTransferDelegate>)dataTransferDelegate;
-(NSString *)_sanitizedSuggestedName;
-(void)registerObject:(id)arg1 visibility:(long long)arg2 ;
-(BOOL)_hasRepresentationOfType:(id)arg1 ;
-(void)registerDataRepresentationForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(/*^block*/id)arg3 ;
-(void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 visibility:(long long)arg3 loadHandler:(/*^block*/id)arg4 ;
-(id)_loadObjectOfClass:(Class)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasRepresentationConformingToTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 ;
-(void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(BOOL)hasItemConformingToTypeIdentifier:(id)arg1 ;
-(void)_loadItemOfClass:(Class)arg1 withLoadHandler:(/*^block*/id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setPreviewImageHandler:(id)arg1 ;
-(void)set_representationByType:(NSMutableDictionary *)arg1 ;
-(void)set_typeOrder:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)_preferredRepresentationByType;
-(void)set_preferredRepresentationByType:(NSMutableDictionary *)arg1 ;
-(void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(/*^block*/id)arg3 ;
-(id)representations;
-(id)_metadataValueForKey:(id)arg1 ;
-(void)_setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)suggestedName;
-(void)setSuggestedName:(NSString *)arg1 ;
-(id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerObjectOfClass:(Class)arg1 visibility:(long long)arg2 loadHandler:(/*^block*/id)arg3 ;
-(BOOL)canLoadObjectOfClass:(Class)arg1 ;
-(id)loadObjectOfClass:(Class)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithItem:(id)arg1 typeIdentifier:(id)arg2 ;
-(NSArray *)_representations;
-(void)setDataTransferDelegate:(id<NSItemProviderDataTransferDelegate>)arg1 ;
-(id)previewImageHandler;
-(void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

