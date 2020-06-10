/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/OKActionMotionExports.h>

@interface OKActionMotion : OKAction <NSSecureCoding, OKActionMotionExports> {

	double _rotationX;
	double _rotationY;
	double _rotationZ;

}

@property (nonatomic,readonly) double rotationX;              //@synthesize rotationX=_rotationX - In the implementation block
@property (nonatomic,readonly) double rotationY;              //@synthesize rotationY=_rotationY - In the implementation block
@property (nonatomic,readonly) double rotationZ;              //@synthesize rotationZ=_rotationZ - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)motionActionWithState:(unsigned long long)arg1 rotationX:(double)arg2 rotationY:(double)arg3 rotationZ:(double)arg4 context:(id)arg5 ;
+(id)motionActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 rotationX:(double)arg4 rotationY:(double)arg5 rotationZ:(double)arg6 context:(id)arg7 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)rotationZ;
-(double)rotationY;
-(double)rotationX;
@end

