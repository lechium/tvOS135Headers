//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PBSDisplayMode;
@protocol TVDAStep;

@interface _TVDAStepDisplayModePair : NSObject
{
    PBSDisplayMode *_displayMode;	// 8 = 0x8
    id <TVDAStep> _step;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100006d5c
@property(retain, nonatomic) id <TVDAStep> step; // @synthesize step=_step;
@property(copy, nonatomic) PBSDisplayMode *displayMode; // @synthesize displayMode=_displayMode;
- (id)initWithStep:(id)arg1;	// IMP=0x0000000100006c6c

@end

