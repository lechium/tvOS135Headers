/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDImageStackAsset, NSString, NSOrderedSet, TDThemeCompressionType;

@interface TDLayerStackRenditionSpec : TDRenditionSpec {

	CGSize primitiveCanvasSize;

}

@property (nonatomic,retain) TDImageStackAsset * asset; 
@property (assign,nonatomic) CGSize primitiveCanvasSize; 
@property (nonatomic,retain) NSString * canvasSizeString; 
@property (assign,nonatomic) CGSize canvasSize; 
@property (nonatomic,retain) NSOrderedSet * layerReferences; 
@property (nonatomic,retain) TDThemeCompressionType * compressionType; 
-(void)awakeFromFetch;
-(void)prepareForDeletion;
-(CGSize)canvasSize;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)setCanvasSize:(CGSize)arg1 ;
-(void)setPrimitiveCanvasSize:(CGSize)arg1 ;
-(CGSize)primitiveCanvasSize;
@end

