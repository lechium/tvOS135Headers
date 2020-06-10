/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKWebpagePreferences, NSDictionary, WKWebsiteDataStore, NSString;

@interface _WKWebsitePolicies : NSObject {

	RetainPtr<WKWebpagePreferences>* _webpagePreferences;

}

@property (nonatomic,readonly) WKWebpagePreferences * webpagePreferences; 
@property (assign,nonatomic) BOOL contentBlockersEnabled; 
@property (assign,nonatomic) unsigned long long allowedAutoplayQuirks; 
@property (assign,nonatomic) long long autoplayPolicy; 
@property (nonatomic,copy) NSDictionary * customHeaderFields; 
@property (assign,nonatomic) unsigned long long popUpPolicy; 
@property (nonatomic,retain) WKWebsiteDataStore * websiteDataStore; 
@property (nonatomic,copy) NSString * customUserAgent; 
@property (nonatomic,copy) NSString * customUserAgentAsSiteSpecificQuirks; 
@property (nonatomic,copy) NSString * customNavigatorPlatform; 
@property (assign,nonatomic) unsigned long long deviceOrientationAndMotionAccessPolicy; 
-(id)description;
-(id)init;
-(void)setCustomUserAgent:(NSString *)arg1 ;
-(NSString *)customUserAgent;
-(Object*)_apiObject;
-(void)setWebsiteDataStore:(WKWebsiteDataStore *)arg1 ;
-(WKWebsiteDataStore *)websiteDataStore;
-(WKWebpagePreferences *)webpagePreferences;
-(void)setContentBlockersEnabled:(BOOL)arg1 ;
-(BOOL)contentBlockersEnabled;
-(void)setAllowedAutoplayQuirks:(unsigned long long)arg1 ;
-(unsigned long long)allowedAutoplayQuirks;
-(void)setAutoplayPolicy:(long long)arg1 ;
-(long long)autoplayPolicy;
-(void)setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)arg1 ;
-(unsigned long long)deviceOrientationAndMotionAccessPolicy;
-(void)setPopUpPolicy:(unsigned long long)arg1 ;
-(unsigned long long)popUpPolicy;
-(NSDictionary *)customHeaderFields;
-(void)setCustomHeaderFields:(NSDictionary *)arg1 ;
-(void)setCustomUserAgentAsSiteSpecificQuirks:(NSString *)arg1 ;
-(NSString *)customUserAgentAsSiteSpecificQuirks;
-(void)setCustomNavigatorPlatform:(NSString *)arg1 ;
-(NSString *)customNavigatorPlatform;
@end

