//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;

@interface GKAccount : NSObject
{
    ACAccount *_internalAccount;	// 8 = 0x8
}

@property(readonly, retain, nonatomic) ACAccount *internalAccount; // @synthesize internalAccount=_internalAccount;
- (_Bool)isEnabledForDataClass:(id)arg1;	// IMP=0x00000001001286a0
@property(readonly, retain, nonatomic) NSString *authToken; // @dynamic authToken;
@property(readonly, retain, nonatomic) NSString *username; // @dynamic username;
@property(readonly, retain, nonatomic) NSString *personID; // @dynamic personID;
- (void)dealloc;	// IMP=0x0000000100128628
- (id)initWithInternalAccount:(id)arg1;	// IMP=0x00000001001285d0

@end

