/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContentKit/ContentKit-Structs.h>
@interface WFBitmapContext : NSObject {

	double _scale;
	CGContextRef _CGContext;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGContextRef CGContext;              //@synthesize CGContext=_CGContext - In the implementation block
+(id)contextWithSize:(CGSize)arg1 scale:(double)arg2 ;
+(id)contextWithDeviceScreenScaleAndSize:(CGSize)arg1 ;
+(id)currentContextWithScale:(double)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(double)scale;
-(id)image;
-(CGContextRef)CGContext;
-(id)initWithCGContext:(CGContextRef)arg1 scale:(double)arg2 ;
-(id)initWithSize:(CGSize)arg1 opaque:(BOOL)arg2 scale:(double)arg3 ;
-(id)imageWithOrientation:(unsigned)arg1 ;
@end
