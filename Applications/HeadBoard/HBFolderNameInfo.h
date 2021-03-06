//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HBFolderNameInfo : NSObject
{
    NSArray *_folderNames;	// 8 = 0x8
    NSString *_fallbackFolderName;	// 16 = 0x10
}

+ (id)localizedDefaultFolderName;	// IMP=0x0000000100036158
+ (id)proposedFolderNameWithTargetFolderNameInfo:(id)arg1 editingFolderNameInfo:(id)arg2;	// IMP=0x0000000100035ef4
- (void).cxx_destruct;	// IMP=0x0000000100036204
@property(readonly, nonatomic) NSString *fallbackFolderName; // @synthesize fallbackFolderName=_fallbackFolderName;
@property(readonly, nonatomic) NSArray *folderNames; // @synthesize folderNames=_folderNames;
- (id)description;	// IMP=0x0000000100035df4
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100035d94
- (id)initWithApplicationProxy:(id)arg1;	// IMP=0x0000000100035740

@end

