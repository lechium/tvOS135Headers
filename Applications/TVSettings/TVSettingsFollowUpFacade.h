//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FLFollowUpController, NSArray;

@interface TVSettingsFollowUpFacade : NSObject
{
    int _cfuNotifyToken;	// 8 = 0x8
    NSArray *_homeKitItems;	// 16 = 0x10
    NSArray *_accountItems;	// 24 = 0x18
    FLFollowUpController *_followUpController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100074358
@property(retain, nonatomic) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
@property(copy, nonatomic) NSArray *accountItems; // @synthesize accountItems=_accountItems;
@property(copy, nonatomic) NSArray *homeKitItems; // @synthesize homeKitItems=_homeKitItems;
- (void)_updateFollowUpItems;	// IMP=0x0000000100073ac4
- (void)dealloc;	// IMP=0x0000000100073a60
- (id)init;	// IMP=0x00000001000738ec

@end
