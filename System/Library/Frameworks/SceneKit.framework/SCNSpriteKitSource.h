/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNImageSource.h>

@class SKScene;

@interface SCNSpriteKitSource : SCNImageSource {

	SKScene* _scene;

}

@property (nonatomic,retain) SKScene * scene;              //@synthesize scene=_scene - In the implementation block
-(void)dealloc;
-(BOOL)isOpaque;
-(void)setScene:(SKScene *)arg1 ;
-(SKScene *)scene;
-(id)textureSource;
@end

