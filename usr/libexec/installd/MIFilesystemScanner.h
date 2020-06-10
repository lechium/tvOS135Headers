//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MIFilesystemScannerDelegate;

@interface MIFilesystemScanner : NSObject
{
    id <MIFilesystemScannerDelegate> _delegate;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100022a00
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <MIFilesystemScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)performScanWithError:(id *)arg1;	// IMP=0x00000001000222e4
- (id)init;	// IMP=0x00000001000222d4
- (id)initWithScanOptions:(unsigned long long)arg1;	// IMP=0x000000010002228c
- (_Bool)_scanBundleContainersWithError:(id *)arg1 ignoredErrorOccurredOnOneOrMoreItems:(_Bool *)arg2;	// IMP=0x00000001000221e8
- (_Bool)_scanBundleContainerType:(long long)arg1 withError:(id *)arg2 ignoredErrorOccurredOnOneOrMoreItems:(_Bool *)arg3;	// IMP=0x0000000100021da8
- (_Bool)_scanFrameworksLocationsWithError:(id *)arg1;	// IMP=0x0000000100021bdc
- (_Bool)_scanFrameworkDirectory:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100021724
- (_Bool)_scanAppsDirectory:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001000211ec

@end
