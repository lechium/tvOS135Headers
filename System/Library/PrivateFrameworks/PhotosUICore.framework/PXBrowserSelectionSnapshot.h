/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXBrowserSelectionSnapshot.h>
@class NSArray;


@protocol PXBrowserSelectionSnapshot <NSObject>
@property (nonatomic,readonly) long long estimatedAssetCount; 
@property (nonatomic,readonly) long long assetCount; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) long long estimatedModelObjectsCount; 
@property (nonatomic,readonly) NSArray * modelObjects; 
@required
-(long long)mediaType;
-(long long)assetCount;
-(NSArray *)modelObjects;
-(long long)estimatedAssetCount;
-(id)displayAssetAtIndex:(long long)arg1;
-(id)assetReferenceAtIndex:(long long)arg1;
-(long long)indexOfAssetReference:(id)arg1;
-(long long)estimatedModelObjectsCount;

@end


@class NSArray, NSString;

@interface PXBrowserSelectionSnapshot : NSObject <PXBrowserSelectionSnapshot>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long estimatedAssetCount; 
@property (nonatomic,readonly) long long assetCount; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) long long estimatedModelObjectsCount; 
@property (nonatomic,readonly) NSArray * modelObjects; 
+(id)selectionWithIndexPaths:(id)arg1 dataSource:(id)arg2 ;
-(long long)mediaType;
-(long long)assetCount;
-(NSArray *)modelObjects;
-(long long)estimatedAssetCount;
-(id)displayAssetAtIndex:(long long)arg1 ;
-(id)assetReferenceAtIndex:(long long)arg1 ;
-(long long)indexOfAssetReference:(id)arg1 ;
-(long long)estimatedModelObjectsCount;
@end

