//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SASBoardServicesConfiguration : NSObject
{
    NSString *_machServiceIdentifier;	// 8 = 0x8
    NSString *_presentationDomain;	// 16 = 0x10
    NSString *_presentationIdentifier;	// 24 = 0x18
    NSString *_signalDomain;	// 32 = 0x20
    NSString *_signalIdentifier;	// 40 = 0x28
}

+ (id)configuration;	// IMP=0x00000001000754d0
+ (id)new;	// IMP=0x00000001000754c8
- (void).cxx_destruct;	// IMP=0x000000010007563c
@property(retain, nonatomic) NSString *signalIdentifier; // @synthesize signalIdentifier=_signalIdentifier;
@property(retain, nonatomic) NSString *signalDomain; // @synthesize signalDomain=_signalDomain;
@property(retain, nonatomic) NSString *presentationIdentifier; // @synthesize presentationIdentifier=_presentationIdentifier;
@property(retain, nonatomic) NSString *presentationDomain; // @synthesize presentationDomain=_presentationDomain;
@property(retain, nonatomic) NSString *machServiceIdentifier; // @synthesize machServiceIdentifier=_machServiceIdentifier;
- (id)identifierForService:(long long)arg1;	// IMP=0x0000000100075590
- (id)domainForService:(long long)arg1;	// IMP=0x0000000100075548
- (id)init;	// IMP=0x00000001000754b0
- (id)_init;	// IMP=0x00000001000753f0

@end
