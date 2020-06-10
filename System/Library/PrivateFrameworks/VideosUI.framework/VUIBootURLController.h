/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface VUIBootURLController : NSObject {

	NSURL* _localAppURL;

}

@property (nonatomic,retain) NSURL * localAppURL;              //@synthesize localAppURL=_localAppURL - In the implementation block
-(id)init;
-(id)initWithLocalAppURL:(id)arg1 ;
-(void)fetchBootURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)localAppURL;
-(void)setLocalAppURL:(NSURL *)arg1 ;
@end

