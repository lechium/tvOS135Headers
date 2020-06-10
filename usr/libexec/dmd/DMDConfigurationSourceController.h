//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CATSerialOperationQueue, DMDConfigurationSourceRepresentation, DMFConfigurationSource, NSString;
@protocol DMDConfigurationSourceControllerDelegate;

@interface DMDConfigurationSourceController : NSObject
{
    id <DMDConfigurationSourceControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    CATSerialOperationQueue *_queue;	// 24 = 0x18
    DMDConfigurationSourceRepresentation *_source;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000384ac
@property(retain, nonatomic) DMDConfigurationSourceRepresentation *source; // @synthesize source=_source;
@property(retain, nonatomic) CATSerialOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak id <DMDConfigurationSourceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resolveAssetWithContext:(id)arg1;	// IMP=0x00000001000383bc
- (void)reportEvents;	// IMP=0x00000001000382dc
- (void)reportEventsTimeout;	// IMP=0x00000001000382d0
- (void)eventsForSourceDidChange:(id)arg1;	// IMP=0x00000001000380cc
- (void)reportStatus;	// IMP=0x0000000100037fec
- (void)reportStatusTimeout;	// IMP=0x0000000100037fe0
- (void)statusForSourceDidChange:(id)arg1;	// IMP=0x0000000100037ddc
- (void)updateStatusChangeListener;	// IMP=0x0000000100037ce8
@property(readonly, nonatomic) DMFConfigurationSource *configurationSource;
- (void)updateWithConfigurationSource:(id)arg1;	// IMP=0x0000000100037998
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *organizationIdentifier;
- (id)debugDescription;	// IMP=0x0000000100037864
- (id)description;	// IMP=0x00000001000377d8
- (id)initWithConfigurationSource:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010003756c

@end

