/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/MTMediaContentSource.h>

@interface MTMediaContentSourceiOSMusicLibrary : MTMediaContentSource {

	BOOL _iTunesMatchEnabled;

}

@property (nonatomic,readonly) BOOL iTunesMatchEnabled;              //@synthesize iTunesMatchEnabled=_iTunesMatchEnabled - In the implementation block
+(id)sharedInstance;
-(void)determineiTunesMatchEnabledWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)iTunesMatchEnabled;
@end

