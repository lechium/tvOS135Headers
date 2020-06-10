//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class NSDictionary;

@interface MCCellularPayloadHandler : MCNewPayloadHandler
{
    NSDictionary *_setAsideDictionary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010007dde4
@property(retain, nonatomic) NSDictionary *setAsideDictionary; // @synthesize setAsideDictionary=_setAsideDictionary;
- (void)remove;	// IMP=0x000000010007dc84
- (void)unsetAside;	// IMP=0x000000010007dc08
- (void)setAside;	// IMP=0x000000010007dac4
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010007d6ac
- (id)apnDictionaryFromConfiguration:(id)arg1;	// IMP=0x000000010007d264

@end

