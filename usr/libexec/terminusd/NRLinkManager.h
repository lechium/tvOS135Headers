//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NRLinkDelegate, OS_dispatch_queue;

@interface NRLinkManager : NSObject
{
    unsigned char _type;	// 8 = 0x8
    unsigned int _state;	// 12 = 0xc
    id <NRLinkDelegate> _managerDelegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010007ae14
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <NRLinkDelegate> managerDelegate; // @synthesize managerDelegate=_managerDelegate;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (void)invalidateManager;	// IMP=0x000000010007adac
- (void)reportEvent:(int)arg1;	// IMP=0x000000010007ad9c
- (void)reportEvent:(int)arg1 detailsFormat:(id)arg2;	// IMP=0x000000010007ad08
- (void)reportEvent:(int)arg1 details:(id)arg2;	// IMP=0x000000010007aca0
- (id)copyName;	// IMP=0x000000010007ac98
- (void)cancel;	// IMP=0x000000010007ac94
- (id)copyStatusString;	// IMP=0x000000010007ac88
- (id)initManagerWithQueue:(id)arg1 managerDelegate:(id)arg2;	// IMP=0x000000010007aa90

@end

