//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class AAAccount;

@interface CastleRequest : AARequest
{
    AAAccount *_account;	// 8 = 0x8
}

+ (void)addHeadersToRequest:(id)arg1 forAccount:(id)arg2;	// IMP=0x000000010007cc60
- (void).cxx_destruct;	// IMP=0x000000010007d18c
@property(retain, nonatomic) AAAccount *account; // @synthesize account=_account;
- (id)urlRequest;	// IMP=0x000000010007d0b0
- (id)initWithAccount:(id)arg1 URLString:(id)arg2;	// IMP=0x000000010007d02c

@end

