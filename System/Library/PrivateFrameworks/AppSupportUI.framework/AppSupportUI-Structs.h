/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class <_NUIGridArrangementContainer>, <_NUIBoxArrangementContainer>, <_NUIFlowArrangementContainer>;

typedef struct _compressed_pair<std::__1::pair<CGSize, CGSize> *, std::__1::allocator<std::__1::pair<CGSize, CGSize> > > {
	pair<CGSize, CGSize> __value_;
} compressed_pair<std::__1::pair<CGSize, CGSize> *, std::__1::allocator<std::__1::pair<CGSize, CGSize> > >;

typedef struct nui_size_cache {
	pair<CGSize, CGSize> __begin_;
	pair<CGSize, CGSize> __end_;
	compressed_pair<std::__1::pair<CGSize, CGSize> *, std::__1::allocator<std::__1::pair<CGSize, CGSize> > > __end_cap_;
} nui_size_cache;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::less<UIView *>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::less<UIView *>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, void *> > >;

typedef struct _tree<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::less<UIView *>, true> > __pair3_;
} tree<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview> > >;

typedef struct map<UIView *, _NUIContainerViewArrangedSubview, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, _NUIContainerViewArrangedSubview> > > {
	tree<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview> > > __tree_;
} map<UIView *, _NUIContainerViewArrangedSubview, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, _NUIContainerViewArrangedSubview> > >;

typedef struct _compressed_pair<CALayer **, std::__1::allocator<CALayer *> > {
	id __value_;
} compressed_pair<CALayer **, std::__1::allocator<CALayer *> >;

typedef struct vector<CALayer *, std::__1::allocator<CALayer *> > {
	id __begin_;
	id __end_;
	compressed_pair<CALayer **, std::__1::allocator<CALayer *> > __end_cap_;
} vector<CALayer *, std::__1::allocator<CALayer *> >;

typedef struct _compressed_pair<CGRect *, std::__1::allocator<CGRect> > {
	CGRect __value_;
} compressed_pair<CGRect *, std::__1::allocator<CGRect> >;

typedef struct vector<CGRect, std::__1::allocator<CGRect> > {
	CGRect __begin_;
	CGRect __end_;
	compressed_pair<CGRect *, std::__1::allocator<CGRect> > __end_cap_;
} vector<CGRect, std::__1::allocator<CGRect> >;

typedef struct _compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > {
	_NUIGridArrangementDimension __value_;
} compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> >;

typedef struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > {
	_NUIGridArrangementDimension __begin_;
	_NUIGridArrangementDimension __end_;
	compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > __end_cap_;
} vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> >;

typedef struct _compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > {
	_NUIGridArrangementCell __value_;
} compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> >;

typedef struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > {
	_NUIGridArrangementCell __begin_;
	_NUIGridArrangementCell __end_;
	compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > __end_cap_;
} vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >;

typedef struct NUIGridArrangement {
	<_NUIGridArrangementContainer>* container;
	unsigned horzDist : 8;
	unsigned vertDist : 8;
	BOOL baselineRelative;
	BOOL hasValidMeasurement;
	vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > cells;
	vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > columns;
	vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > rows;
	vector<CGRect, std::__1::allocator<CGRect> > viewFrames;
} NUIGridArrangement;

typedef struct {
	unsigned short width;
	unsigned short height;
} SCD_Struct_NU18;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::less<UIView *>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::less<UIView *>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> > >;

typedef struct _tree<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> > > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::less<UIView *>, true> > __pair3_;
} tree<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> > > >;

typedef struct map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange> > > > {
	tree<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> > > > __tree_;
} map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange> > > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, double>, std::__1::less<UIView *>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, double>, std::__1::less<UIView *>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, double>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, double>, void *> > >;

typedef struct _tree<std::__1::__value_type<UIView *, double>, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, double>, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, double> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, double>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, double>, std::__1::less<UIView *>, true> > __pair3_;
} tree<std::__1::__value_type<UIView *, double>, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, double>, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, double> > >;

typedef struct map<UIView *, double, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, double> > > {
	tree<std::__1::__value_type<UIView *, double>, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, double>, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, double> > > __tree_;
} map<UIView *, double, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, double> > >;

typedef struct _compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell> > {
	_NUIBoxArrangementCell __value_;
} compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell> >;

typedef struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell> > {
	_NUIBoxArrangementCell __begin_;
	_NUIBoxArrangementCell __end_;
	compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell> > __end_cap_;
} vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell> >;

typedef struct NUIBoxArrangement {
	<_NUIBoxArrangementContainer>* container;
	long long horzDist;
	long long vertDist;
	BOOL hasValidMeasurement;
	vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell> > cells;
	CGSize measureSize;
	vector<CGRect, std::__1::allocator<CGRect> > viewFrames;
	CGSize maxBaseLinePair;
} NUIBoxArrangement;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _compressed_pair<_NUIFlowArrangementCell *, std::__1::allocator<_NUIFlowArrangementCell> > {
	_NUIFlowArrangementCell __value_;
} compressed_pair<_NUIFlowArrangementCell *, std::__1::allocator<_NUIFlowArrangementCell> >;

typedef struct vector<_NUIFlowArrangementCell, std::__1::allocator<_NUIFlowArrangementCell> > {
	_NUIFlowArrangementCell __begin_;
	_NUIFlowArrangementCell __end_;
	compressed_pair<_NUIFlowArrangementCell *, std::__1::allocator<_NUIFlowArrangementCell> > __end_cap_;
} vector<_NUIFlowArrangementCell, std::__1::allocator<_NUIFlowArrangementCell> >;

typedef struct NUIFlowArrangement {
	<_NUIFlowArrangementContainer>* container;
	unsigned long long columns;
	double rowSpacing;
	double columnSpacing;
	BOOL hasValidMeasurement;
	vector<_NUIFlowArrangementCell, std::__1::allocator<_NUIFlowArrangementCell> > cells;
	CGSize measureSize;
	CGSize maxSize;
	vector<CGRect, std::__1::allocator<CGRect> > viewFrames;
	CGSize maxBaseLinePair;
} NUIFlowArrangement;

typedef struct objc_super {
	id receiver;
	Class super_class;
} objc_super;

