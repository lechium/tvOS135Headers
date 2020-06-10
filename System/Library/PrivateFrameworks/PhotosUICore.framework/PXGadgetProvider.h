/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXMutableGadgetProvider.h>
#import <libobjc.A.dylib/PXGadgetDelegate.h>

@protocol PXGadgetProviderDelegate, PXGadgetDelegate;
@class PXGadgetNavigationHelper, NSArray, NSString;

@interface PXGadgetProvider : NSObject <PXMutableGadgetProvider, PXGadgetDelegate> {

	BOOL _isPerformingChanges;
	BOOL _invalidGadgets;
	id<PXGadgetProviderDelegate> _delegate;
	id<PXGadgetDelegate> _nextGadgetResponder;
	NSArray* _gadgets;

}

@property (copy) NSArray * gadgets;                                                          //@synthesize gadgets=_gadgets - In the implementation block
@property (assign,nonatomic) BOOL isPerformingChanges;                                       //@synthesize isPerformingChanges=_isPerformingChanges - In the implementation block
@property (assign,nonatomic) BOOL invalidGadgets;                                            //@synthesize invalidGadgets=_invalidGadgets - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetProviderDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder;                //@synthesize nextGadgetResponder=_nextGadgetResponder - In the implementation block
@property (nonatomic,readonly) BOOL supportsDynamicRanking; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
-(id)init;
-(id<PXGadgetProviderDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetProviderDelegate>)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)gadgetViewControllerHostingGadget:(id)arg1 ;
-(void)gadget:(id)arg1 animateChanges:(/*^block*/id)arg2 ;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(id<PXGadgetDelegate>)nextGadgetResponder;
-(void)setNextGadgetResponder:(id<PXGadgetDelegate>)arg1 ;
-(BOOL)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id<PXGadgetTransition>)gadgetTransition;
-(PXGadgetNavigationHelper *)rootNavigationHelper;
-(void)addGadgets:(id)arg1 ;
-(void)insertGadgets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeGadgets:(id)arg1 ;
-(void)removeGadgetsAtIndexes:(id)arg1 ;
-(void)removeAllGadgets;
-(BOOL)supportsDynamicRanking;
-(void)loadDataForPriority;
-(void)loadDataForGadgets;
-(void)startLoadingRemainingData;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(void)_updateIfNeeded;
-(NSArray *)gadgets;
-(void)setGadgets:(NSArray *)arg1 ;
-(BOOL)isPerformingChanges;
-(void)setIsPerformingChanges:(BOOL)arg1 ;
-(BOOL)invalidGadgets;
-(void)setInvalidGadgets:(BOOL)arg1 ;
@end
