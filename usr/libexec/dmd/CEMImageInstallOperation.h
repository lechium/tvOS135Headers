//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATOperation.h>

#import "DMDRemoteAssetResolutionContext-Protocol.h"

@class CEMAssetBaseDescriptor, CEMAssetBaseReference, CEMImageDeclaration, NSString;
@protocol DMDRemoteAssetResolver;

@interface CEMImageInstallOperation : CATOperation <DMDRemoteAssetResolutionContext>
{
    CEMImageDeclaration *_imageDeclaration;	// 8 = 0x8
    id <DMDRemoteAssetResolver> _resolver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100007fd0
@property(retain, nonatomic) id <DMDRemoteAssetResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) CEMImageDeclaration *imageDeclaration; // @synthesize imageDeclaration=_imageDeclaration;
- (void)assetResolutionFailedWithError:(id)arg1;	// IMP=0x0000000100007f34
- (void)assetResolutionDidSucceedWithAssetURL:(id)arg1;	// IMP=0x0000000100007c64
@property(readonly, copy, nonatomic) CEMAssetBaseReference *assetReference;
@property(readonly, copy, nonatomic) CEMAssetBaseDescriptor *assetDescriptor;
@property(readonly, copy, nonatomic) NSString *assetIdentifier;
- (void)main;	// IMP=0x0000000100007a88
- (_Bool)isAsynchronous;	// IMP=0x0000000100007a80
- (id)initWithImageDeclaration:(id)arg1 resolver:(id)arg2;	// IMP=0x00000001000079cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

