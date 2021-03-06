//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMURLRequestEncoder, IMURLSession, NSURLSessionConfiguration;

@interface IMBaseStoreService : NSObject
{
    _Bool _wantsJSSignature;	// 8 = 0x8
    _Bool _personalizeRequests;	// 9 = 0x9
    CDUnknownBlockType _callback;	// 16 = 0x10
    IMURLRequestEncoder *_requestEncoder;	// 24 = 0x18
    NSURLSessionConfiguration *_configuration;	// 32 = 0x20
    IMURLSession *_amsUrlSession;	// 40 = 0x28
}

+ (id)signatureQueryParams;	// IMP=0x00000001001acdd4
+ (_Bool)shouldFollowRedirects;	// IMP=0x00000001001ab7e0
+ (unsigned long long)defaultConcurrentOperationCount;	// IMP=0x00000001001ab7c8
- (void).cxx_destruct;	// IMP=0x00000001001ad114
@property(retain, nonatomic) IMURLSession *amsUrlSession; // @synthesize amsUrlSession=_amsUrlSession;
@property(retain, nonatomic) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) IMURLRequestEncoder *requestEncoder; // @synthesize requestEncoder=_requestEncoder;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool personalizeRequests; // @synthesize personalizeRequests=_personalizeRequests;
@property(nonatomic) _Bool wantsJSSignature; // @synthesize wantsJSSignature=_wantsJSSignature;
- (void)signRequest:(id)arg1;	// IMP=0x00000001001ac698
- (id)bag;	// IMP=0x00000001001ac610
- (void)cancelAllRequests;	// IMP=0x00000001001ac570
- (void)performDataRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001001abd54
- (void)performUrlRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001001abb04
- (void)performRequest:(CDUnknownBlockType)arg1;	// IMP=0x00000001001abab0
- (id)initWithConcurrentOperationCount:(long long)arg1;	// IMP=0x00000001001ab890
- (id)init;	// IMP=0x00000001001ab7fc

@end

