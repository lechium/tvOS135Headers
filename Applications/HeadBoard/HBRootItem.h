//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HBFolder, NSHashTable, NSNumber, NSString, PBSBadgeValue;

@interface HBRootItem : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    _Bool _installPaused;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    HBFolder *_parentFolder;	// 32 = 0x20
    NSNumber *_itemOrderId;	// 40 = 0x28
    double _installPercentage;	// 48 = 0x30
    long long _installProgressState;	// 56 = 0x38
    PBSBadgeValue *_badgeValue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100042508
@property(retain, nonatomic) PBSBadgeValue *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic, getter=isInstallPaused) _Bool installPaused; // @synthesize installPaused=_installPaused;
@property(nonatomic) long long installProgressState; // @synthesize installProgressState=_installProgressState;
@property(nonatomic) double installPercentage; // @synthesize installPercentage=_installPercentage;
@property(retain, nonatomic) NSNumber *itemOrderId; // @synthesize itemOrderId=_itemOrderId;
@property(nonatomic) __weak HBFolder *parentFolder; // @synthesize parentFolder=_parentFolder;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)_notifyBadgeValueDidChange;	// IMP=0x00000001000423c8
- (void)_notifyDisplayNameDidChange;	// IMP=0x0000000100042318
- (void)_notifyInstallStateChanged;	// IMP=0x0000000100042268
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100042258
- (void)addObserver:(id)arg1;	// IMP=0x0000000100042240
- (void)setBadgeValue:(id)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x000000010004217c
- (void)setInstallProgressState:(long long)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x0000000100042158
- (void)setInstallPercentage:(double)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x0000000100042134
- (id)init;	// IMP=0x00000001000420c0

@end
