/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableIndexSet, NSIndexSet;

@interface _UIRTree : NSObject {

	shared_ptr<_UIRTreeContainerNode>* _root;
	NSRange _allIndexesRange;
	NSMutableIndexSet* _allIndexes;

}

@property (nonatomic,readonly) CGRect boundingFrame; 
@property (nonatomic,readonly) NSIndexSet * allIndexes; 
-(id)description;
-(id)init;
-(CGRect)boundingFrame;
-(void)enumerateFramesWithBlock:(/*^block*/id)arg1 ;
-(id)visualDescription;
-(id)indexesForFramesIntersectingFrame:(CGRect)arg1 ;
-(void)insertFrame:(CGRect)arg1 forIndex:(long long)arg2 ;
-(NSIndexSet *)allIndexes;
-(CGRect)_frameForIndex:(long long)arg1 ;
@end

