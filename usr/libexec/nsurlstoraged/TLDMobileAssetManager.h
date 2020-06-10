//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TLDMobileAssetManager : NSObject
{
    unsigned long long _installedAssetVersion;	// 8 = 0x8
}

@property unsigned long long installedAssetVersion; // @synthesize installedAssetVersion=_installedAssetVersion;
- (void)moveInstalledAsset:(id)arg1 withVersion:(unsigned long long)arg2;	// IMP=0x00000001000037ac
- (void)moveFileAtomicallyAndCheckIntegrity:(id)arg1 toLocation:(id)arg2;	// IMP=0x000000010000342c
- (void)downloadAsset:(id)arg1;	// IMP=0x00000001000032d4
- (void)findBestAssetFrom:(id)arg1;	// IMP=0x0000000100002c38
- (void)queryAndFindBestAsset;	// IMP=0x0000000100002a10

@end

