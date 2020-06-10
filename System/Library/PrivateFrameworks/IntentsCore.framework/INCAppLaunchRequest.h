/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsCore/IntentsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSURL, NSUserActivity;

@interface INCAppLaunchRequest : NSObject <NSCopying> {

	BOOL _supportedInCarPlay;
	NSString* _bundleIdentifier;
	NSDictionary* _options;
	NSURL* _URL;
	NSUserActivity* _userActivity;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity;                                    //@synthesize userActivity=_userActivity - In the implementation block
@property (getter=isSupportedInCarPlay,nonatomic,readonly) BOOL supportedInCarPlay;              //@synthesize supportedInCarPlay=_supportedInCarPlay - In the implementation block
+(void)initialize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDictionary *)options;
-(NSURL *)URL;
-(NSString *)bundleIdentifier;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(NSUserActivity *)userActivity;
-(id)initWithInteraction:(id)arg1 userActivity:(id)arg2 inBackground:(BOOL)arg3 error:(id*)arg4 ;
-(id)initWithIntent:(id)arg1 userActivity:(id)arg2 inBackground:(BOOL)arg3 error:(id*)arg4 ;
-(id)initWithAudioCallIntentForCarousel:(id)arg1 error:(id*)arg2 ;
-(id)initWithSockPuppetApplicationProxy:(id)arg1 userActivity:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 options:(id)arg2 URL:(id)arg3 userActivity:(id)arg4 ;
-(void)performWithService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)observeForAppLaunchWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isSupportedInCarPlay;
@end

