/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray, NSURL, AVAsset;

@interface MBAssetLoaderOperation : NSOperation {

	BOOL finished;
	BOOL executing;
	NSArray* _prefetchKeys;
	NSURL* _identifierURL;
	AVAsset* _asset;
	/*^block*/id _preCompletionBlock;

}

@property (getter=isFinished) BOOL finished; 
@property (getter=isExecuting) BOOL executing; 
@property (nonatomic,retain) NSURL * identifierURL;               //@synthesize identifierURL=_identifierURL - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                     //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSArray * prefetchKeys;              //@synthesize prefetchKeys=_prefetchKeys - In the implementation block
@property (nonatomic,copy) id preCompletionBlock;                 //@synthesize preCompletionBlock=_preCompletionBlock - In the implementation block
-(void)start;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)finish;
-(AVAsset *)asset;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setAsset:(AVAsset *)arg1 ;
-(NSURL *)identifierURL;
-(void)setIdentifierURL:(NSURL *)arg1 ;
-(id)initWithIdentifierURL:(id)arg1 ;
-(id)preCompletionBlock;
-(void)setPrefetchKeys:(NSArray *)arg1 ;
-(NSArray *)prefetchKeys;
-(void)setPreCompletionBlock:(id)arg1 ;
@end

