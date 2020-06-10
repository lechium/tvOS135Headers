//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CCDRequest.h"

@class MCDeviceUploadCredentials, NSDictionary, NSString;

@interface CCDDeviceUploadRequest : CCDRequest
{
    long long _requestType;	// 8 = 0x8
    MCDeviceUploadCredentials *_userCredentials;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000dec8
@property(retain, nonatomic) MCDeviceUploadCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (id)requestWithError:(id *)arg1;	// IMP=0x000000010000dbbc
- (id)_requestBodyData;	// IMP=0x000000010000da70
- (id)_endpointURL;	// IMP=0x000000010000d9a0
- (id)_requestHeader;	// IMP=0x000000010000d830
- (id)_contentType;	// IMP=0x000000010000d824
@property(readonly, nonatomic) NSDictionary *requestBody;
@property(readonly, nonatomic) NSString *httpMethod;
@property(readonly, nonatomic) NSString *endpointPath;

@end
