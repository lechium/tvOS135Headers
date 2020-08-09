//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXElement, PBSiriScreenActionApplication;
@protocol PBSiriScreenActionManagerDelegate;

@interface PBSiriScreenActionManager : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    id <PBSiriScreenActionManagerDelegate> _delegate;	// 16 = 0x10
    AXElement *_systemApplicationElement;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100181374
- (void).cxx_destruct;	// IMP=0x0000000100181aac
@property(retain, nonatomic) AXElement *systemApplicationElement; // @synthesize systemApplicationElement=_systemApplicationElement;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <PBSiriScreenActionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AXElement *currentApplicationElement;
@property(readonly, nonatomic) PBSiriScreenActionApplication *currentScreenActionApplication;
- (id)_init;	// IMP=0x00000001001814cc
- (id)init;	// IMP=0x0000000100181480

@end

