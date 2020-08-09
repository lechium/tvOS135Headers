//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PineBoardServices/PBSAppInfo.h>

#import "PBAppInfo-Protocol.h"

@class FBSSceneIdentity, NSString, PBApplicationInfo, PBApplicationPlaceholder;

@interface PBAppInfo : PBSAppInfo <PBAppInfo>
{
    PBApplicationInfo *_applicationInfo;	// 8 = 0x8
    PBApplicationPlaceholder *_applicationPlaceholder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000ca814
@property(readonly, nonatomic) PBApplicationPlaceholder *applicationPlaceholder; // @synthesize applicationPlaceholder=_applicationPlaceholder;
@property(readonly, nonatomic) PBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
- (_Bool)isPBAppInfo;	// IMP=0x00000001000ca7a0
- (Class)classForCoder;	// IMP=0x00000001000ca76c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000ca70c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000ca6ec
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000ca0f0
- (id)initWithAppInfo:(id)arg1;	// IMP=0x00000001000c9f78
- (id)initWithApplicationPlaceholder:(id)arg1;	// IMP=0x00000001000c9e9c
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x00000001000c9dc0
@property(readonly, nonatomic) FBSSceneIdentity *defaultSceneIdentity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

