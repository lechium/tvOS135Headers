/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVQueuePlayer.h>

@class HFCameraClipPlayerItem, NSArray;

@interface HFCameraClipQueuePlayer : AVQueuePlayer

@property (nonatomic,readonly) HFCameraClipPlayerItem * currentItem; 
@property (nonatomic,copy,readonly) NSArray * items; 
-(NSArray *)items;
-(HFCameraClipPlayerItem *)currentItem;
-(id)initWithItems:(id)arg1 ;
@end

