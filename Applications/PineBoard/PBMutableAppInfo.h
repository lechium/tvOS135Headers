//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PineBoardServices/PBSMutableAppInfo.h>

#import "PBAppInfo-Protocol.h"

@class NSString, PBApplicationInfo, PBApplicationPlaceholder;

@interface PBMutableAppInfo : PBSMutableAppInfo <PBAppInfo>
{
    PBApplicationInfo *_applicationInfo;	// 8 = 0x8
    PBApplicationPlaceholder *_applicationPlaceholder;	// 16 = 0x10
}

+ (long long)_mapApplicationTypeString:(id)arg1;	// IMP=0x00000001000cbe4c
+ (long long)_mapInstallFailureReason:(id)arg1;	// IMP=0x00000001000cbd60
+ (long long)_mapInstallType:(unsigned long long)arg1;	// IMP=0x00000001000cbd20
+ (long long)_mapProgressState:(long long)arg1;	// IMP=0x00000001000cbc64
+ (long long)_mapApplicationType:(unsigned long long)arg1;	// IMP=0x00000001000cbbe8
- (void).cxx_destruct;	// IMP=0x00000001000cc03c
@property(retain, nonatomic) PBApplicationPlaceholder *applicationPlaceholder; // @synthesize applicationPlaceholder=_applicationPlaceholder;
@property(retain, nonatomic) PBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
- (_Bool)isPBAppInfo;	// IMP=0x00000001000cbbcc
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000cbb6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000cbb0c
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000cb510
- (id)initWithAppInfo:(id)arg1;	// IMP=0x00000001000cb398
- (id)initWithApplicationPlaceholder:(id)arg1;	// IMP=0x00000001000caef4
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x00000001000ca884

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

