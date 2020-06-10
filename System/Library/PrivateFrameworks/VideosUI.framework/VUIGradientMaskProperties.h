/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosUI/VideosUI-Structs.h>
@interface VUIGradientMaskProperties : NSObject {

	CGSize _minLengths;
	UIEdgeInsets _minPadding;

}

@property (assign,nonatomic) UIEdgeInsets minPadding;              //@synthesize minPadding=_minPadding - In the implementation block
@property (assign,nonatomic) CGSize minLengths;                    //@synthesize minLengths=_minLengths - In the implementation block
+(id)defaultGradientMaskProperties;
-(UIEdgeInsets)minPadding;
-(CGSize)minLengths;
-(void)setMinPadding:(UIEdgeInsets)arg1 ;
-(void)setMinLengths:(CGSize)arg1 ;
@end

