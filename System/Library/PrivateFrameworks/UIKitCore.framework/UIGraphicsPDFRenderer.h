/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsPDFRenderer : UIGraphicsRenderer
+(Class)rendererContextClass;
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
-(id)init;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(BOOL)writePDFToURL:(id)arg1 withActions:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)pushContext:(id)arg1 ;
-(void)popContext:(id)arg1 ;
-(id)PDFDataWithActions:(/*^block*/id)arg1 ;
@end
