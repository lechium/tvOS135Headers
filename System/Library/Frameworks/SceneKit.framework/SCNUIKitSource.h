/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNImageSource.h>

@class UIView, UIWindow;

@interface SCNUIKitSource : SCNImageSource {

	id _uiView;
	id _uiWindow;

}

@property (nonatomic,retain) UIView * uiView;                  //@synthesize uiView=_uiView - In the implementation block
@property (nonatomic,retain) UIWindow * uiWindow;              //@synthesize uiWindow=_uiWindow - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isOpaque;
-(id)textureSource;
-(BOOL)supportsMetal;
-(void)setUiView:(UIView *)arg1 ;
-(void)setUiWindow:(UIWindow *)arg1 ;
-(UIView *)uiView;
-(id)prepareWindowIfNeeded;
-(UIWindow *)uiWindow;
@end

