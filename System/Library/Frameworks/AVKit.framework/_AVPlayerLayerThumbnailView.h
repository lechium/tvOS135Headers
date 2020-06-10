/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayer;

@interface _AVPlayerLayerThumbnailView : UIView

@property (nonatomic,retain) AVPlayer * player; 
+(Class)layerClass;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(id)playerLayer;
-(CGSize)intrinsicContentSize;
@end
