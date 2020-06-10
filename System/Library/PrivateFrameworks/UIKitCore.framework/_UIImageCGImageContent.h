/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageCGImageContent : _UIImageContent {

	A{CGImage}* _imageRef;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(CGImageRef)CGImage;
-(CGSize)sizeInPixels;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
-(BOOL)hasCGImage;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)isCGImage;
-(id)contentWithCGImage:(CGImageRef)arg1 ;
-(id)renditionApplyingEffect:(id)arg1 ;
@end

