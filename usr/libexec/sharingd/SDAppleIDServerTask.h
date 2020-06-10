//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURLRequest, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDAppleIDServerTask : NSObject
{
    _Bool _activated;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
    NSString *_appleID;	// 32 = 0x20
    NSString *_gsToken;	// 40 = 0x28
    NSURLSession *_session;	// 48 = 0x30
    NSDictionary *_taskInfo;	// 56 = 0x38
    long long _type;	// 64 = 0x40
    NSURLRequest *_urlRequest;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000d79cc
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDictionary *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSString *gsToken; // @synthesize gsToken=_gsToken;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_sendRequest;	// IMP=0x00000001000d7760
- (id)_parseServerResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00000001000d75f8
- (id)_parseGetMyInfoResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00000001000d6e68
- (id)_parseFindPersonResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00000001000d66cc
- (id)_parseFetchCertificateResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00000001000d5db0
- (id)_parseCreateCertificateResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00000001000d59a4
- (void)_handleTaskResponse:(id)arg1 withData:(id)arg2 error:(int)arg3;	// IMP=0x00000001000d5054
- (void)_invalidate;	// IMP=0x00000001000d4ef4
- (void)_handleServerError:(long long)arg1 withStatusCode:(long long)arg2 nextSuggestedAttemptDelay:(long long)arg3;	// IMP=0x00000001000d4b60
- (void)_handleGSTokenIsAvailable;	// IMP=0x00000001000d4a14
- (void)_handleURLRequestIsAvailable;	// IMP=0x00000001000d4654
- (void)invalidate;	// IMP=0x00000001000d45ec
- (void)_activate;	// IMP=0x00000001000d4478
- (void)_urlRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d4314
- (void)_handleURLIsAvailable:(id)arg1 error:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d4058
- (void)_urlWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d3c04
- (_Bool)_isTaskInfoValid;	// IMP=0x00000001000d36b0
- (void)_callResponseHandlerWithInfo:(id)arg1 error:(int)arg2;	// IMP=0x00000001000d369c
- (void)_callResponseHandlerWithInfo:(id)arg1 errorInfo:(id)arg2 error:(int)arg3;	// IMP=0x00000001000d3588
- (void)activate;	// IMP=0x00000001000d3520
- (id)description;	// IMP=0x00000001000d34ec
- (id)initWithType:(long long)arg1 appleID:(id)arg2 info:(id)arg3;	// IMP=0x00000001000d3348

@end
