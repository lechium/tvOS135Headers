//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GestaltHlpr : NSObject
{
}

+ (id)getSharedInstance;	// IMP=0x0000000100005a10
- (void)updateRecertInfo:(id)arg1 errors:(id *)arg2;	// IMP=0x0000000100006030
- (id)copyRegulatoryImagesInfo:(id *)arg1;	// IMP=0x0000000100005f94
- (id)copyDeviceInfo:(id *)arg1;	// IMP=0x0000000100005cec
- (id)copyDeviceIDInfo:(id *)arg1;	// IMP=0x0000000100005c24
- (void)addAGestaltKey:(struct __CFString *)arg1 toDictionary:(id)arg2 required:(_Bool)arg3 errors:(id)arg4;	// IMP=0x0000000100005af4
- (_Bool)getBoolAnswer:(struct __CFString *)arg1;	// IMP=0x0000000100005a94
- (id)copyAnswer:(struct __CFString *)arg1;	// IMP=0x0000000100005a7c

@end

