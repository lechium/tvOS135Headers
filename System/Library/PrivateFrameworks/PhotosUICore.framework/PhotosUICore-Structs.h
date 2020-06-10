/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct PXSimpleIndexPath {
	unsigned long long dataSourceIdentifier;
	long long section;
	long long item;
	long long subitem;
} PXSimpleIndexPath;

typedef struct _NSZone* NSZoneRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_PX6;

typedef struct {
	SCD_Struct_PX6 field1;
	SCD_Struct_PX6 field2;
} SCD_Struct_PX7;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_PX8;

typedef struct {
	SCD_Struct_PX8 start;
	SCD_Struct_PX8 duration;
} SCD_Struct_PX9;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct PXTileGeometry {
	CGRect frame;
	CGPoint center;
	CGSize size;
	CGAffineTransform transform;
	double alpha;
	double zPosition;
	BOOL hidden;
	CGSize contentSize;
	CGRect contentsRect;
	void coordinateSpaceIdentifier;
} PXTileGeometry;

typedef struct {
	double field1;
	double field2;
	float field3;
} SCD_Struct_PX12;

typedef struct {
	SCD_Struct_PX12 field1;
} SCD_Struct_PX13;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_PX14;

typedef struct {
	/*function pointer*/void* field1;
	= field2;
	SCD_Struct_PX14 field3;
	float field4[4];
} SCD_Struct_PX15;

typedef struct {
	float field1;
	SCD_Struct_PX15 field2;
	float field3;
	unsigned short field4;
	unsigned short field5;
	unsigned char field6;
} SCD_Struct_PX16;

typedef struct {
	int field1;
	int field2;
	float field3;
	long long field4;
	unsigned short field5;
	unsigned char field6;
} SCD_Struct_PX17;

typedef struct PXDisplayVelocity {
	double x;
	double y;
	double scale;
	double rotation;
} PXDisplayVelocity;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGImage* CGImageRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	long long field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	unsigned long long field5;
	BOOL field6;
	BOOL field7;
	CGRect field8;
} SCD_Struct_PX22;

typedef struct {
	long long scrollRegime;
	BOOL isAnimatingScroll;
	BOOL isScrubbing;
	BOOL isAnimatingContent;
	unsigned long long zoomBehavior;
	BOOL isViewBoundsChanging;
	BOOL isInitialLoad;
	CGRect targetRect;
} SCD_Struct_PX23;

typedef struct {
	unsigned long long field1;
	unsigned short field2;
	unsigned short field3;
} SCD_Struct_PX24;

typedef struct __CFString* CFStringRef;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	long long field4;
} SCD_Struct_PX26;

typedef struct {
	CGRect field1;
	BOOL field2;
	SCD_Struct_PX26 field3;
} SCD_Struct_PX27;

typedef struct {
	long long contentSizeCategory;
	long long layoutDirection;
	long long layoutSizeClass;
	long long layoutOrientation;
} SCD_Struct_PX28;

typedef struct {
	CGRect layoutRect;
	BOOL onlyCalculateSize;
	SCD_Struct_PX28 layoutAttributes;
} SCD_Struct_PX29;

typedef struct {
	CGRect field1;
	BOOL field2;
	SCD_Struct_PX28 field3;
} SCD_Struct_PX30;

typedef struct {
	CGAffineTransform field1;
	double field2;
} SCD_Struct_PX31;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	int field1;
	unsigned long long field2;
	id field3;
	id field4;
} SCD_Struct_PX33;

typedef struct {
	id field1;
	_ field2;
	NSRange field3;
	float field4;
	int field5;
	unsigned char field6;
} SCD_Struct_PX34;

typedef struct {
	[4 field1];
} SCD_Struct_PX35;

typedef struct {
	SCD_Struct_PX35 field1;
	SCD_Struct_PX35 field2;
	SCD_Struct_PX35 field3;
	SCD_Struct_PX35 field4;
	float field5;
} SCD_Struct_PX36;

typedef struct {
	BOOL priorityForInfoRequestOfKind;
} SCD_Struct_PX37;

typedef struct CGContext* CGContextRef;

typedef const struct __CTFramesetter* CTFramesetterRef;

typedef const struct __CTFrame* CTFrameRef;

typedef const struct __CTLine* CTLineRef;

typedef const struct CGPath* CGPathRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_PX43;

