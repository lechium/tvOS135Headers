//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVContentPartnerKitUI/TVCKDataCollection.h>

@class ACAccount;

@interface TVPRecentUpdatesStream : TVCKDataCollection
{
    ACAccount *_appleAccount;	// 8 = 0x8
}

+ (id)collectionWithDataClient:(id)arg1 accessObject:(id)arg2;	// IMP=0x0000000100031434
+ (id)idForAppleAccount:(id)arg1;	// IMP=0x00000001000313c4
- (void).cxx_destruct;	// IMP=0x0000000100031af0
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount=_appleAccount;
- (id)concreteValueForProperty:(id)arg1;	// IMP=0x00000001000317ec
- (id)initWithDataClient:(id)arg1 appleAccount:(id)arg2;	// IMP=0x0000000100031754
- (id)initWithDataClient:(id)arg1;	// IMP=0x000000010003173c

@end

