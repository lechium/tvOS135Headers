//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLPropertyValue : NSObject
{
    _Bool _dirty;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(readonly, retain, nonatomic) id value; // @synthesize value=_value;
- (void)dealloc;	// IMP=0x00000001003278c8
- (id)initWithValue:(id)arg1 dirty:(_Bool)arg2;	// IMP=0x0000000100327860

@end
