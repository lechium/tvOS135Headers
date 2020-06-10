/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSRecursiveLock, MPLayerGroup, NSLock, NSUndoManager, NSURL;

@interface MPDocumentInternal : NSObject {

	NSString* uuid;
	NSString* lastRandomTransition;
	NSMutableDictionary* orderedRandomTransitions;
	NSRecursiveLock* propertiesLock;
	MPLayerGroup* documentLayerGroup;
	BOOL savesPathsAsAbsolute;
	BOOL assetLogging;
	NSMutableDictionary* cachedAbsolutePaths;
	NSMutableDictionary* cachedAbsoluteStillPaths;
	NSLock* cachedPathLock;
	NSUndoManager* undoManager;
	NSURL* fileURL;
	long long batchModifyCount;
	BOOL isInBatchModify;
	BOOL needsActionConfigure;
	NSMutableDictionary* cachedActionableLayers;
	BOOL cacheAbsolutePathOverride;
	BOOL alwaysLookupAbsolutePaths;

}

@property (nonatomic,retain) NSString * lastRandomTransition; 
@property (nonatomic,retain) NSMutableDictionary * orderedRandomTransitions; 
@property (nonatomic,retain) NSRecursiveLock * propertiesLock; 
@property (nonatomic,retain) MPLayerGroup * documentLayerGroup; 
@property (assign,nonatomic) BOOL savesPathsAsAbsolute; 
@property (assign,nonatomic) BOOL assetLogging; 
@property (nonatomic,retain) NSMutableDictionary * cachedAbsolutePaths; 
@property (nonatomic,retain) NSMutableDictionary * cachedAbsoluteStillPaths; 
@property (nonatomic,retain) NSLock * cachedPathLock; 
@property (nonatomic,retain) NSUndoManager * undoManager; 
@property (assign,nonatomic) long long batchModifyCount; 
@property (assign,nonatomic) BOOL isInBatchModify; 
@property (assign,nonatomic) BOOL needsActionConfigure; 
@property (nonatomic,retain) NSMutableDictionary * cachedActionableLayers; 
@property (nonatomic,retain) NSURL * fileURL; 
@property (nonatomic,copy) NSString * uuid; 
@property (assign,nonatomic) BOOL cacheAbsolutePathOverride; 
@property (assign,nonatomic) BOOL alwaysLookupAbsolutePaths; 
-(void)dealloc;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)uuid;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)undoManager;
-(void)setUuid:(NSString *)arg1 ;
-(MPLayerGroup *)documentLayerGroup;
-(void)setDocumentLayerGroup:(MPLayerGroup *)arg1 ;
-(NSString *)lastRandomTransition;
-(void)setLastRandomTransition:(NSString *)arg1 ;
-(NSMutableDictionary *)orderedRandomTransitions;
-(void)setOrderedRandomTransitions:(NSMutableDictionary *)arg1 ;
-(NSRecursiveLock *)propertiesLock;
-(void)setPropertiesLock:(NSRecursiveLock *)arg1 ;
-(BOOL)savesPathsAsAbsolute;
-(void)setSavesPathsAsAbsolute:(BOOL)arg1 ;
-(BOOL)assetLogging;
-(void)setAssetLogging:(BOOL)arg1 ;
-(NSMutableDictionary *)cachedAbsolutePaths;
-(void)setCachedAbsolutePaths:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedAbsoluteStillPaths;
-(void)setCachedAbsoluteStillPaths:(NSMutableDictionary *)arg1 ;
-(NSLock *)cachedPathLock;
-(void)setCachedPathLock:(NSLock *)arg1 ;
-(long long)batchModifyCount;
-(void)setBatchModifyCount:(long long)arg1 ;
-(BOOL)needsActionConfigure;
-(void)setNeedsActionConfigure:(BOOL)arg1 ;
-(BOOL)isInBatchModify;
-(void)setIsInBatchModify:(BOOL)arg1 ;
-(NSMutableDictionary *)cachedActionableLayers;
-(void)setCachedActionableLayers:(NSMutableDictionary *)arg1 ;
-(BOOL)cacheAbsolutePathOverride;
-(void)setCacheAbsolutePathOverride:(BOOL)arg1 ;
-(BOOL)alwaysLookupAbsolutePaths;
-(void)setAlwaysLookupAbsolutePaths:(BOOL)arg1 ;
@end

