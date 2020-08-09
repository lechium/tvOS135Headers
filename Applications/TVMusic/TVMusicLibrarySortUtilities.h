//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVMusicLibrarySortUtilities : NSObject
{
}

+ (void)showSortMenuForLibraryRequest:(id)arg1 inViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009d7ac
+ (id)_alertActionForSortType:(long long)arg1 inCategory:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010009d5c0
+ (id)_titleForSortType:(long long)arg1;	// IMP=0x000000010009d4c8
+ (id)sortButton;	// IMP=0x000000010009d414
+ (id)_sortDescriptorsForSortType:(long long)arg1;	// IMP=0x000000010009ccec
+ (id)sortDescriptorsForRequest:(id)arg1;	// IMP=0x000000010009cc6c
+ (id)_categoryForRequest:(id)arg1;	// IMP=0x000000010009ca80
+ (void)_setScopedMusicVideosForScopedAlbumSortType:(long long)arg1;	// IMP=0x000000010009ca34
+ (void)_setCurrentSortType:(long long)arg1 forCategory:(id)arg2;	// IMP=0x000000010009c980
+ (long long)_currentSortTypeForCategory:(id)arg1;	// IMP=0x000000010009c828
+ (long long)_legacySortTypeForCategory:(id)arg1;	// IMP=0x000000010009c788
+ (_Bool)_hasLegacySortTypeForCategory:(id)arg1;	// IMP=0x000000010009c6f4
+ (long long)_defaultSortTypeForCategory:(id)arg1;	// IMP=0x000000010009c5c8
+ (_Bool)canSortRequest:(id)arg1;	// IMP=0x000000010009c58c
+ (id)_supportedSortTypeDictionary;	// IMP=0x000000010009bf64

@end
