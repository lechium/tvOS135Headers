//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVPhotoServiceInterface-Protocol.h"

@class ICCloudClient, NSString;
@protocol NSObject, TVPhotoServerInterface;

@interface TVMusicScreenSaverService : NSObject <TVPhotoServiceInterface>
{
    id <TVPhotoServerInterface> _remotePhotoServerInterface;	// 8 = 0x8
    id <NSObject> _syncObserverToken;	// 16 = 0x10
    ICCloudClient *_iTunesCloudClient;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x000000010008c2cc
- (void).cxx_destruct;	// IMP=0x000000010008e0e0
@property(retain, nonatomic) ICCloudClient *iTunesCloudClient; // @synthesize iTunesCloudClient=_iTunesCloudClient;
@property(retain, nonatomic) id <NSObject> syncObserverToken; // @synthesize syncObserverToken=_syncObserverToken;
@property(retain, nonatomic) id <TVPhotoServerInterface> remotePhotoServerInterface; // @synthesize remotePhotoServerInterface=_remotePhotoServerInterface;
- (void)_getArtworkURLsForAlbums:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008cce0
- (void)_fetchPhotoAssetsForAlbumArtwork:(CDUnknownBlockType)arg1;	// IMP=0x000000010008c4d8
- (void)registerRemotePhotoServer:(id)arg1;	// IMP=0x000000010008c3f8
- (void)photoAssetsWithOptions:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010008c364
- (id)init;	// IMP=0x000000010008c300

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
