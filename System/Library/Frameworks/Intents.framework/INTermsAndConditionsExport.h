/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol INTermsAndConditionsExport <NSObject,JSExport>
@property (nonatomic,readonly) NSString * localizedTermsAndConditionsText; 
@property (nonatomic,readonly) NSURL * privacyPolicyURL; 
@property (nonatomic,readonly) NSURL * termsAndConditionsURL; 
@required
-(id)init;
-(NSString *)localizedTermsAndConditionsText;
-(NSURL *)privacyPolicyURL;
-(NSURL *)termsAndConditionsURL;

@end

