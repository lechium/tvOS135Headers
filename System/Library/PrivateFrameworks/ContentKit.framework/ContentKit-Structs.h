/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct CGContext* CGContextRef;

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

typedef struct _NSZone* NSZoneRef;

typedef struct CGPDFContentStream* CGPDFContentStreamRef;

typedef struct CGPDFOperatorTable* CGPDFOperatorTableRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned completed : 1;
	unsigned interacted : 1;
} SCD_Struct_WF12;

typedef struct {
	unsigned requiredRuntimeConfirmation : 1;
} SCD_Struct_WF13;

typedef struct CGColor* CGColorRef;

typedef struct archive_entry* archive_entryRef;

typedef struct archive* archiveRef;

typedef struct {
	CLLocationCoordinate2D field1;
	CGPoint field2;
} SCD_Struct_DC17;

typedef struct WFContentSlice {
	unsigned long long startIndex;
	unsigned long long endIndex;
} WFContentSlice;

typedef struct magic_set* magic_setRef;

typedef struct {
	unsigned homeAutomationsEnabled : 1;
	unsigned installed : 1;
	unsigned personalAutomationsEnabled : 1;
	unsigned sharingEnabled : 1;
} SCD_Struct_WF20;

typedef struct {
	unsigned actionCount : 1;
	unsigned source : 1;
	unsigned completed : 1;
} SCD_Struct_WF21;

typedef struct CGImage* CGImageRef;

typedef struct CGImageSource* CGImageSourceRef;

