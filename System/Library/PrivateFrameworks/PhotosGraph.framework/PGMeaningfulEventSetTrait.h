/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@class NSSet;

@interface PGMeaningfulEventSetTrait : PGMeaningfulEventTrait {

	NSSet* _nodes;
	NSSet* _negativeNodes;
	/*^block*/id _additionalMatchingBlock;

}

@property (nonatomic,readonly) NSSet * nodes;                       //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSSet * negativeNodes;               //@synthesize negativeNodes=_negativeNodes - In the implementation block
@property (nonatomic,copy) id additionalMatchingBlock;              //@synthesize additionalMatchingBlock=_additionalMatchingBlock - In the implementation block
-(BOOL)isActive;
-(NSSet *)nodes;
-(id)initWithNodes:(id)arg1 ;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
-(id)initWithNodes:(id)arg1 negativeNodes:(id)arg2 ;
-(NSSet *)negativeNodes;
-(id)additionalMatchingBlock;
-(void)setAdditionalMatchingBlock:(id)arg1 ;
@end

