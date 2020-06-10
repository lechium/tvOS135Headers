/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class ACAccount, NSURL, NSArray, NSString, AMSUserNotificationAction, NSDictionary, NSDate, NSMutableDictionary;

@interface AMSUserNotification : NSObject <AMSBagConsumer> {

	BOOL _explicitContent;
	BOOL _shouldSuppressDefaultAction;
	ACAccount* _account;
	NSURL* _artworkUrl;
	NSURL* _videoUrl;
	NSArray* _buttonActions;
	NSString* _centerBundleIdentifier;
	AMSUserNotificationAction* _defaultAction;
	NSString* _identifier;
	NSString* _informativeText;
	NSString* _logKey;
	NSDictionary* _metricsEvent;
	NSDate* _scheduledTime;
	NSString* _subtitle;
	NSString* _title;
	NSMutableDictionary* _userInfo;
	long long _intent;
	NSString* _categoryIdentifier;
	NSString* _threadIdentifier;

}

@property (assign,nonatomic) long long intent;                                       //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) NSString * categoryIdentifier;                          //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressDefaultAction;                       //@synthesize shouldSuppressDefaultAction=_shouldSuppressDefaultAction - In the implementation block
@property (nonatomic,retain) NSString * threadIdentifier;                            //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSURL * artworkUrl;                                     //@synthesize artworkUrl=_artworkUrl - In the implementation block
@property (nonatomic,retain) NSURL * videoUrl;                                       //@synthesize videoUrl=_videoUrl - In the implementation block
@property (nonatomic,retain) NSArray * buttonActions;                                //@synthesize buttonActions=_buttonActions - In the implementation block
@property (nonatomic,retain) NSString * centerBundleIdentifier;                      //@synthesize centerBundleIdentifier=_centerBundleIdentifier - In the implementation block
@property (nonatomic,retain) AMSUserNotificationAction * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (assign,nonatomic) BOOL explicitContent;                                   //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * informativeText;                             //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                      //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSDictionary * metricsEvent;                            //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (nonatomic,retain) NSDate * scheduledTime;                                 //@synthesize scheduledTime=_scheduledTime - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(BOOL)shouldDeleteNotificationForPayload:(id)arg1 outIdentifier:(id*)arg2 ;
+(id)notificationWithPayload:(id)arg1 andConfig:(id)arg2 ;
+(long long)explicitEnabledForCenterBundleID:(id)arg1 ;
+(void)handleServiceExtensionNotificationRequest:(id)arg1 bag:(id)arg2 withContentHandler:(/*^block*/id)arg3 ;
+(id)_serverFriendlyFormatter;
+(id)_identifierFromPayload:(id)arg1 ;
+(BOOL)_canParseNotificationWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
+(BOOL)shouldHandleNotificationResponse:(id)arg1 ;
+(void)openAppUsingBundleIdentifier:(id)arg1 ;
+(id)_downloadAssetAtUrl:(id)arg1 withIdentifier:(id)arg2 logKey:(id)arg3 bag:(id)arg4 ;
+(id)_cachedImagePathForIdentifier:(id)arg1 assetURL:(id)arg2 ;
+(id)handleNotificationResponse:(id)arg1 bag:(id)arg2 ;
+(id)notificationCenter:(id)arg1 didChangeSettings:(id)arg2 bag:(id)arg3 ;
+(id)notificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 bag:(id)arg3 ;
+(BOOL)shouldHandleServiceExtensionNotificationRequest:(id)arg1 ;
+(id)handleNotificationResponse:(id)arg1 bagContract:(id)arg2 ;
-(NSMutableDictionary *)userInfo;
-(NSString *)identifier;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)categoryIdentifier;
-(NSString *)subtitle;
-(long long)intent;
-(void)setIntent:(long long)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(BOOL)shouldSuppressDefaultAction;
-(NSString *)threadIdentifier;
-(void)setShouldSuppressDefaultAction:(BOOL)arg1 ;
-(void)setInformativeText:(NSString *)arg1 ;
-(NSString *)informativeText;
-(void)setExplicitContent:(BOOL)arg1 ;
-(BOOL)explicitContent;
-(NSURL *)artworkUrl;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(AMSUserNotificationAction *)defaultAction;
-(void)setDefaultAction:(AMSUserNotificationAction *)arg1 ;
-(NSURL *)videoUrl;
-(id)initWithUNNotification:(id)arg1 ;
-(NSDictionary *)metricsEvent;
-(void)setMetricsEvent:(NSDictionary *)arg1 ;
-(NSArray *)buttonActions;
-(void)setButtonActions:(NSArray *)arg1 ;
-(void)addButtonAction:(id)arg1 ;
-(id)initWithTitle:(id)arg1 intent:(long long)arg2 ;
-(void)setCenterBundleIdentifier:(NSString *)arg1 ;
-(id)initWithPayload:(id)arg1 andConfig:(id)arg2 ;
-(NSString *)centerBundleIdentifier;
-(id)createUNNotificationContent;
-(id)createUNNotificationRequestFromContent:(id)arg1 ;
-(NSDate *)scheduledTime;
-(id)_generatePayload;
-(id)handleSelectedButton:(id)arg1 bag:(id)arg2 ;
-(id)initWithNSUserNotification:(id)arg1 ;
-(id)createNSUserNotification;
-(id)createUNNotificationActions;
-(id)handleSelectedButton:(id)arg1 bagContract:(id)arg2 ;
-(void)setArtworkUrl:(NSURL *)arg1 ;
-(void)setVideoUrl:(NSURL *)arg1 ;
-(void)setScheduledTime:(NSDate *)arg1 ;
@end

