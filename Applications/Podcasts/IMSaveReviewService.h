//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMBaseStoreService.h"

@class NSData, NSURL;

@interface IMSaveReviewService : IMBaseStoreService
{
    NSData *_bodyData;	// 8 = 0x8
    NSURL *_endpointURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001af074
@property(retain, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
- (id)urlRequest;	// IMP=0x00000001001aeea0
- (void)performDataRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001aecb4
- (id)generatedEndpointURLForBaseURL:(id)arg1;	// IMP=0x00000001001aea84
- (id)initWithEndpointURL:(id)arg1 bodyData:(id)arg2;	// IMP=0x00000001001ae8fc

@end
