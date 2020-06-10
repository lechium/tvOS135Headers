/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet, NSArray;

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory {

	NSSet* _personNodes;
	NSArray* _facedAssets;

}

@property (nonatomic,readonly) NSSet * personNodes;              //@synthesize personNodes=_personNodes - In the implementation block
@property (nonatomic,retain) NSArray * facedAssets;              //@synthesize facedAssets=_facedAssets - In the implementation block
-(NSSet *)personNodes;
-(NSArray *)facedAssets;
-(void)setFacedAssets:(NSArray *)arg1 ;
-(id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 ;
@end

