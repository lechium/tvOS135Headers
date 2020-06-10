//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface MSDFileMetadata : NSObject
{
    NSDictionary *_dict;	// 8 = 0x8
}

+ (id)fileMetaDataWithMetadataDictionary:(id)arg1;	// IMP=0x000000010000df78
+ (id)fileMetadatatWithPath:(id)arg1;	// IMP=0x000000010000df24
+ (id)targetFileWithPath:(id)arg1;	// IMP=0x000000010000d968
+ (id)extendedAttributesWithPath:(id)arg1;	// IMP=0x000000010000d6d8
+ (id)valueForExtendedAttributesKey:(id)arg1 forPath:(id)arg2;	// IMP=0x000000010000d48c
+ (id)accessControlListWithPath:(id)arg1;	// IMP=0x000000010000d18c
+ (id)extendedAttributeKeysWithPath:(id)arg1;	// IMP=0x000000010000cea8
+ (id)fileAttributesWithPath:(id)arg1;	// IMP=0x000000010000cca8
+ (id)fileHashWithPath:(id)arg1;	// IMP=0x000000010000ca84
- (void).cxx_destruct;	// IMP=0x000000010000fd18
@property(readonly) NSDictionary *dict; // @synthesize dict=_dict;
@property(readonly, getter=getFileSize) long long fileSize;
@property(readonly, getter=getTargetFile) NSString *targetFile;
@property(readonly, getter=getFileType) NSString *fileType;
@property(readonly, getter=getAccessControlList) NSData *accessControlList;
@property(readonly, getter=getExtendedAttributes) NSDictionary *extendedAttributes;
@property(readonly, getter=getFileAttributes) NSDictionary *fileAttributes;
@property(readonly, getter=getHash) NSData *hash;
- (id)fileAttributesAllowSet:(id)arg1;	// IMP=0x000000010000f7d4
- (int)compareWith:(id)arg1;	// IMP=0x000000010000ef50
- (_Bool)restoreAttribuesToPath:(id)arg1;	// IMP=0x000000010000e240
- (_Bool)removeAllExtendedAttributes:(id)arg1;	// IMP=0x000000010000e018
- (void)dealloc;	// IMP=0x000000010000dfcc
- (id)initWithPath:(id)arg1;	// IMP=0x000000010000db54
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010000dadc

@end

