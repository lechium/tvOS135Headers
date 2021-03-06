/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>

@class UIView, UIImageView;

@interface _UIBarBackgroundImageView : UIImageView {

	UIView* _topStripView;
	UIImageView* _customImageContainer;
	BOOL _translucent;

}

@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;              //@synthesize translucent=_translucent - In the implementation block
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(BOOL)isTranslucent;
-(id)topStripView;
-(void)updateTopStripViewCreateIfNecessary;
-(void)removeTopStripView;
@end

