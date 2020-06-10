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

+ (id)fileMetaDataWithMetadataDictionary:(id)arg1;	// IMP=0x0000000100007280
+ (id)fileMetadatatWithPath:(id)arg1;	// IMP=0x000000010000722c
+ (id)targetFileWithPath:(id)arg1;	// IMP=0x0000000100006c70
+ (id)extendedAttributesWithPath:(id)arg1;	// IMP=0x00000001000069e0
+ (id)valueForExtendedAttributesKey:(id)arg1 forPath:(id)arg2;	// IMP=0x0000000100006794
+ (id)accessControlListWithPath:(id)arg1;	// IMP=0x0000000100006494
+ (id)extendedAttributeKeysWithPath:(id)arg1;	// IMP=0x00000001000061b0
+ (id)fileAttributesWithPath:(id)arg1;	// IMP=0x0000000100005fb0
+ (id)fileHashWithPath:(id)arg1;	// IMP=0x0000000100005d8c
- (void).cxx_destruct;	// IMP=0x0000000100009020
@property(readonly) NSDictionary *dict; // @synthesize dict=_dict;
@property(readonly, getter=getFileSize) long long fileSize;
@property(readonly, getter=getTargetFile) NSString *targetFile;
@property(readonly, getter=getFileType) NSString *fileType;
@property(readonly, getter=getAccessControlList) NSData *accessControlList;
@property(readonly, getter=getExtendedAttributes) NSDictionary *extendedAttributes;
@property(readonly, getter=getFileAttributes) NSDictionary *fileAttributes;
@property(readonly, getter=getHash) NSData *hash;
- (id)fileAttributesAllowSet:(id)arg1;	// IMP=0x0000000100008adc
- (int)compareWith:(id)arg1;	// IMP=0x0000000100008258
- (_Bool)restoreAttribuesToPath:(id)arg1;	// IMP=0x0000000100007548
- (_Bool)removeAllExtendedAttributes:(id)arg1;	// IMP=0x0000000100007320
- (void)dealloc;	// IMP=0x00000001000072d4
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100006e5c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100006de4

@end

