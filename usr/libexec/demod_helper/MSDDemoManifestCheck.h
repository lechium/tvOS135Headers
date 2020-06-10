//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, WhitelistChecker;

@interface MSDDemoManifestCheck : NSObject
{
    NSDictionary *_segmentedManifestWithRigorousFlag;	// 8 = 0x8
    NSMutableDictionary *_allowedSymLinks;	// 16 = 0x10
    WhitelistChecker *_whitelistChecker;	// 24 = 0x18
    NSDictionary *_itemBeingInstalled;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010000d280
- (void).cxx_destruct;	// IMP=0x000000010001076c
@property(retain) NSDictionary *itemBeingInstalled; // @synthesize itemBeingInstalled=_itemBeingInstalled;
@property(retain) WhitelistChecker *whitelistChecker; // @synthesize whitelistChecker=_whitelistChecker;
@property(retain) NSMutableDictionary *allowedSymLinks; // @synthesize allowedSymLinks=_allowedSymLinks;
@property(retain) NSDictionary *segmentedManifestWithRigorousFlag; // @synthesize segmentedManifestWithRigorousFlag=_segmentedManifestWithRigorousFlag;
- (_Bool)checkFileForEntitlements:(id)arg1 forCorrespondingManifestEntry:(id)arg2;	// IMP=0x0000000100010104
- (void)registerEntitlementNotificationHandler;	// IMP=0x000000010000fedc
- (_Bool)runAppLayoutSecurityCheck:(id)arg1;	// IMP=0x000000010000f378
- (_Bool)runSecurityChecksForSection:(id)arg1 dataType:(id)arg2;	// IMP=0x000000010000eaa4
- (_Bool)runSecurityCheck;	// IMP=0x000000010000e260
- (_Bool)secureManifestCheckForSegmentedManifest:(id)arg1;	// IMP=0x000000010000e100
- (_Bool)secureManifestCheckForUnsegmentedManifest:(id)arg1;	// IMP=0x000000010000df04
- (_Bool)unsegmentedToSegmentedWithRigorousFlag:(id)arg1;	// IMP=0x000000010000d7e8
- (id)init;	// IMP=0x000000010000d2ec

@end

