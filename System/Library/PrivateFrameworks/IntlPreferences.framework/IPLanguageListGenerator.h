/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSLocale;

@interface IPLanguageListGenerator : NSObject {

	NSString* _systemDisplayLanguage;
	NSArray* _preferredLanguages;
	NSLocale* _preferredLocale;
	NSArray* _systemLanguages;

}

@property (nonatomic,readonly) NSArray * preferredLanguages;                  //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,readonly) NSLocale * preferredLocale;                    //@synthesize preferredLocale=_preferredLocale - In the implementation block
@property (nonatomic,readonly) NSArray * systemLanguages;                     //@synthesize systemLanguages=_systemLanguages - In the implementation block
@property (nonatomic,readonly) NSString * systemDisplayLanguage;              //@synthesize systemDisplayLanguage=_systemDisplayLanguage - In the implementation block
+(id)regionalVariantLanguagesForSystemLanguages;
+(id)regionalVariantLanguagesForBaseLanguage:(id)arg1 ;
+(void)sortByLocalizedLanguage:(id)arg1 ;
+(id)effectiveSystemLanguagesWithUnsupportedVariant:(BOOL)arg1 forPreferredLanguages:(id)arg2 ;
+(id)generator;
+(void)preheat;
-(NSArray *)preferredLanguages;
-(NSLocale *)preferredLocale;
-(NSArray *)systemLanguages;
-(id)initWithPreferredLanguages:(id)arg1 preferredLocale:(id)arg2 systemLanguages:(id)arg3 ;
-(NSString *)systemDisplayLanguage;
-(id)deviceLanguagesForChangingDeviceLanguage:(BOOL)arg1 ;
-(id)otherLanguages;
@end

