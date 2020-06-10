/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreML/CoreML-Structs.h>
@class MLTreeEnsembleClassifier, NSMutableArray, NSMutableOrderedSet;

@interface MLGKDecisionTree : NSObject {

	TreeEnsembleClassifier* _trc;
	MLTreeEnsembleClassifier* _treeClassifier;
	NSMutableArray* __attributes;
	NSMutableOrderedSet* __objectStore;

}

@property (nonatomic,retain) NSMutableArray * _attributes;                    //@synthesize _attributes=__attributes - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * _objectStore;              //@synthesize _objectStore=__objectStore - In the implementation block
-(void)dealloc;
-(id)_init;
-(NSMutableArray *)_attributes;
-(id)_initWithFlattenedTree:(id)arg1 ;
-(BOOL)_saveModelAssetWithModelToPath:(id)arg1 withError:(id)arg2 ;
-(void)_loadModelAssetWithModelAtPath:(id)arg1 withError:(id)arg2 ;
-(id)_makeInferenceFromAnswers:(id)arg1 withError:(id)arg2 ;
-(void)set_attributes:(NSMutableArray *)arg1 ;
-(NSMutableOrderedSet *)_objectStore;
-(void)set_objectStore:(NSMutableOrderedSet *)arg1 ;
@end