typedef struct {
	BOOL containerTitle;
	BOOL localizedContainerItemsCount;
	BOOL containerDateInterval;
	BOOL visibleContentSnapshot;
	BOOL selectionSnapshot;
	BOOL filteringContainerContent;
	BOOL useAssetImportDate;
} SCD_Struct_PX44;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	SCD_Struct_PX35 viewMatrix;
	SCD_Struct_PX35 projectionMatrix;
	SCD_Struct_PX35 viewProjectionMatrix;
	SCD_Struct_PX35 billboardMatrix;
	 renderOrigin;
	float screenScale;
} SCD_Struct_PX46;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_PX47;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
} SCD_Struct_PX48;

typedef struct PXCornerSpriteIndexes {
	unsigned topLeft;
	unsigned topRight;
	unsigned bottomLeft;
	unsigned bottomRight;
} PXCornerSpriteIndexes;

typedef struct CGColor* CGColorRef;

typedef struct {
	double field1[6];
	double field2[6];
	long long field3[6];
	double field4[6];
	double field5[6];
} SCD_Struct_PX51;

typedef struct {
	long long field1;
	double field2;
} SCD_Struct_PX52;

typedef struct {
	BOOL validateNewText;
	BOOL didEndEditing;
} SCD_Struct_PX53;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true>, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true>, std::__1::allocator<std::__1::__hash_value_type<PXTileIdentifier, unsigned long> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true>, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true>, std::__1::allocator<std::__1::__hash_value_type<PXTileIdentifier, unsigned long> > >;

typedef struct unordered_map<PXTileIdentifier, unsigned long, std::__1::hash<PXTileIdentifier>, std::__1::equal_to<PXTileIdentifier>, std::__1::allocator<std::__1::pair<const PXTileIdentifier, unsigned long> > > {
	hash_table<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true>, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true>, std::__1::allocator<std::__1::__hash_value_type<PXTileIdentifier, unsigned long> > > __table_;
} unordered_map<PXTileIdentifier, unsigned long, std::__1::hash<PXTileIdentifier>, std::__1::equal_to<PXTileIdentifier>, std::__1::allocator<std::__1::pair<const PXTileIdentifier, unsigned long> > >;

typedef struct {
	BOOL field1;
	CGPoint field2;
} SCD_Struct_PX64;

typedef struct PXFaceTileImageParams {
	CGSize targetSize;
	unsigned long long cropFactor;
	unsigned long long style;
	BOOL cropBounded;
} PXFaceTileImageParams;

typedef struct {
	BOOL isPlaceholderEntryAtIndexPath;
	BOOL fontNameForEntryAtIndexPath;
	BOOL contentsRectForItemAtIndexPathForAspectRatio;
} SCD_Struct_PX66;

typedef struct PXGSpriteIndexRange {
	unsigned location;
	unsigned length;
} PXGSpriteIndexRange;

typedef struct {
	CGPoint field1;
	CLLocationCoordinate2D field2;
} SCD_Struct_PX68;

typedef struct {
	CGPoint field1;
	double field2;
	double field3;
	CGRect field4;
} SCD_Struct_PX69;

typedef struct {
	long long zoomLevel;
	long long scrollRegime;
} SCD_Struct_PX70;

typedef struct PXTileInfo {
	long long index;
	CGSize imageSize;
	CGSize minimumSize;
	BOOL hasCaption;
	BOOL hasLikes;
	long long commentCount;
	BOOL isBatchStart;
} PXTileInfo;

typedef struct {
	BOOL containingFrameInCoordinateSpace;
	BOOL preferredContainerView;
	BOOL preferredAnimation;
	BOOL shouldPassthroughPointInCoordinateSpace;
	BOOL wasTapped;
	BOOL wasDiscarded;
	BOOL didAppear;
	BOOL didDisappear;
} SCD_Struct_PX72;

typedef struct PXContextualNotificationVisualState {
	BOOL onscreen;
	CGRect containingFrame;
	double verticalOffset;
	double alpha;
} PXContextualNotificationVisualState;

typedef struct {
	float topLeft;
	float topRight;
	float bottomLeft;
	float bottomRight;
} SCD_Struct_PX74;

typedef struct {
	/*function pointer*/void* ;
	SCD_Struct_PX74 ;
	float byIndex[4];
} SCD_Struct_PX75;

typedef struct {
	/*function pointer*/void* field1;
	= field2;
	SCD_Struct_PX7 field3;
	4 field4;
	float field5[4];
} SCD_Struct_PX76;

