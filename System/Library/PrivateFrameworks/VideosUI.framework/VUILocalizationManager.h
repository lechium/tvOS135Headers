/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VUILocalizationManager : NSObject {

	NSDictionary* _overideLocDict;

}

@property (retain) NSDictionary * overideLocDict;              //@synthesize overideLocDict=_overideLocDict - In the implementation block
+(id)sharedInstance;
-(id)localizedStringForKey:(id)arg1 ;
-(NSDictionary *)overideLocDict;
-(void)setOverideLocDict:(NSDictionary *)arg1 ;
-(id)localizedStringForKey:(id)arg1 withCounts:(id)arg2 ;
-(void)updateWithJSDictionary:(id)arg1 ;
@end

