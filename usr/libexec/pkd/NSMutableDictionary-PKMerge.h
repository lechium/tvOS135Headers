//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (PKMerge)
- (id)_createOrConvertToMutableDictionaryFromDictionary:(id)arg1;	// IMP=0x000000010001ded0
- (id)_mutableDictionaryAtKeyPath:(id)arg1;	// IMP=0x000000010001dd14
- (void)_overlayCustomValueAtKeyPath:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010001dbb4
- (void)_overlayValueAtKey:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 targetTakePrecedent:(_Bool)arg4 nestedDictionaryHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010001da8c
- (void)pk_removeItemsAtKeyPaths:(id)arg1;	// IMP=0x000000010001d8ec
- (void)pk_overlayDictionary:(id)arg1 existingValuesTakePrecedent:(_Bool)arg2 exceptKeyPaths:(id)arg3 exemptionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010001d4f8
@end
