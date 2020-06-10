/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface HBUITopShelfStaticImage : NSObject {

	NSURL* _bundleURL;
	NSString* _fullScreenImageName;
	NSString* _legacyImageName;

}

@property (nonatomic,readonly) NSURL * bundleURL;                             //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,readonly) NSString * fullScreenImageName;                //@synthesize fullScreenImageName=_fullScreenImageName - In the implementation block
@property (nonatomic,readonly) NSString * legacyImageName;                    //@synthesize legacyImageName=_legacyImageName - In the implementation block
@property (nonatomic,readonly) BOOL isBackgroundImageFullScreen; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)bundleURL;
-(id)initWithApplicationProxy:(id)arg1 ;
-(id)backgroundImage;
-(NSString *)fullScreenImageName;
-(NSString *)legacyImageName;
-(BOOL)isBackgroundImageFullScreen;
-(id)folderImage;
@end
