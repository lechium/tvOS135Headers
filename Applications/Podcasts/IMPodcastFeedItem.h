//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IMPodcastFeedItem : NSObject
{
    _Bool _isExplicit;	// 8 = 0x8
    _Bool _preferredCategoryFound;	// 9 = 0x9
    unsigned int _trackNum;	// 12 = 0xc
    NSString *_author;	// 16 = 0x10
    unsigned long long _byteSize;	// 24 = 0x18
    NSString *_category;	// 32 = 0x20
    double _duration;	// 40 = 0x28
    NSString *_enclosureParameterString;	// 48 = 0x30
    NSString *_enclosureURL;	// 56 = 0x38
    NSString *_guid;	// 64 = 0x40
    NSString *_itemDescription;	// 72 = 0x48
    NSString *_itemDescriptionSourceElement;	// 80 = 0x50
    NSDate *_pubDate;	// 88 = 0x58
    NSString *_title;	// 96 = 0x60
    NSString *_uti;	// 104 = 0x68
    NSString *_itunesTitle;	// 112 = 0x70
    NSString *_itemSummary;	// 120 = 0x78
    NSString *_itemSummarySourceElement;	// 128 = 0x80
    long long _seasonNumber;	// 136 = 0x88
    long long _episodeNumber;	// 144 = 0x90
    NSString *_episodeType;	// 152 = 0x98
    NSString *_webpageURL;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000001001c23c8
@property(nonatomic) _Bool preferredCategoryFound; // @synthesize preferredCategoryFound=_preferredCategoryFound;
@property(retain, nonatomic) NSString *webpageURL; // @synthesize webpageURL=_webpageURL;
@property(retain, nonatomic) NSString *episodeType; // @synthesize episodeType=_episodeType;
@property(nonatomic) long long episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(nonatomic) long long seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(retain, nonatomic) NSString *itemSummarySourceElement; // @synthesize itemSummarySourceElement=_itemSummarySourceElement;
@property(retain, nonatomic) NSString *itemSummary; // @synthesize itemSummary=_itemSummary;
@property(retain, nonatomic) NSString *itunesTitle; // @synthesize itunesTitle=_itunesTitle;
@property(retain, nonatomic) NSString *uti; // @synthesize uti=_uti;
@property(nonatomic) unsigned int trackNum; // @synthesize trackNum=_trackNum;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDate *pubDate; // @synthesize pubDate=_pubDate;
@property(retain, nonatomic) NSString *itemDescriptionSourceElement; // @synthesize itemDescriptionSourceElement=_itemDescriptionSourceElement;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(retain, nonatomic) NSString *enclosureURL; // @synthesize enclosureURL=_enclosureURL;
@property(retain, nonatomic) NSString *enclosureParameterString; // @synthesize enclosureParameterString=_enclosureParameterString;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) unsigned long long byteSize; // @synthesize byteSize=_byteSize;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001c19dc
- (id)description;	// IMP=0x00000001001c18d4

@end

