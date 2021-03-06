/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSData;

@interface STAppInfo : NSObject {

	short _platform;
	long long _source;
	NSString* _bundleIdentifier;
	NSString* _displayName;
	NSString* _developerName;
	NSString* _ratingLabel;
	NSURL* _localURL;
	NSURL* _artworkURL;
	NSData* _artworkData;

}

@property (assign,nonatomic) long long source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) short platform;                         //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSString * developerName;                 //@synthesize developerName=_developerName - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                   //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,copy) NSURL * localURL;                         //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,copy) NSURL * artworkURL;                       //@synthesize artworkURL=_artworkURL - In the implementation block
@property (copy) NSData * artworkData;                               //@synthesize artworkData=_artworkData - In the implementation block
-(id)description;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setPlatform:(short)arg1 ;
-(short)platform;
-(NSURL *)localURL;
-(NSString *)ratingLabel;
-(void)setRatingLabel:(NSString *)arg1 ;
-(NSURL *)artworkURL;
-(void)setArtworkData:(NSData *)arg1 ;
-(NSData *)artworkData;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(void)setLocalURL:(NSURL *)arg1 ;
-(NSString *)developerName;
-(void)setDeveloperName:(NSString *)arg1 ;
@end