typedef struct {
	float field1;
	SCD_Struct_PX7 field2;
	5 field3;
	float field4;
	unsigned short field5;
	unsigned short field6;
	unsigned char field7;
} SCD_Struct_PX77;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGColorConversionInfo* CGColorConversionInfoRef;

typedef struct {
	long long field1;
	long long field2;
	unsigned long long field3;
	double field4;
	double field5;
} SCD_Struct_PX80;

typedef struct {
	CGPoint field1;
	double field2;
	CGPoint field3;
	double field4;
	double field5;
	double field6;
	long long field7;
	double field8;
} SCD_Struct_PX81;

typedef struct {
	unsigned long long count;
	long long type;
} SCD_Struct_PX82;

typedef struct {
	CGPoint normalizedInitialPosition;
	double normalizedInitialPinchDistance;
	CGPoint normalizedPosition;
	double initialScale;
	double scale;
	double scaleVelocity;
	long long events;
	double lastEventTime;
} SCD_Struct_PX83;

typedef struct {
	CGPoint normalizedScaleCenter;
	double scale;
	double scaleVelocity;
	long long columns;
	long long columnIndex;
	double normalizedColumnWidth;
	BOOL isAnimating;
	BOOL isInteractive;
	long long fromColumnIndex;
	long long toColumnIndex;
	double interactiveProgress;
	double animatedProgress;
	double stickyHeaderOpacity;
} SCD_Struct_PX84;

typedef struct {
	CGPoint field1;
	double field2;
	double field3;
	long long field4;
	long long field5;
	double field6;
	BOOL field7;
	BOOL field8;
	long long field9;
	long long field10;
	double field11;
	double field12;
	double field13;
} SCD_Struct_PX85;

typedef struct {
	CGPoint field1;
	unsigned short field2;
	CGSize field3;
	CGSize field4;
	SCD_Struct_PX31 field5;
	double field6;
} SCD_Struct_PX86;

typedef struct {
	void field1;
	void field2;
} SCD_Struct_PX87;

typedef const struct __CFArray* CFArrayRef;

typedef struct {
	double minValue;
	double maxValue;
	double totalValue;
	unsigned long long count;
} SCD_Struct_PX89;

typedef struct {
	BOOL setTitle;
	BOOL setSubtitle;
	BOOL setAttributedTitle;
	BOOL defaultAttributes;
	BOOL emphasizedAttributes;
} SCD_Struct_PX90;

typedef struct {
	unsigned field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
} SCD_Struct_PX91;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
} SCD_Struct_PX92;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	double field4;
} SCD_Struct_PX94;

typedef struct {
	long long field1;
	float field2;
} SCD_Struct_PX95;

typedef struct {
	CGRect field1;
	float field2;
	BOOL field3;
} SCD_Struct_PX96;

typedef struct PXValueAnimationSpec {
	long long type;
	double duration;
	long long curve;
	double epsilon;
	double stiffness;
	double dampingRatio;
	double initialVelocity;
} PXValueAnimationSpec;

typedef struct PXAssetBadgeInfo {
	unsigned long long badges;
	double duration;
	long long count;
} PXAssetBadgeInfo;

typedef struct PXTileIdentifier {
	unsigned long long length;
	unsigned long long index[10];
} PXTileIdentifier;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
} SCD_Struct_PX100;

typedef struct {
	double x;
	double y;
	float z;
} SCD_Struct_PX101;

typedef struct {
	SCD_Struct_PX101 center;
	 size;
} SCD_Struct_PX102;

typedef struct {
	unsigned spriteIndex;
	double paddedDistance;
	double unpaddedDistance;
	SCD_Struct_PX102 geometry;
} SCD_Struct_PX103;

typedef struct {
	unsigned field1;
	double field2;
	double field3;
	SCD_Struct_PX102 field4;
} SCD_Struct_PX104;

typedef struct __CVMetalTextureCache* CVMetalTextureCacheRef;

