//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface SATVStepPresentationRecord : NSObject
{
    unsigned int _buddyVersion;	// 8 = 0x8
    NSDate *_datePresented;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100023ed0
@property(readonly, nonatomic) NSDate *datePresented; // @synthesize datePresented=_datePresented;
@property(readonly, nonatomic) unsigned int buddyVersion; // @synthesize buddyVersion=_buddyVersion;
@property(readonly, nonatomic) NSDictionary *defaultsRepresentation;
- (id)init;	// IMP=0x0000000100023cf8
- (id)initWithDefaultsRepresentation:(id)arg1;	// IMP=0x0000000100023b70

@end
