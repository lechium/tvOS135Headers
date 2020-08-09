//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "TVHJSMediaServer-Protocol.h"

@class NSMutableArray, NSOperationQueue, NSString, TVHKMediaEntityServer;

@interface TVHJSMediaServer : IKJSObject <TVHJSMediaServer>
{
    TVHKMediaEntityServer *_mediaEntityServer;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSString *_connectionState;	// 32 = 0x20
    NSOperationQueue *_privateQueue;	// 40 = 0x28
    NSMutableArray *_contentsDidChangeCallbacks;	// 48 = 0x30
    NSMutableArray *_connectionStateDidChangeCallbacks;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010002a6bc
@property(retain, nonatomic) NSMutableArray *connectionStateDidChangeCallbacks; // @synthesize connectionStateDidChangeCallbacks=_connectionStateDidChangeCallbacks;
@property(retain, nonatomic) NSMutableArray *contentsDidChangeCallbacks; // @synthesize contentsDidChangeCallbacks=_contentsDidChangeCallbacks;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(copy, nonatomic) NSString *connectionState; // @synthesize connectionState=_connectionState;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) TVHKMediaEntityServer *mediaEntityServer; // @synthesize mediaEntityServer=_mediaEntityServer;
- (void)_enqueueMediaEntityServerOperation:(id)arg1 javascriptCallback:(id)arg2 processingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010002a230
- (void)_notifyMediaServerContentsDidChange:(id)arg1;	// IMP=0x0000000100029f80
- (void)_notifyMediaServerConnectionStateDidChangeFromState:(id)arg1 toState:(id)arg2;	// IMP=0x0000000100029c58
- (void)_stopObservingMediaServer:(id)arg1;	// IMP=0x0000000100029b8c
- (void)_startObservingMediaServer:(id)arg1;	// IMP=0x0000000100029ab0
- (void)_handleMediaServerContentsDidChangeNotification:(id)arg1;	// IMP=0x0000000100029a2c
- (void)_handleMediaServerConntectionStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100029780
- (void)unregisterConnectionStateDidChangeCallback:(id)arg1;	// IMP=0x0000000100029714
- (void)registerConnectionStateDidChangeCallback:(id)arg1;	// IMP=0x00000001000296a8
- (void)unregisterContentsDidChangeCallback:(id)arg1;	// IMP=0x000000010002963c
- (void)registerContentsDidChangeCallback:(id)arg1;	// IMP=0x00000001000295d0
- (id)enqueueFetchRequest:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000100029364
- (void)connect;	// IMP=0x0000000100029324
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)dealloc;	// IMP=0x0000000100029254
- (id)initWithMediaEntityServer:(id)arg1 appContent:(id)arg2;	// IMP=0x0000000100029048

@end

