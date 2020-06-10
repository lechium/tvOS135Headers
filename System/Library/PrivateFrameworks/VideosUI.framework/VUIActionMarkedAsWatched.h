/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionMarkedAsWatched : VUIAction {

	NSString* _itemID;
	NSString* _itemType;
	NSString* _channelID;

}

@property (nonatomic,retain) NSString * itemID;                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * itemType;               //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) NSString * channelID;              //@synthesize channelID=_channelID - In the implementation block
-(id)initWithContextData:(id)arg1 ;
-(NSString *)itemID;
-(void)setItemType:(NSString *)arg1 ;
-(NSString *)itemType;
-(void)setItemID:(NSString *)arg1 ;
-(NSString *)channelID;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setChannelID:(NSString *)arg1 ;
@end
