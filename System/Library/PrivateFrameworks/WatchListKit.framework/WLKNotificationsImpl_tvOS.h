/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBSBulletinServiceDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegatePrivate.h>
#import <libobjc.A.dylib/WLKNotificationsImpl.h>

@protocol WLKNotificationCenterDelegate;
@class NSMutableDictionary, NSString;

@interface WLKNotificationsImpl_tvOS : NSObject <PBSBulletinServiceDelegate, UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate, WLKNotificationsImpl> {

	id<WLKNotificationCenterDelegate> delegate;
	NSMutableDictionary* _bulletinsByIdentifer;

}

@property (nonatomic,retain) NSMutableDictionary * bulletinsByIdentifer;                     //@synthesize bulletinsByIdentifer=_bulletinsByIdentifer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WLKNotificationCenterDelegate> delegate; 
-(id)init;
-(id<WLKNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id<WLKNotificationCenterDelegate>)arg1 ;
-(id)_notificationCenter;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4 ;
-(BOOL)isCategoryEnabledByUser:(long long)arg1 ;
-(void)_post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4 ;
-(unsigned long long)_authOptions;
-(id)_stringForDismissalReason:(unsigned long long)arg1 ;
-(void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3 ;
-(NSMutableDictionary *)bulletinsByIdentifer;
-(void)setBulletinsByIdentifer:(NSMutableDictionary *)arg1 ;
@end
