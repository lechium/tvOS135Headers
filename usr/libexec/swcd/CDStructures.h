//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct SWCFields {
    unsigned int userApproval:2;
    unsigned int siteOrFrameworkApproval:2;
    unsigned int updating:1;
    unsigned int systemApplication:1;
    unsigned int readFromDisk:1;
    unsigned int alwaysEnabled:1;
    unsigned int commandLineAddition:1;
};

struct SWCPatternStorage {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :2;
    unsigned int :1;
    char _field1[0];
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*> *__next_;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct optional<SecTrustResultType> {
    union {
        char _field1;
        unsigned int _field2;
    } _field1;
    _Bool _field2;
};

struct optional<nw_path_status_t> {
    union {
        char __null_state_;
        int __val_;
    } ;
    _Bool __engaged_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<SWCDownloadPriority, NSURLSession *, std::__1::hash<SWCDownloadPriority>, std::__1::equal_to<SWCDownloadPriority>, std::__1::allocator<std::__1::pair<const SWCDownloadPriority, NSURLSession *>>> {
    struct __hash_table<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, std::__1::__unordered_map_hasher<SWCDownloadPriority, std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, std::__1::hash<SWCDownloadPriority>, true>, std::__1::__unordered_map_equal<SWCDownloadPriority, std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, std::__1::equal_to<SWCDownloadPriority>, true>, std::__1::allocator<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<SWCDownloadPriority, std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, std::__1::hash<SWCDownloadPriority>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<SWCDownloadPriority, std::__1::__hash_value_type<SWCDownloadPriority, NSURLSession *>, std::__1::equal_to<SWCDownloadPriority>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct optional<SecTrustResultType> {
    union {
        char _field1;
        unsigned int _field2;
    } _field1;
    _Bool _field2;
} optional_252cd4e3;
