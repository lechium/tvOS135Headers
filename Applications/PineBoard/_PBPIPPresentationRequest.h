//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PBPIPContainerViewControllerLayout;

@interface _PBPIPPresentationRequest : NSObject
{
    PBPIPContainerViewControllerLayout *_layout;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001528a8
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) PBPIPContainerViewControllerLayout *layout; // @synthesize layout=_layout;
- (id)initWithLayout:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001001526c8

@end
