/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSArray, PXCTFramesetter;

@interface PXCTFrame : NSObject {

	BOOL _prepared;
	BOOL _truncated;
	BOOL _allowTruncation;
	NSArray* _lines;
	const CTFrameRef _frame;
	unsigned long long _maximumLineCount;
	PXCTFramesetter* _framesetter;
	CGPoint _origin;

}

@property (nonatomic,readonly) const CTFrameRef frame;                            //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumLineCount;               //@synthesize maximumLineCount=_maximumLineCount - In the implementation block
@property (nonatomic,readonly) BOOL allowTruncation;                              //@synthesize allowTruncation=_allowTruncation - In the implementation block
@property (nonatomic,__weak,readonly) PXCTFramesetter * framesetter;              //@synthesize framesetter=_framesetter - In the implementation block
@property (nonatomic,readonly) CGPoint origin;                                    //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NSArray * lines;                                   //@synthesize lines=_lines - In the implementation block
@property (getter=isTruncated,nonatomic,readonly) BOOL truncated;                 //@synthesize truncated=_truncated - In the implementation block
-(id)init;
-(void)dealloc;
-(const CTFrameRef)frame;
-(BOOL)isTruncated;
-(CGPoint)origin;
-(void)prepare;
-(NSArray *)lines;
-(PXCTFramesetter *)framesetter;
-(id)initWithFrame:(CTFrameRef)arg1 maximumLineCount:(unsigned long long)arg2 allowTruncation:(BOOL)arg3 framesetter:(id)arg4 ;
-(BOOL)_truncateLine:(inout const _CTLine*)arg1 withOrigin:(inout CGPoint*)arg2 referenceAttributedString:(inout id*)arg3 bounds:(CGRect)arg4 ;
-(unsigned long long)maximumLineCount;
-(BOOL)allowTruncation;
@end

