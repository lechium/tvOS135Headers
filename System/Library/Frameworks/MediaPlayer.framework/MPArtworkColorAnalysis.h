/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor;

@interface MPArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	UIColor* _backgroundColor;
	BOOL _backgroundColorLight;
	UIColor* _primaryTextColor;
	BOOL _primaryTextColorLight;
	UIColor* _secondaryTextColor;
	BOOL _secondaryTextColorLight;

}

@property (nonatomic,readonly) UIColor * backgroundColor;                                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (getter=isBackgroundColorLight,nonatomic,readonly) BOOL backgroundColorLight;                    //@synthesize backgroundColorLight=_backgroundColorLight - In the implementation block
@property (nonatomic,readonly) UIColor * primaryTextColor;                                                 //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (getter=isPrimaryTextColorLight,nonatomic,readonly) BOOL primaryTextColorLight;                  //@synthesize primaryTextColorLight=_primaryTextColorLight - In the implementation block
@property (nonatomic,readonly) UIColor * secondaryTextColor;                                               //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (getter=isSecondaryTextColorLight,nonatomic,readonly) BOOL secondaryTextColorLight;              //@synthesize secondaryTextColorLight=_secondaryTextColorLight - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(id)_copyWithClass:(Class)arg1 ;
-(UIColor *)primaryTextColor;
-(UIColor *)secondaryTextColor;
-(BOOL)isBackgroundColorLight;
-(BOOL)isPrimaryTextColorLight;
-(BOOL)isSecondaryTextColorLight;
@end

