/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface VOSCommandCategory : NSObject {

	NSArray* _commands;
	NSString* _localizedCategoryName;

}

@property (nonatomic,retain) NSArray * commands;                            //@synthesize commands=_commands - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryName;              //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
+(id)interaction;
+(id)other;
+(id)output;
+(id)system;
+(id)scrolling;
+(id)allCategories;
+(id)basicNavigation;
+(id)textNavigation;
+(id)advancedNavigation;
+(id)editing;
+(id)rotor;
+(id)speechAndAudio;
+(id)voiceOverFeatures;
+(id)internalOnly;
+(id)handwriting;
+(id)brailleScreenInput;
+(BOOL)categories:(id)arg1 containsCommand:(id)arg2 ;
-(id)init;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)initWithCommands:(id)arg1 localizedCategoryName:(id)arg2 ;
-(BOOL)containsCommand:(id)arg1 ;
@end
