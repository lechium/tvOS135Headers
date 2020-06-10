/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSString, NSURL;

@interface MCFontPayload : MCPayload {

	NSData* _fontData;
	NSString* _name;
	NSURL* _persistentURL;

}

@property (nonatomic,retain) NSData * fontData;                  //@synthesize fontData=_fontData - In the implementation block
@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSURL * persistentURL;              //@synthesize persistentURL=_persistentURL - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(NSURL *)persistentURL;
-(NSData *)fontData;
-(void)setFontData:(NSData *)arg1 ;
-(void)setPersistentURL:(NSURL *)arg1 ;
@end

