//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTFetchedResultsControllerProtocol-Protocol.h"
#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSArray, NSFetchRequest, NSFetchedResultsController, NSManagedObjectContext, NSMutableArray, NSMutableDictionary, NSString;
@protocol NSFetchedResultsControllerDelegate;

@interface MTFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate, MTFetchedResultsControllerProtocol>
{
    NSFetchedResultsController *_frc;	// 8 = 0x8
    NSMutableDictionary *_propertyCache;	// 16 = 0x10
    NSMutableArray *_changes;	// 24 = 0x18
    NSArray *_propertyKeys;	// 32 = 0x20
    id <NSFetchedResultsControllerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001d8e4
@property(nonatomic) __weak id <NSFetchedResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
- (_Bool)_hasManagedObjectChanged:(id)arg1;	// IMP=0x000000010001d7ec
- (void)_removeObjectFromCacheWithId:(id)arg1;	// IMP=0x000000010001d7dc
- (void)_updateCacheWithManagedObject:(id)arg1;	// IMP=0x000000010001d73c
- (id)_dictionaryFromCacheForObjectID:(id)arg1;	// IMP=0x000000010001d72c
- (id)_dictionaryForObject:(id)arg1;	// IMP=0x000000010001d6a8
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010001d358
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x000000010001d278
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010001cfd4
- (_Bool)performFetch:(id *)arg1;	// IMP=0x000000010001ce0c
- (id)indexPathForObject:(id)arg1;	// IMP=0x000000010001cdfc
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x000000010001cdec
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property(readonly, nonatomic) NSArray *fetchedObjects;
@property(readonly, nonatomic) NSFetchRequest *fetchRequest;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;	// IMP=0x000000010001cc60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

