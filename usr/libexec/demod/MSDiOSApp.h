//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MSDiOSApp : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSDictionary *_info;	// 16 = 0x10
}

+ (id)appWithPath:(id)arg1;	// IMP=0x0000000100015e00
- (void).cxx_destruct;	// IMP=0x00000001000169bc
@property(retain) NSDictionary *info; // @synthesize info=_info;
@property(retain) NSString *path; // @synthesize path=_path;
- (id)versionInfo;	// IMP=0x000000010001675c
- (id)uniqueIdentifier;	// IMP=0x0000000100016194
- (void)dealloc;	// IMP=0x0000000100016130
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100015e54

@end

