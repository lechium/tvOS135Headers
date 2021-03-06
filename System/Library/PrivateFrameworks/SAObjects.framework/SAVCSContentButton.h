/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIButton.h>

@class NSString, NSArray, NSURL;

@interface SAVCSContentButton : SAUIButton

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSArray * togglePlayPauseCommands; 
@property (nonatomic,copy) NSURL * url; 
+(id)contentButton;
+(id)contentButtonWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)url;
-(id)groupIdentifier;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSArray *)togglePlayPauseCommands;
-(void)setTogglePlayPauseCommands:(NSArray *)arg1 ;
@end

