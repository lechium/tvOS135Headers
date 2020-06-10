/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UIView, NSMutableDictionary, NSObject;

@interface UIViewAnimationInfo : NSObject {

	UIView* _owningView;
	/*^block*/id _invalidationBlock;
	NSMutableDictionary* _animatableProperties;
	NSMutableDictionary* _presentationModifiers;
	NSMutableDictionary* _modifierGroupRequestHandlers;
	NSMutableDictionary* _isPartOfHigherOrderProperty;
	NSObject*<OS_dispatch_queue> _lockingQueue;

}

@property (__weak) UIView * owningView;                                                       //@synthesize owningView=_owningView - In the implementation block
@property (nonatomic,copy) id invalidationBlock;                                              //@synthesize invalidationBlock=_invalidationBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * animatableProperties;                      //@synthesize animatableProperties=_animatableProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * presentationModifiers;                     //@synthesize presentationModifiers=_presentationModifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * modifierGroupRequestHandlers;              //@synthesize modifierGroupRequestHandlers=_modifierGroupRequestHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * isPartOfHigherOrderProperty;               //@synthesize isPartOfHigherOrderProperty=_isPartOfHigherOrderProperty - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lockingQueue;                       //@synthesize lockingQueue=_lockingQueue - In the implementation block
-(NSMutableDictionary *)presentationModifiers;
-(void)setPresentationModifiers:(NSMutableDictionary *)arg1 ;
-(id)initWithView:(id)arg1 ;
-(UIView *)owningView;
-(void)setOwningView:(UIView *)arg1 ;
-(void)performWithLock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)isPartOfHigherOrderProperty;
-(id)animatablePropertyForKey:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(BOOL)_canInvalidate;
-(void)setAnimatableProperty:(id)arg1 forKey:(id)arg2 ;
-(void)_invalidateIfPossible;
-(id)animatablePropertyKeys;
-(id)presentationModifierForKey:(id)arg1 ;
-(void)setPresentationModifier:(id)arg1 forKey:(id)arg2 ;
-(id)modifierGroupRequestHandlerForKey:(id)arg1 ;
-(void)setModifierGroupRequestHandler:(id)arg1 forKey:(id)arg2 ;
-(id)invalidationBlock;
-(void)setInvalidationBlock:(id)arg1 ;
-(NSMutableDictionary *)animatableProperties;
-(void)setAnimatableProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)modifierGroupRequestHandlers;
-(void)setModifierGroupRequestHandlers:(NSMutableDictionary *)arg1 ;
-(void)setIsPartOfHigherOrderProperty:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)lockingQueue;
-(void)setLockingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

