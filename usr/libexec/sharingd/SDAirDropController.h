//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SDStatusMonitor, SFUserAlert;
@protocol OS_os_transaction, SDAirDropControllerDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropController : NSObject
{
    _Bool _started;	// 8 = 0x8
    SDStatusMonitor *_monitor;	// 16 = 0x10
    NSMutableDictionary *_properties;	// 24 = 0x18
    SFUserAlert *_phUserNotification;	// 32 = 0x20
    SFUserAlert *_radiosUserNotification;	// 40 = 0x28
    NSObject<OS_os_transaction> *_transaction;	// 48 = 0x30
    id <SDAirDropControllerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001001c1e40
@property __weak id <SDAirDropControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;	// IMP=0x00000001001c1d58
- (void)start;	// IMP=0x00000001001c1ce8
- (void)removeObservers;	// IMP=0x00000001001c1c98
- (void)addObservers;	// IMP=0x00000001001c1b90
- (void)somethingChanged:(id)arg1;	// IMP=0x00000001001c1b84
- (void)setStatusAndNotify;	// IMP=0x00000001001c197c
- (void)setProperty:(void *)arg1 forKey:(id)arg2;	// IMP=0x00000001001c1844
- (void)presentDisablePersonalHotspotAlert;	// IMP=0x00000001001c1840
- (void)presentEnableRadiosAlertForBluetooth:(_Bool)arg1 andWLAN:(_Bool)arg2;	// IMP=0x00000001001c183c
- (void)configureSettingsForAirDrop;	// IMP=0x00000001001c175c
- (void)dealloc;	// IMP=0x00000001001c1710
- (id)init;	// IMP=0x00000001001c167c

@end

