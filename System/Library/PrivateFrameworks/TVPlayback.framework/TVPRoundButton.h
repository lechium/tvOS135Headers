/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPFloatingButton.h>

@class UIImageView;

@interface TVPRoundButton : TVPFloatingButton {

	UIImageView* _imageView;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(id)initWithDiameter:(double)arg1 ;
@end

