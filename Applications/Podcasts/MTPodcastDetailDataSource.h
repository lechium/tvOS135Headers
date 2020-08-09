//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTPodcastDetailEpisodeSectionDelegate-Protocol.h"

@class NSArray, NSString;
@protocol MTPodcastDetailDataSourceDelegate;

@interface MTPodcastDetailDataSource : NSObject <MTPodcastDetailEpisodeSectionDelegate>
{
    NSString *_podcastUuid;	// 8 = 0x8
    id <MTPodcastDetailDataSourceDelegate> _delegate;	// 16 = 0x10
    unsigned long long _selectedTab;	// 24 = 0x18
    NSArray *_sections;	// 32 = 0x20
}

+ (id)predicateForPodcast:(id)arg1 sectionType:(unsigned long long)arg2;	// IMP=0x0000000100087a3c
+ (id)predicateForPlayingPodcast:(id)arg1 sectionType:(unsigned long long)arg2;	// IMP=0x0000000100087908
+ (id)sortDescriptorsForPodcastUuid:(id)arg1;	// IMP=0x0000000100086ad4
- (void).cxx_destruct;	// IMP=0x0000000100087d5c
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) unsigned long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(nonatomic) __weak id <MTPodcastDetailDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
- (id)createSectionForFeed;	// IMP=0x0000000100087738
- (id)createSectionForSaved;	// IMP=0x000000010008757c
- (id)createSectionForIsFromiTunesSync;	// IMP=0x0000000100087350
- (id)createSectionForPlayedToBeDeleted;	// IMP=0x0000000100087124
- (id)createSectionForDarkPlacard;	// IMP=0x0000000100087088
- (id)createSectionForEmptyOverlay;	// IMP=0x0000000100086fec
- (id)createSectionForOtherEpisodes;	// IMP=0x0000000100086dbc
- (id)createSectionForLimitedUnplayed;	// IMP=0x0000000100086bc0
- (void)episodeSection:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5;	// IMP=0x000000010008692c
- (void)sectionDidChangeContent:(id)arg1;	// IMP=0x00000001000868c0
- (void)sectionWillChangeContent:(id)arg1;	// IMP=0x0000000100086854
- (unsigned long long)indexForSection:(id)arg1;	// IMP=0x00000001000867dc
- (id)savedSections;	// IMP=0x000000010008670c
- (id)feedSections;	// IMP=0x0000000100086614
- (id)unplayedSections;	// IMP=0x00000001000864c4
- (id)podcast;	// IMP=0x0000000100086428
- (void)reloadData;	// IMP=0x00000001000863cc
- (id)initWithPodcastUuid:(id)arg1;	// IMP=0x000000010008632c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

