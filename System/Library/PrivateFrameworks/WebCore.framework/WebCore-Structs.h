/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject<OS_dispatch_queue>;

typedef struct RetainPtr<NSData> {
	void m_ptr;
} RetainPtr<NSData>;

typedef struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
	RetainPtr<AVAssetResourceLoadingRequest> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct _cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> > {
	AC __a_value;
} cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> >;

typedef struct atomic<unsigned char> {
	cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> > __a_;
} atomic<unsigned char>;

typedef struct Atomic<unsigned char> {
	atomic<unsigned char> value;
} Atomic<unsigned char>;

typedef struct Lock {
	Atomic<unsigned char> m_byte;
} Lock;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_We6;

typedef struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > {
	WeakPtrImpl m_ptr;
} RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >;

typedef struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC> {
	RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > m_impl;
} WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC>;

typedef struct VectorBuffer<WTF::Function<void ()>, 0, WTF::FastMalloc> {
	Function<void ()> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} VectorBuffer<WTF::Function<void ()>, 0, WTF::FastMalloc>;

typedef struct Deque<WTF::Function<void ()>, 0> {
	unsigned long long m_start;
	unsigned long long m_end;
	VectorBuffer<WTF::Function<void ()>, 0, WTF::FastMalloc> m_buffer;
} Deque<WTF::Function<void ()>, 0>;

typedef struct WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer> > {
	RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > m_impl;
} WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer> >;

typedef struct WeakPtrFactory<WebCore::TaskDispatcher<WebCore::Timer> > {
	RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > m_impl;
} WeakPtrFactory<WebCore::TaskDispatcher<WebCore::Timer> >;

typedef struct TaskDispatcher<WebCore::Timer> {
	WeakPtrFactory<WebCore::TaskDispatcher<WebCore::Timer> > m_weakPtrFactory;
	Deque<WTF::Function<void ()>, 0> m_pendingTasks;
} TaskDispatcher<WebCore::Timer>;

typedef struct GenericTaskQueue<WebCore::Timer> {
	WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer> > m_weakPtrFactory;
	TaskDispatcher<WebCore::Timer> m_dispatcher;
	unsigned m_pendingTasks;
	BOOL m_isClosed;
} GenericTaskQueue<WebCore::Timer>;

typedef struct RetainPtr<AVRouteDetector> {
	void m_ptr;
} RetainPtr<AVRouteDetector>;

typedef struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::DumbPtrTraits<WebCore::PlatformSpeechSynthesisUtterance> > {
	PlatformSpeechSynthesisUtterance m_ptr;
} RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::DumbPtrTraits<WebCore::PlatformSpeechSynthesisUtterance> >;

typedef struct RetainPtr<AVSpeechSynthesizer> {
	void m_ptr;
} RetainPtr<AVSpeechSynthesizer>;

typedef struct TextMarkerData {
	unsigned axID;
	Node node;
	int offset;
	int characterStartIndex;
	int characterOffset;
	BOOL ignored;
	int affinity;
} TextMarkerData;

typedef struct CGPath* CGPathRef;

typedef struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > {
	ArchiveResource m_ptr;
} RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> >;

typedef struct CGContext* CGContextRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::DumbPtrTraits<const WebCore::SharedBuffer::DataSegment> > {
	DataSegment m_ptr;
} RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::DumbPtrTraits<const WebCore::SharedBuffer::DataSegment> >;

typedef const struct DataSegmentatomic<unsigned int>__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >AIVariant<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>, WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData>(__variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>, WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData>(__variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> >__storage_wrapper<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> >type[16C]__dummy_type)(__variant_data<WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData>(__variant_data<WTF::RetainPtr<const __CFData *> >__storage_wrapper<WTF::RetainPtr<const __CFData *> >type[8C]__dummy_type)(__variant_data<WTF::FileSystemImpl::MappedFileData>__storage_wrapper<WTF::FileSystemImpl::MappedFileData>type[16C]__dummy_type)))c* ataSegmentRef;

typedef struct CGColor* CGColorRef;

typedef struct _compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController> > {
	TileController __value_;
} compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController> >;

typedef struct unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> > {
	compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController> > __ptr_;
} unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> >;

typedef struct RetainPtr<AVPlayerLayer> {
	void m_ptr;
} RetainPtr<AVPlayerLayer>;

typedef struct CGImage* CGImageRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct RetainPtr<UIViewController> {
	void m_ptr;
} RetainPtr<UIViewController>;

typedef struct RetainPtr<UITapGestureRecognizer> {
	void m_ptr;
} RetainPtr<UITapGestureRecognizer>;

typedef struct HashTable<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >, WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >, WTF::IdentityExtractor, WTF::PtrHash<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > >, WTF::HashTraits<Ref<WTF::WeakPtrImpl> >, WTF::HashTraits<Ref<WTF::WeakPtrImpl> > > {
	Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > m_table;
} HashTable<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >, WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >, WTF::IdentityExtractor, WTF::PtrHash<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > >, WTF::HashTraits<Ref<WTF::WeakPtrImpl> >, WTF::HashTraits<Ref<WTF::WeakPtrImpl> > >;

