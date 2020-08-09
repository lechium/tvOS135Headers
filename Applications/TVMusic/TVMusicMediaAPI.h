//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBag, AMSMediaRequestEncoder, AMSURLSession, NSString;

@interface TVMusicMediaAPI : NSObject
{
    AMSBag *_mediaAPIBag;	// 8 = 0x8
    AMSBag *_musicBag;	// 16 = 0x10
    AMSURLSession *_urlSession;	// 24 = 0x18
    AMSMediaRequestEncoder *_requestEncoder;	// 32 = 0x20
    NSString *_mediaAPIHostName;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010008b56c
- (void).cxx_destruct;	// IMP=0x000000010008c204
@property(copy) NSString *mediaAPIHostName; // @synthesize mediaAPIHostName=_mediaAPIHostName;
@property(retain, nonatomic) AMSMediaRequestEncoder *requestEncoder; // @synthesize requestEncoder=_requestEncoder;
@property(retain, nonatomic) AMSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) AMSBag *musicBag; // @synthesize musicBag=_musicBag;
@property(retain, nonatomic) AMSBag *mediaAPIBag; // @synthesize mediaAPIBag=_mediaAPIBag;
- (void)_performRequestWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008bd44
- (void)_urlWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008ba5c
- (void)performRequestWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008b8ac
- (id)init;	// IMP=0x000000010008b5d8

@end
