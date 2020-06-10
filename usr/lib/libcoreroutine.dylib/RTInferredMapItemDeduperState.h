/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSDictionary;

@interface RTInferredMapItemDeduperState : NSObject {

	BOOL _canIngest;
	NSMutableArray* _uniqueInferredMapItems;
	NSMutableDictionary* _intermediateUUIDToInferredMapItemsMap;
	NSDictionary* _intermediateUUIDToInferredMapItemMap;
	NSDictionary* _dedupedUUIDToMapItemMap;

}

@property (assign,nonatomic) BOOL canIngest;                                                           //@synthesize canIngest=_canIngest - In the implementation block
@property (nonatomic,retain) NSMutableArray * uniqueInferredMapItems;                                  //@synthesize uniqueInferredMapItems=_uniqueInferredMapItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * intermediateUUIDToInferredMapItemsMap;              //@synthesize intermediateUUIDToInferredMapItemsMap=_intermediateUUIDToInferredMapItemsMap - In the implementation block
@property (nonatomic,retain) NSDictionary * intermediateUUIDToInferredMapItemMap;                      //@synthesize intermediateUUIDToInferredMapItemMap=_intermediateUUIDToInferredMapItemMap - In the implementation block
@property (nonatomic,retain) NSDictionary * dedupedUUIDToMapItemMap;                                   //@synthesize dedupedUUIDToMapItemMap=_dedupedUUIDToMapItemMap - In the implementation block
-(id)init;
-(void)resetState;
-(id)mapItemForDedupedUUID:(id)arg1 error:(id*)arg2 ;
-(id)allDedupedUUIDsWithError:(id*)arg1 ;
-(BOOL)enumerateDedupedUUIDToMapItemMapUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)allUniqueMapItemsWithError:(id*)arg1 ;
-(id)combinedInferredMapItemFromInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)finalizeState:(id*)arg1 ;
-(id)mapItemForIntermediateUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)ingestInferredMapItemWithIntermediateUUID:(id)arg1 error:(id*)arg2 ;
-(id)inferredMapItemFromInferredMapItemWithIntermediateUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)canIngest;
-(void)setCanIngest:(BOOL)arg1 ;
-(NSMutableArray *)uniqueInferredMapItems;
-(void)setUniqueInferredMapItems:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)intermediateUUIDToInferredMapItemsMap;
-(void)setIntermediateUUIDToInferredMapItemsMap:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)intermediateUUIDToInferredMapItemMap;
-(void)setIntermediateUUIDToInferredMapItemMap:(NSDictionary *)arg1 ;
-(NSDictionary *)dedupedUUIDToMapItemMap;
-(void)setDedupedUUIDToMapItemMap:(NSDictionary *)arg1 ;
@end

