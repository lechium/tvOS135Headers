/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, FBSScene, FBSSceneSpecification, NSSet, NSString, UNNotificationResponse, UIApplicationShortcutItem, CKShareMetadata;

@interface UISceneConnectionOptions : NSObject {

	NSDictionary* _launchOptionsDictionary;
	FBSScene* _fbsScene;
	FBSSceneSpecification* _specification;

}

@property (nonatomic,readonly) NSDictionary * _launchOptionsDictionary;                    //@synthesize launchOptionsDictionary=_launchOptionsDictionary - In the implementation block
@property (nonatomic,__weak,readonly) FBSScene * _fbsScene;                                //@synthesize fbsScene=_fbsScene - In the implementation block
@property (nonatomic,__weak,readonly) FBSSceneSpecification * _specification;              //@synthesize specification=_specification - In the implementation block
@property (nonatomic,copy,readonly) NSSet * URLContexts; 
@property (nonatomic,readonly) NSString * sourceApplication; 
@property (nonatomic,readonly) NSString * handoffUserActivityType; 
@property (nonatomic,copy,readonly) NSSet * userActivities; 
@property (nonatomic,readonly) UNNotificationResponse * notificationResponse; 
@property (nonatomic,readonly) UIApplicationShortcutItem * shortcutItem; 
@property (nonatomic,readonly) CKShareMetadata * cloudKitShareMetadata; 
-(id)description;
-(FBSSceneSpecification *)_specification;
-(NSString *)sourceApplication;
-(NSSet *)userActivities;
-(FBSScene *)_fbsScene;
-(id)_initWithConnectionOptionsContext:(id)arg1 fbsScene:(id)arg2 specification:(id)arg3 ;
-(NSDictionary *)_launchOptionsDictionary;
-(NSSet *)URLContexts;
-(NSString *)handoffUserActivityType;
-(UNNotificationResponse *)notificationResponse;
-(UIApplicationShortcutItem *)shortcutItem;
-(CKShareMetadata *)cloudKitShareMetadata;
@end

