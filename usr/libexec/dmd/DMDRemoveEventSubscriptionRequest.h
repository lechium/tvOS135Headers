//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class CEMEventSubscriptionDeclaration, NSString;

@interface DMDRemoveEventSubscriptionRequest : DMFTaskRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
    CEMEventSubscriptionDeclaration *_subscriptionDeclaration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100065614
@property(retain, nonatomic) CEMEventSubscriptionDeclaration *subscriptionDeclaration; // @synthesize subscriptionDeclaration=_subscriptionDeclaration;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;

@end

