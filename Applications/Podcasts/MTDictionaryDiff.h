//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSSet;

@interface MTDictionaryDiff : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
    NSSet *_properties;	// 16 = 0x10
    NSMutableArray *_callbacks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010011ef40
@property(retain, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) NSSet *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void)addCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000010011ee8c
- (id)initWithProperties:(id)arg1;	// IMP=0x000000010011eb50
- (id)init;	// IMP=0x000000010011eb40

@end

