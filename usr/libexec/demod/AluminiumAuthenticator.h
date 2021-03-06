//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSSet;

@interface AluminiumAuthenticator : NSObject
{
    NSData *_key;	// 8 = 0x8
    NSSet *_defaultIncludedHeaders;	// 16 = 0x10
    unsigned int _defaultAlgorithm;	// 24 = 0x18
}

+ (id)_defaultIncludedHeaders;	// IMP=0x00000001000114a0
- (void).cxx_destruct;	// IMP=0x0000000100012d04
@property(nonatomic) unsigned int defaultAlgorithm; // @synthesize defaultAlgorithm=_defaultAlgorithm;
@property(copy, nonatomic) NSSet *defaultIncludedHeaders; // @synthesize defaultIncludedHeaders=_defaultIncludedHeaders;
- (_Bool)verifyAuthenticationWithRequest:(struct __CFHTTPMessage *)arg1 includedHeaders:(id)arg2 algorithm:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x000000010001218c
- (_Bool)verifyAuthenticationWithRequest:(struct __CFHTTPMessage *)arg1 error:(id *)arg2;	// IMP=0x0000000100012174
- (_Bool)addAuthenticationHeadersToRequest:(id)arg1 includedHeaders:(id)arg2 body:(id)arg3 algorithm:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x000000010001173c
- (_Bool)addAuthenticationHeadersToRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100011720
- (id)initWithASCIIEncodedKey:(id)arg1;	// IMP=0x0000000100011628
- (id)initWithHexEncodedKey:(id)arg1;	// IMP=0x0000000100011534

@end

