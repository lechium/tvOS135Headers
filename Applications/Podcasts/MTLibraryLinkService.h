//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMBaseStoreService.h"

@class NSDictionary;

@interface MTLibraryLinkService : IMBaseStoreService
{
    NSDictionary *_requestParams;	// 8 = 0x8
}

+ (_Bool)shouldFollowRedirects;	// IMP=0x000000010017e490
- (void).cxx_destruct;	// IMP=0x000000010017ecc8
@property(retain, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
- (void)updateAdamIdForPodcast:(id)arg1 withFeedURLs:(id)arg2;	// IMP=0x000000010017e874
- (void)requestWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000010017e634
- (void)performRequest:(CDUnknownBlockType)arg1;	// IMP=0x000000010017e5c0
- (id)urlRequest;	// IMP=0x000000010017e498
- (id)init;	// IMP=0x000000010017e45c

@end

