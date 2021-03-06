/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class MPMediaItem, NSString;

@interface _MPMusicPlayerMediaItemProxy : NSProxy {

	MPMediaItem* _item;
	NSString* _itemIdentifier;

}

@property (nonatomic,readonly) MPMediaItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(MPMediaItem *)item;
-(NSString *)itemIdentifier;
-(id)initWithItemIdentifier:(id)arg1 item:(id)arg2 ;
@end

