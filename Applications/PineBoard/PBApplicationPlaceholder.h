//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBSApplicationPlaceholder.h>

@class NSNumber, NSString;

@interface PBApplicationPlaceholder : FBSApplicationPlaceholder
{
    NSString *_iconFile;	// 8 = 0x8
    NSNumber *_installFailureReason;	// 16 = 0x10
    NSString *_applicationType;	// 24 = 0x18
}

+ (id)_infoDictionaryKeys;	// IMP=0x0000000100070c84
- (void).cxx_destruct;	// IMP=0x0000000100070e00
@property(readonly, nonatomic) NSString *applicationType; // @synthesize applicationType=_applicationType;
@property(readonly, nonatomic) NSNumber *installFailureReason; // @synthesize installFailureReason=_installFailureReason;
@property(readonly, nonatomic) NSString *iconFile; // @synthesize iconFile=_iconFile;
- (void)_reloadFromProxy:(id)arg1;	// IMP=0x0000000100070a50

@end

