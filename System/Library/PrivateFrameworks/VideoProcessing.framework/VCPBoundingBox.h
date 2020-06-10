/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPBoundingBox : NSObject {

	float _minX;
	float _maxX;
	float _minY;
	float _maxY;
	float _confidence;
	float _flag;

}

@property (assign) float minX;                    //@synthesize minX=_minX - In the implementation block
@property (assign) float maxX;                    //@synthesize maxX=_maxX - In the implementation block
@property (assign) float minY;                    //@synthesize minY=_minY - In the implementation block
@property (assign) float maxY;                    //@synthesize maxY=_maxY - In the implementation block
@property (assign) float confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (assign) float flag;                    //@synthesize flag=_flag - In the implementation block
-(float)confidence;
-(void)setFlag:(float)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(float)flag;
-(float)area;
-(float)minX;
-(void)setMinX:(float)arg1 ;
-(float)minY;
-(void)setMinY:(float)arg1 ;
-(float)maxX;
-(void)setMaxX:(float)arg1 ;
-(float)maxY;
-(void)setMaxY:(float)arg1 ;
-(id)initWithXYAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5 ;
-(id)intersect:(id)arg1 ;
-(id)union:(id)arg1 ;
-(id)initWithCenterAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5 ;
-(float)computeIntersectionOverUnion:(id)arg1 ;
-(CGRect)getCGRectWithClipWidth:(float)arg1 height:(float)arg2 ;
@end
