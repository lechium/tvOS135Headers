//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSKeySetContainerProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class CKKSCurrentKeySet, NSString;

@protocol CKKSKeySetProviderOperationProtocol <NSObject, CKKSKeySetContainerProtocol>
@property(retain) NSString *zoneName;
- (void)provideKeySet:(CKKSCurrentKeySet *)arg1;
@end

