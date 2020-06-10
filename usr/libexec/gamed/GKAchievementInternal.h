//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKPlayerInternal, NSDate, NSDictionary, NSString;

@interface GKAchievementInternal : GKInternalRepresentation
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_groupIdentifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_achievedDescription;	// 32 = 0x20
    NSString *_unachievedDescription;	// 40 = 0x28
    NSDictionary *_icons;	// 48 = 0x30
    GKPlayerInternal *_player;	// 56 = 0x38
    union {
        struct {
            unsigned int _maximumPoints:16;
            unsigned int _hidden:1;
            unsigned int _replayable:1;
            unsigned int _reserved:14;
        } ;
        unsigned int _value;
    } _attributes;	// 64 = 0x40
    NSDate *_lastReportedDate;	// 72 = 0x48
    double _percentComplete;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010012c648
+ (id)secureCodedPropertyKeys;	// IMP=0x000000010012c440
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(retain, nonatomic) NSDate *lastReportedDate; // @synthesize lastReportedDate=_lastReportedDate;
@property(retain, nonatomic) NSDictionary *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *unachievedDescription; // @synthesize unachievedDescription=_unachievedDescription;
@property(retain, nonatomic) NSString *achievedDescription; // @synthesize achievedDescription=_achievedDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionSubstitutionMap;	// IMP=0x000000010012caa4
@property(nonatomic, getter=isReplayable) _Bool replayable; // @dynamic replayable;
@property(nonatomic, getter=isHidden) _Bool hidden; // @dynamic hidden;
@property(nonatomic) unsigned short maximumPoints; // @dynamic maximumPoints;
@property(nonatomic) unsigned int attributes; // @dynamic attributes;
- (unsigned long long)hash;	// IMP=0x000000010012c9e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010012c910
- (id)serverRepresentation;	// IMP=0x000000010012c7c4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010012c700
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010012c650
- (void)dealloc;	// IMP=0x000000010012c380
- (void)mergePropertiesFromDescription:(id)arg1;	// IMP=0x000000010012cc5c

@end

