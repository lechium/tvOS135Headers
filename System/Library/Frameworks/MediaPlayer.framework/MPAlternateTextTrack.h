/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAlternateTrack.h>

@class NSString, NSLocale;

@interface MPAlternateTextTrack : MPAlternateTrack {

	long long _type;
	NSString* _name;
	NSLocale* _locale;
	long long _tag;

}

@property (nonatomic,readonly) BOOL isInBand; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) long long type; 
@property (assign,nonatomic) long long tag;                    //@synthesize tag=_tag - In the implementation block
+(id)autoTrack;
+(id)offTrack;
-(BOOL)isEqual:(id)arg1 ;
-(long long)type;
-(long long)compare:(id)arg1 ;
-(NSLocale *)locale;
-(id)displayName;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(id)initWithType:(long long)arg1 name:(id)arg2 locale:(id)arg3 ;
-(BOOL)isInBand;
-(id)_displayNameForName:(id)arg1 ;
@end