typedef struct HashSet<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >, WTF::PtrHash<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > >, WTF::HashTraits<Ref<WTF::WeakPtrImpl> > > {
	HashTable<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >, WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >, WTF::IdentityExtractor, WTF::PtrHash<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > >, WTF::HashTraits<Ref<WTF::WeakPtrImpl> >, WTF::HashTraits<Ref<WTF::WeakPtrImpl> > > m_impl;
} HashSet<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >, WTF::PtrHash<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > >, WTF::HashTraits<Ref<WTF::WeakPtrImpl> > >;

typedef struct WeakHashSet<WebCore::MotionManagerClient> {
	HashSet<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >, WTF::PtrHash<WTF::Ref<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > >, WTF::HashTraits<Ref<WTF::WeakPtrImpl> > > m_set;
} WeakHashSet<WebCore::MotionManagerClient>;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct WKViewContext {
	/*function pointer*/void* notificationCallback;
	void notificationUserInfo;
	/*function pointer*/void* responderCallback;
	void responderUserInfo;
	/*function pointer*/void* willRemoveSubviewCallback;
	/*function pointer*/void* invalidateGStateCallback;
} WKViewContext;

typedef struct RefPtr<WebCore::PlatformMediaResourceLoader, WTF::DumbPtrTraits<WebCore::PlatformMediaResourceLoader> > {
	PlatformMediaResourceLoader m_ptr;
} RefPtr<WebCore::PlatformMediaResourceLoader, WTF::DumbPtrTraits<WebCore::PlatformMediaResourceLoader> >;

typedef struct RetainPtr<id<NSURLSessionDelegate> > {
	void m_ptr;
} RetainPtr<id<NSURLSessionDelegate> >;

typedef struct RetainPtr<NSOperationQueue> {
	void m_ptr;
} RetainPtr<NSOperationQueue>;

typedef struct RetainPtr<NSString> {
	void m_ptr;
} RetainPtr<NSString>;

typedef struct HashTable<WTF::RetainPtr<const void *>, WTF::RetainPtr<const void *>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> > > {
	RetainPtr<const void *> m_table;
} HashTable<WTF::RetainPtr<const void *>, WTF::RetainPtr<const void *>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> > >;

typedef struct HashSet<WTF::RetainPtr<const void *>, WTF::PtrHash<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> > > {
	HashTable<WTF::RetainPtr<const void *>, WTF::RetainPtr<const void *>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> > > m_impl;
} HashSet<WTF::RetainPtr<const void *>, WTF::PtrHash<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> > >;

typedef struct HashTable<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > > {
	RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > m_table;
} HashTable<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > >;

typedef struct HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::PtrHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > > {
	HashTable<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > > m_impl;
} HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::PtrHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > >;

typedef struct OSObjectPtr<NSObject<OS_dispatch_queue> *> {
	NSObject<OS_dispatch_queue>* m_ptr;
} OSObjectPtr<NSObject<OS_dispatch_queue> *>;

typedef struct RefPtr<WebCore::PlatformMediaResource, WTF::DumbPtrTraits<WebCore::PlatformMediaResource> > {
	PlatformMediaResource m_ptr;
} RefPtr<WebCore::PlatformMediaResource, WTF::DumbPtrTraits<WebCore::PlatformMediaResource> >;

typedef struct RetainPtr<NSURLResponse> {
	void m_ptr;
} RetainPtr<NSURLResponse>;

typedef struct _cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > {
	AB __a_value;
} cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >;

typedef struct atomic<bool> {
	cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > __a_;
} atomic<bool>;

typedef struct Atomic<bool> {
	atomic<bool> value;
} Atomic<bool>;

typedef struct Condition {
	Atomic<bool> m_hasWaiters;
} Condition;

typedef struct BinarySemaphore {
	BOOL m_isSet;
	Lock m_lock;
	Condition m_condition;
} BinarySemaphore;

typedef struct RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::DumbPtrTraits<WebCore::SynchronousLoaderMessageQueue> > {
	SynchronousLoaderMessageQueue m_ptr;
} RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::DumbPtrTraits<WebCore::SynchronousLoaderMessageQueue> >;

typedef struct RetainPtr<NSURLRequest> {
	void m_ptr;
} RetainPtr<NSURLRequest>;

typedef struct RetainPtr<NSCachedURLResponse> {
	void m_ptr;
} RetainPtr<NSCachedURLResponse>;

typedef struct HashTable<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > >, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > {
	RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > m_table;
} HashTable<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > >, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > >;

typedef struct HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > {
	HashTable<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > >, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > m_impl;
} HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > >;

typedef struct Optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > > {
	BOOL init_;
	storage_t<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > > storage_;
	unsigned char dummy_;
	HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > >) value_;
} Optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > >;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct OpaqueJSContext* OpaqueJSContextRef;
