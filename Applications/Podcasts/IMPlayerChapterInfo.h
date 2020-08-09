//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, UIImage;

@interface IMPlayerChapterInfo : NSObject
{
    UIImage *_artwork;	// 8 = 0x8
    int _type;	// 16 = 0x10
    int _metadataType;	// 20 = 0x14
    NSString *_title;	// 24 = 0x18
    NSURL *_externalURL;	// 32 = 0x20
    NSData *_artworkData;	// 40 = 0x28
    double _duration;	// 48 = 0x30
    double _time;	// 56 = 0x38
    CDStruct_e83c9415 _mediaTimeRange;	// 64 = 0x40
    CDStruct_e83c9415 _assetTimeRange;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001001d5380
@property(nonatomic) int metadataType; // @synthesize metadataType=_metadataType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) CDStruct_e83c9415 assetTimeRange; // @synthesize assetTimeRange=_assetTimeRange;
@property(nonatomic) CDStruct_e83c9415 mediaTimeRange; // @synthesize mediaTimeRange=_mediaTimeRange;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
@property(retain, nonatomic) NSURL *externalURL; // @synthesize externalURL=_externalURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x00000001001d5134
@property(readonly, nonatomic) UIImage *artwork;
- (unsigned long long)hash;	// IMP=0x00000001001d4c9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001d4a04

@end
