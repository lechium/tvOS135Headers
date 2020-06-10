//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct SOSDataSourceFactory {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct SecDbAttr;

struct SecDbClass {
    struct __CFString *_field1;
    _Bool _field2;
    struct SecDbAttr *_field3[0];
};

struct SecDbItem {
    struct __CFRuntimeBase _field1;
    struct SecDbClass *_field2;
    int _field3;
    int _field4;
    int _field5;
    struct __CFDictionary *_field6;
    struct __CFData *_field7;
    void *_field8;
    struct __CFArray *_field9;
};

struct SecurityClient {
    struct __SecTask *task;
    struct __CFArray *accessGroups;
    _Bool allowSystemKeychain;
    _Bool allowSyncBubbleKeychain;
    _Bool isNetworkExtension;
    _Bool canAccessNetworkExtensionAccessGroups;
    unsigned int uid;
    struct __CFData *musr;
    int keybag;
    _Bool inMultiUser;
    int activeUser;
};

struct __CFArray;

struct __CFData;

struct __CFDictionary;

struct __CFRuntimeBase {
    unsigned long long _field1;
    _Atomic unsigned long long _field2;
};

struct __OpaqueSOSRing {
    struct __CFRuntimeBase _field1;
    struct __CFDictionary *_field2;
    struct __CFDictionary *_field3;
    struct __CFDictionary *_field4;
    struct __CFDictionary *_field5;
};

struct __SecKey {
    struct __CFRuntimeBase _field1;
    struct __SecKeyDescriptor *_field2;
    void *_field3;
};

struct ccmode_cbc;

struct ccmode_ctr;

struct ccmode_siv {
    unsigned long long _field1;
    unsigned long long _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    struct ccmode_cbc *_field8;
    struct ccmode_ctr *_field9;
};

struct rusage_info_v4 {
    unsigned char _field1[16];
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
    unsigned long long _field25;
    unsigned long long _field26;
    unsigned long long _field27;
    unsigned long long _field28;
    unsigned long long _field29;
    unsigned long long _field30;
    unsigned long long _field31;
    unsigned long long _field32;
    unsigned long long _field33;
    unsigned long long _field34;
    unsigned long long _field35;
    unsigned long long _field36;
};

#pragma mark Typedef'd Structures

// Ambiguous groups
typedef struct {
    unsigned int keyClass:1;
} CDStruct_9ea6736c;

