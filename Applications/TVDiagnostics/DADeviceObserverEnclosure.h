//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol DADeviceObserver, DADeviceObserverEnclosureDelegate, NSCopying;

@interface DADeviceObserverEnclosure : NSObject
{
    NSObject<NSCopying> *_identifier;	// 8 = 0x8
    id <DADeviceObserver> _observer;	// 16 = 0x10
    NSSet *_devices;	// 24 = 0x18
    id <DADeviceObserverEnclosureDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000518c
@property(nonatomic) __weak id <DADeviceObserverEnclosureDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSSet *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) id <DADeviceObserver> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSObject<NSCopying> *identifier; // @synthesize identifier=_identifier;
- (void)oneshotWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004f1c
- (void)end;	// IMP=0x0000000100004e5c
- (void)begin;	// IMP=0x0000000100004bf8
- (id)initWithObserver:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100004b30

@end

