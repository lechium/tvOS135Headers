//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface CLDuetNowPlaying : NSObject
{
    NSString *_bundleId;	// 8 = 0x8
    NSNumber *_status;	// 16 = 0x10
    NSString *_track;	// 24 = 0x18
    NSDictionary *_outputDeviceIDs;	// 32 = 0x20
}

@property(retain, nonatomic) NSDictionary *outputDeviceIDs; // @synthesize outputDeviceIDs=_outputDeviceIDs;
@property(retain, nonatomic) NSString *track; // @synthesize track=_track;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)dealloc;	// IMP=0x00000001001051cc
- (id)initWithBundleId:(id)arg1 status:(id)arg2 track:(id)arg3 outputDeviceIDs:(id)arg4;	// IMP=0x0000000100105114

@end

