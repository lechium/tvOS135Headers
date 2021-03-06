/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVCKBookmarkKey, TVCKUniversalPlaybackPositionRecord;

@interface ATVUPPUpdateRecord : NSObject {

	TVCKBookmarkKey* _bookmarkKey;
	TVCKUniversalPlaybackPositionRecord* _uppRecord;

}

@property (nonatomic,retain) TVCKBookmarkKey * bookmarkKey;                                //@synthesize bookmarkKey=_bookmarkKey - In the implementation block
@property (nonatomic,retain) TVCKUniversalPlaybackPositionRecord * uppRecord;              //@synthesize uppRecord=_uppRecord - In the implementation block
-(TVCKBookmarkKey *)bookmarkKey;
-(void)setBookmarkKey:(TVCKBookmarkKey *)arg1 ;
-(TVCKUniversalPlaybackPositionRecord *)uppRecord;
-(void)setUppRecord:(TVCKUniversalPlaybackPositionRecord *)arg1 ;
@end

