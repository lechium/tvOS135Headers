//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface _User : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSNumber *_assignedProfileIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000059d8
@property(nonatomic) NSNumber *assignedProfileIndex; // @synthesize assignedProfileIndex=_assignedProfileIndex;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

