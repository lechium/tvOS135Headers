//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

#import "CLDeepCopying-Protocol.h"

@class NSString;

@interface NSData (CLDeepCopying) <CLDeepCopying>
- (id)cl_deepCopy;	// IMP=0x00000001004072bc
- (id)cl_hexadecimalString;	// IMP=0x000000010045f4cc
- (id)_cl_initWithFileDescriptor:(int)arg1;	// IMP=0x0000000100536be0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

