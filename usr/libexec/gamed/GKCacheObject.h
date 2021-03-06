//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface GKCacheObject : NSManagedObject
{
}

+ (id)attributesDescriptionsForAttributesWithKeys:(id)arg1;	// IMP=0x0000000100042ad4
+ (id)uniqueObjectIDLookupWithContext:(id)arg1;	// IMP=0x0000000100042968
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x0000000100042888
+ (id)uniqueAttributeName;	// IMP=0x00000001000427a8
+ (void)deleteObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x00000001000424e4
+ (id)firstObjectMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100042230
+ (unsigned long long)countObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100041fb8
+ (id)objectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100041d40
+ (id)allObjectsInContext:(id)arg1;	// IMP=0x0000000100041d2c
+ (id)fetchSortDescriptors;	// IMP=0x0000000100041d24
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x0000000100041d1c
+ (id)fetchRequestForContext:(id)arg1;	// IMP=0x0000000100041b60
+ (id)entityInManagedObjectContext:(id)arg1;	// IMP=0x000000010004175c
+ (id)entityName;	// IMP=0x0000000100041684
- (void)invalidate;	// IMP=0x00000001000427a4
- (_Bool)isValid;	// IMP=0x000000010004279c
- (id)initWithManagedObjectContext:(id)arg1;	// IMP=0x000000010004193c
- (id)internalRepresentation;	// IMP=0x000000010004167c
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x000000010004156c
- (_Bool)hasImages;	// IMP=0x0000000100043b88
- (void)clearImages;	// IMP=0x00000001000438e0
- (void)deleteCachedImage:(id)arg1;	// IMP=0x00000001000435bc
- (id)imageURLDictionary;	// IMP=0x00000001000431dc
- (id)updateImagesWithImageURLs:(id)arg1;	// IMP=0x0000000100042dcc
- (id)imageCacheKeyPathsByKey;	// IMP=0x0000000100042b9c

@end

