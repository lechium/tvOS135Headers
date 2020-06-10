/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VUIMarkAsWatchedRequestManager : NSObject {

	NSMutableDictionary* _ongoingItemIDOperationDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * ongoingItemIDOperationDictionary;              //@synthesize ongoingItemIDOperationDictionary=_ongoingItemIDOperationDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)sendRequestForItemID:(id)arg1 itemType:(id)arg2 channelID:(id)arg3 ;
-(NSMutableDictionary *)ongoingItemIDOperationDictionary;
-(void)setOngoingItemIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end

