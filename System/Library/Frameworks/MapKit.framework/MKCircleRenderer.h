/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayCircle, MKCircle;

@interface MKCircleRenderer : MKOverlayPathRenderer {

	VKVectorOverlayCircle* _vectorData;

}

@property (nonatomic,readonly) MKCircle * circle; 
+(Class)_mapkitLeafClass;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(BOOL)_canProvideVectorGeometry;
-(id)_vectorData;
-(void)_updateRenderColors;
-(void)createPath;
-(id)initWithCircle:(id)arg1 ;
-(MKCircle *)circle;
@end

