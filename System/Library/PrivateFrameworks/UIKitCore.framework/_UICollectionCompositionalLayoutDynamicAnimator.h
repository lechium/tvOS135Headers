/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDynamicAnimator.h>

@class NSMutableDictionary, NSArray, NSSet;

@interface _UICollectionCompositionalLayoutDynamicAnimator : UIDynamicAnimator {

	/*^block*/id _invalidationHandler;
	NSMutableDictionary* _itemBehaviors;

}

@property (nonatomic,readonly) NSArray * visibleItems; 
@property (nonatomic,readonly) NSArray * visibleItemBehaviors; 
@property (nonatomic,readonly) NSSet * visibleItemIdentifiers; 
-(BOOL)_animatorStep:(double)arg1 ;
-(NSArray *)visibleItems;
-(id)behaviorForIdentifier:(id)arg1 ;
-(void)addItemBehavior:(id)arg1 ;
-(NSSet *)visibleItemIdentifiers;
-(void)removeItemBehaviorForIdentifier:(id)arg1 ;
-(NSArray *)visibleItemBehaviors;
-(void)updateAllItemsFromCurrentState;
-(id)initWithReferenceSystem:(id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
@end

