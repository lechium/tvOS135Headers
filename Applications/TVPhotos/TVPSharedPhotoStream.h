//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVContentPartnerKitUI/TVCKDataCollection.h>

@class ACAccount, MSASAlbum;

@interface TVPSharedPhotoStream : TVCKDataCollection
{
    MSASAlbum *_album;	// 8 = 0x8
    ACAccount *_appleAccount;	// 16 = 0x10
}

+ (id)collectionWithDataClient:(id)arg1 album:(id)arg2 accessObject:(id)arg3;	// IMP=0x0000000100030b80
+ (id)collectionTypeForAlbum:(id)arg1;	// IMP=0x0000000100030b3c
- (void).cxx_destruct;	// IMP=0x0000000100031384
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount=_appleAccount;
@property(retain, nonatomic) MSASAlbum *album; // @synthesize album=_album;
- (id)concreteValueForProperty:(id)arg1;	// IMP=0x0000000100031124
- (id)initWithDataClient:(id)arg1 album:(id)arg2 appleAccount:(id)arg3;	// IMP=0x0000000100031058
- (id)initWithDataClient:(id)arg1;	// IMP=0x0000000100031040

@end