typedef struct {
	int field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_PX106;

typedef struct {
	long long field1;
	long long field2;
	BOOL field3;
} SCD_Struct_PX107;

typedef struct {
	int field1;
	unsigned field2;
} SCD_Struct_PX108;

typedef struct LayoutContext {
	UIEdgeInsets contentInsets;
	CGSize itemSize;
	CGSize interitemSpacing;
	CGSize size;
	unsigned long long numberOfColumns;
	unsigned long long numberOfRows;
	long long layoutAxis;
} LayoutContext;

typedef struct PXGEngineScrollState {
	CGSize referenceSize;
	UIEdgeInsets contentInsets;
	CGRect visibleRect;
	CGRect targetRect;
	CGRect constrainedVisibleRect;
	CGPoint lastScrollDirection;
} PXGEngineScrollState;

typedef struct {
	SCD_Struct_PX47 field1;
	SCD_Struct_PX47 field2;
	SCD_Struct_PX47 field3;
	SCD_Struct_PX47 field4;
	SCD_Struct_PX47 field5;
	SCD_Struct_PX47 field6;
	SCD_Struct_PX47 field7;
	SCD_Struct_PX47 field8;
	SCD_Struct_PX47 field9;
	SCD_Struct_PX47 field10;
	SCD_Struct_PX47 field11;
	SCD_Struct_PX47 field12;
	SCD_Struct_PX47 field13;
	SCD_Struct_PX47 field14;
	SCD_Struct_PX47 field15;
	SCD_Struct_PX47 field16;
	SCD_Struct_PX101 field17;
	SCD_Struct_PX101 field18;
	unsigned short field19;
	unsigned char field20;
} SCD_Struct_PX111;

typedef struct {
	long long field1;
	double field2;
	double field3;
	float field4;
	SCD_Struct_PX7 field5;
	4 field6;
	void field7;
	void field8;
	void field9;
} SCD_Struct_PX112;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::hash<int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::hash<int>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::equal_to<int>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::equal_to<int>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, PXGRequestDetails> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, PXGRequestDetails>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::hash<int>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::equal_to<int>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, PXGRequestDetails> > >;

typedef struct unordered_map<int, PXGRequestDetails, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, PXGRequestDetails> > > {
	hash_table<std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, PXGRequestDetails>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, PXGRequestDetails> > > __table_;
} unordered_map<int, PXGRequestDetails, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, PXGRequestDetails> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::hash<int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::hash<int>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::equal_to<int>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::equal_to<int>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<int, unsigned int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, unsigned int> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::hash<int>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::equal_to<int>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<int, unsigned int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, unsigned int> > >;

typedef struct unordered_map<int, unsigned int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, unsigned int> > > {
	hash_table<std::__1::__hash_value_type<int, unsigned int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, unsigned int> > > __table_;
} unordered_map<int, unsigned int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, unsigned int> > >;

typedef struct {
	int field1;
	int field2;
	int field3;
	unsigned short field4;
	void field5;
	unsigned field6;
	void field7;
	unsigned field8;
	unsigned field9;
} SCD_Struct_PX133;

typedef struct {
	int field1;
} SCD_Struct_PX134;

typedef struct {
	unsigned long long pixelFormat;
	unsigned short width;
	unsigned short height;
} SCD_Struct_PX135;

typedef struct PXAlphaLayer {
	long long columnIndex;
	long long columns;
	double itemWidth;
	PXAlphaTransitionInfo leftTransition;
	PXAlphaTransitionInfo rightTransition;
} PXAlphaLayer;

typedef struct PXAlphaTransitionInfo {
	double fadeRangeMin;
	double fadeRangeMax;
	double autoFadeLeftValue;
	double autoFadeRightValue;
	PXAlphaLayer leftLayer;
	PXAlphaLayer rightLayer;
} PXAlphaTransitionInfo;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_PX138;

typedef struct {
	unsigned long long photosCount;
	unsigned long long videosCount;
	unsigned long long othersCount;
} SCD_Struct_PX139;

typedef struct PHAssetResourceTableDataSpecification {
	int width;
	int height;
	int bytesPerRow;
	int dataWidth;
	int dataHeight;
	int imageDataOffset;
} PHAssetResourceTableDataSpecification;

typedef struct {
	BOOL isSelectingAssets;
	BOOL visibleAssetCollections;
	BOOL willTransitionFromZoomLevelToZoomLevel;
	BOOL didTransitionFromZoomLevelToZoomLevel;
	BOOL dominantAssetCollectionReferenceForZoomLevel;
	BOOL transitionTypeFromZoomLevelToZoomLevel;
} SCD_Struct_PX141;

typedef struct {
	SCD_Struct_PX7 field1;
	SCD_Struct_PX17 field2;
	7 field3;
	SCD_Struct_PX102 field4;
} SCD_Struct_PX142;

