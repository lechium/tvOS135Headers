//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MIBundle, NSDictionary, NSURL;

@interface MIInstallable : NSObject
{
    unsigned char _packageFormat;	// 8 = 0x8
    NSDictionary *_userOptions;	// 16 = 0x10
    NSURL *_stagingRootURL;	// 24 = 0x18
    MIBundle *_bundle;	// 32 = 0x20
    CDUnknownBlockType _progressBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010003f230
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) MIBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) unsigned char packageFormat; // @synthesize packageFormat=_packageFormat;
@property(readonly, nonatomic) NSURL *stagingRootURL; // @synthesize stagingRootURL=_stagingRootURL;
@property(readonly, nonatomic) NSDictionary *userOptions; // @synthesize userOptions=_userOptions;
- (id)description;	// IMP=0x000000010003f078
- (id)launchServicesDictionariesWithError:(id *)arg1;	// IMP=0x000000010003f068
- (_Bool)finalizeInstallationWithError:(id *)arg1;	// IMP=0x000000010003f060
- (_Bool)postFlightInstallationWithError:(id *)arg1;	// IMP=0x000000010003f058
- (_Bool)performInstallationWithError:(id *)arg1;	// IMP=0x000000010003f050
- (_Bool)performVerificationWithError:(id *)arg1;	// IMP=0x000000010003f048
- (_Bool)performPreflightWithError:(id *)arg1;	// IMP=0x000000010003f03c
- (_Bool)applyPatchWithError:(id *)arg1;	// IMP=0x000000010003f034
@property(readonly, nonatomic) _Bool shouldModifyExistingContainers;
- (id)initWithBundle:(id)arg1 inStagingRoot:(id)arg2 packageFormat:(unsigned char)arg3 userOptions:(id)arg4 error:(id *)arg5;	// IMP=0x000000010003ef54

@end

