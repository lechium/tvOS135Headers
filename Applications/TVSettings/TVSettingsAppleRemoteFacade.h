//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSFormatter;

@interface TVSettingsAppleRemoteFacade : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000001000743c8
@property(readonly, nonatomic) NSFormatter *sensitivityFormatter;
- (id)availableSensitivityLabels;	// IMP=0x0000000100074544
@property(readonly, nonatomic) NSArray *availableSensitivityValues;
@property(nonatomic) long long sensitivity;

@end

