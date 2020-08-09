//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTResultsController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSArray, NSFetchRequest, NSPredicate, NSString;
@protocol MTFetchedResultsControllerProtocol;

@interface MTCoreDataResultsController : MTResultsController <NSFetchedResultsControllerDelegate>
{
    NSArray *_propertyKeys;	// 8 = 0x8
    NSFetchRequest *_fetchRequest;	// 16 = 0x10
    id <MTFetchedResultsControllerProtocol> _frc;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000f0d1c
@property(retain, nonatomic) id <MTFetchedResultsControllerProtocol> frc; // @synthesize frc=_frc;
@property(retain, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000001000f0c68
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x00000001000f0c20
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x00000001000f0b68
- (void)_setFrc:(id)arg1;	// IMP=0x00000001000f0ae0
- (void)_initializeFrc;	// IMP=0x00000001000f08bc
- (id)allObjects;	// IMP=0x00000001000f0868
- (unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1;	// IMP=0x00000001000f085c
- (id)indexPathForObject:(id)arg1;	// IMP=0x00000001000f07dc
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00000001000f0678
- (void)reloadData;	// IMP=0x00000001000f0640
@property(retain, nonatomic) NSArray *sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate;
- (void)dealloc;	// IMP=0x00000001000f046c
- (id)initWithFetchRequest:(id)arg1 propertyKeys:(id)arg2;	// IMP=0x00000001000f03b4
- (id)initWithFetchRequest:(id)arg1;	// IMP=0x00000001000f03a4
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertyKeys:(id)arg4;	// IMP=0x00000001000f0298
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x00000001000f021c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
