//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, UISUIActivityViewControllerConfiguration;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDXPCHelperConnection : NSObject
{
    _Bool _activated;	// 8 = 0x8
    _Bool _needsTransactionRelease;	// 9 = 0x9
    _Bool _invalidateCalled;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSXPCConnection *_connectionToService;	// 24 = 0x18
    unsigned long long _intervalID;	// 32 = 0x20
    NSString *_signpostName;	// 40 = 0x28
    UISUIActivityViewControllerConfiguration *_latestHostConfig;	// 48 = 0x30
    CDUnknownBlockType _interruptionHandler;	// 56 = 0x38
    CDUnknownBlockType _invalidationHandler;	// 64 = 0x40
}

+ (id)identifierForColor:(id)arg1;	// IMP=0x0000000100173d6c
+ (_Bool)shareSheetContainsShortcuts;	// IMP=0x0000000100171c14
+ (id)makeActivatedConnection;	// IMP=0x0000000100171b6c
+ (void)updateCacheFromSFCGImageData:(id)arg1 cacheKey:(id)arg2 contactIDs:(id)arg3;	// IMP=0x0000000100171774
- (void).cxx_destruct;	// IMP=0x0000000100174274
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
- (void)setSessionKeepAliveTransactionIdentifier:(id)arg1;	// IMP=0x0000000100174138
- (void)_updateShareSheetHostConfiguration;	// IMP=0x0000000100173f5c
- (void)updateShareSheetHostConfiguration:(id)arg1;	// IMP=0x0000000100173f50
- (id)keyDerivedFromRelevantTraitCollectionProperties;	// IMP=0x0000000100173de0
- (id)CGImgDataForNearbyBadgeWithCount:(long long)arg1;	// IMP=0x0000000100173a10
- (id)CGImgDataForActionPlatterWithTitle:(id)arg1 tintColor:(id)arg2;	// IMP=0x0000000100173654
- (id)CGImgDataForActivityMoreListEntryForActivityTitle:(id)arg1 labelColor:(id)arg2;	// IMP=0x0000000100173298
- (id)CGImgDataForNameLabelWithString:(id)arg1 textColor:(id)arg2 maxNumberOfLines:(unsigned long long)arg3 isAirDrop:(_Bool)arg4 ignoreNameWrapping:(_Bool)arg5;	// IMP=0x0000000100172da4
- (id)CGImgDataForUIActivityTitle:(id)arg1 foregroundColor:(id)arg2;	// IMP=0x00000001001729e8
- (id)urlToCGImgDataForCallHandoffIconWithAppIconImageData:(id)arg1 contact:(id)arg2;	// IMP=0x0000000100172740
- (id)groupMonogramImageDataForContacts:(id)arg1 style:(long long)arg2 diameter:(double)arg3 monogramsAsFlatImages:(_Bool)arg4;	// IMP=0x0000000100172210
- (id)monogramImageDataForContact:(id)arg1 style:(long long)arg2 diameter:(double)arg3 monogramsAsFlatImages:(_Bool)arg4 isContactImage:(_Bool *)arg5;	// IMP=0x0000000100171c1c
- (void)dealloc;	// IMP=0x0000000100171a3c
- (void)invalidate;	// IMP=0x00000001001719b8
- (void)activate;	// IMP=0x00000001001718c0
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100171830

@end

