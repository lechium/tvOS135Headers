/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayPolylineGroup, MKMultiPolyline;

@interface MKMultiPolylineRenderer : MKOverlayPathRenderer {

	VKVectorOverlayPolylineGroup* _vectorGeometry;

}

@property (nonatomic,readonly) MKMultiPolyline * multiPolyline; 
+(Class)_mapkitLeafClass;
-(void)setStrokeColor:(id)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(BOOL)_canProvideVectorGeometry;
-(void)_updateRenderColors;
-(id)_vectorGeometry;
-(void)createPath;
-(id)initWithMultiPolyline:(id)arg1 ;
-(MKMultiPolyline *)multiPolyline;
-(void)drawMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
@end

