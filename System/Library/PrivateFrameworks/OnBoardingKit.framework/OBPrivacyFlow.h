/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBFlow.h>

@class NSBundle, NSString, NSDictionary, OBImage, NSArray;

@interface OBPrivacyFlow : OBFlow {

	NSBundle* _bundle;
	NSString* _splashContentName;
	NSDictionary* _splashPlist;
	BOOL _buttonIconLoaded;
	OBImage* _buttonIcon;
	NSString* _buttonTitle;
	NSString* _buttonCaption;
	NSString* _splashTitle;
	NSString* _splashShortTitle;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long contentVersion; 
@property (nonatomic,readonly) BOOL platformSupported; 
@property (nonatomic,readonly) BOOL showInCombinedList; 
@property (getter=isPersonallyIdentifiable,nonatomic,readonly) BOOL personallyIdentifiable; 
@property (nonatomic,readonly) OBImage * buttonIcon; 
@property (nonatomic,readonly) NSString * localizedButtonTitle; 
@property (nonatomic,readonly) NSString * localizedButtonCaption; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedShortTitle; 
@property (nonatomic,readonly) NSArray * localizedContentList; 
+(id)flowWithBundle:(id)arg1 ;
+(id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(NSString *)identifier;
-(id)initWithBundle:(id)arg1 ;
-(NSString *)localizedTitle;
-(unsigned long long)contentVersion;
-(id)_iconType;
-(NSString *)localizedShortTitle;
-(NSString *)localizedButtonTitle;
-(id)_currentPlatform;
-(BOOL)platformSupported;
-(OBImage *)buttonIcon;
-(NSArray *)localizedContentList;
-(id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 table:(id)arg3 preferredDeviceType:(unsigned long long)arg4 ;
-(BOOL)isPersonallyIdentifiable;
-(void)setButtonIcon:(OBImage *)arg1 ;
-(BOOL)_conformsToRequirement:(id)arg1 ;
-(id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3 ;
-(BOOL)_conformsToRequirements:(id)arg1 ;
-(id)localizedButtonTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(id)_textForConditionalItem:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3 ;
-(id)localizedButtonCaptionForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(id)localizedTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(id)localizedShortTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(id)localizedContentListForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2 ;
-(id)_bundleImageNamed:(id)arg1 ;
-(id)initWithSplashContent:(id)arg1 ;
-(BOOL)showInCombinedList;
-(NSString *)localizedButtonCaption;
@end
