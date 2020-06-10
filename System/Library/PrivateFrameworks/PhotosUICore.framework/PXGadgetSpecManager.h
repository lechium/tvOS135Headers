/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXMutableGadgetSpecManager.h>

@class PXGadgetSpec, PXExtendedTraitCollection, NSMutableSet, NSString;

@interface PXGadgetSpecManager : PXObservable <PXChangeObserver, PXMutableGadgetSpecManager> {

	PXGadgetSpec* _currentGadgetSpec;
	Class _gadgetSpecClass;
	long long _scrollAxis;
	PXExtendedTraitCollection* _traitCollection;
	NSMutableSet* _updatedGadgets;

}

@property (nonatomic,retain) PXGadgetSpec * currentGadgetSpec;                         //@synthesize currentGadgetSpec=_currentGadgetSpec - In the implementation block
@property (nonatomic,readonly) Class gadgetSpecClass;                                  //@synthesize gadgetSpecClass=_gadgetSpecClass - In the implementation block
@property (nonatomic,readonly) long long scrollAxis;                                   //@synthesize scrollAxis=_scrollAxis - In the implementation block
@property (nonatomic,retain) PXExtendedTraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedGadgets;                            //@synthesize updatedGadgets=_updatedGadgets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXExtendedTraitCollection *)traitCollection;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setTraitCollection:(PXExtendedTraitCollection *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXGadgetSpec *)currentGadgetSpec;
-(void)setCurrentGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)initWithGadgetSpecClass:(Class)arg1 scrollAxis:(long long)arg2 traitCollection:(id)arg3 ;
-(void)updateGadgetsToSpecIfNeeded:(id)arg1 ;
-(void)_extendedTraitCollection:(id)arg1 didChange:(unsigned long long)arg2 ;
-(id)mutableChangeObject;
-(Class)gadgetSpecClass;
-(long long)scrollAxis;
-(NSMutableSet *)updatedGadgets;
-(void)setUpdatedGadgets:(NSMutableSet *)arg1 ;
@end
