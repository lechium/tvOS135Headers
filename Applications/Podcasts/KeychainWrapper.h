//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface KeychainWrapper : NSObject
{
    NSMutableDictionary *keychainData;	// 8 = 0x8
    NSMutableDictionary *genericPasswordQuery;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001078b4
@property(retain, nonatomic) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery;
@property(retain, nonatomic) NSMutableDictionary *keychainData; // @synthesize keychainData;
- (void)writeToKeychain;	// IMP=0x0000000100107678
- (id)secItemFormatToDictionary:(id)arg1;	// IMP=0x0000000100107508
- (id)dictionaryToSecItemFormat:(id)arg1;	// IMP=0x0000000100107390
- (void)resetKeychainItem;	// IMP=0x000000010010719c
@property(retain, nonatomic) NSString *personId;
- (id)myObjectForKey:(id)arg1;	// IMP=0x0000000100107114
- (void)mySetObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100107060
- (id)init;	// IMP=0x0000000100106e88

@end

