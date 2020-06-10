//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDProgressUpdater, NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface MSDManifest : NSObject
{
    NSMutableDictionary *_dict;	// 8 = 0x8
    NSString *_rootPath;	// 16 = 0x10
    MSDProgressUpdater *_progressUpdater;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000237f8
@property(retain) MSDProgressUpdater *progressUpdater; // @synthesize progressUpdater=_progressUpdater;
@property(retain) NSDictionary *dict; // @synthesize dict=_dict;
@property(retain) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(readonly, getter=pathSet) NSSet *pathSet;
- (_Bool)enumerateAndCollectMetaData:(id)arg1 relativeTo:(id)arg2 skip:(id)arg3 superSet:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100022aac
- (_Bool)path:(id)arg1 inSuperSet:(id)arg2;	// IMP=0x0000000100022900
- (_Bool)addFilesFromPath:(id)arg1 relativeTo:(id)arg2 skip:(id)arg3 superSet:(id)arg4;	// IMP=0x00000001000227d0
- (_Bool)addFilesFromPath:(id)arg1 relativeTo:(id)arg2 skip:(id)arg3;	// IMP=0x0000000100022754
- (_Bool)folder:(id)arg1 contains:(id)arg2;	// IMP=0x0000000100022540
- (void)setMetadata:(id)arg1 forFile:(id)arg2;	// IMP=0x00000001000224b0
- (id)metadataForFile:(id)arg1;	// IMP=0x0000000100022428
- (void)dealloc;	// IMP=0x00000001000223c4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100022320
- (id)init;	// IMP=0x0000000100022294

@end

