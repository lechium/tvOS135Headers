/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNUserNotificationCenter, IMDefaults;

@interface IMDBadgeUtilities : NSObject {

	unsigned long long _unreadCount;
	long long _lastFailedMessageDate;
	BOOL _showingFailure;
	BOOL _isUnexpectedlyLogOut;
	BOOL _addedObserverForUnexpectedlyLoggedOut;
	UNUserNotificationCenter* _notificationCenter;
	IMDefaults* _sharedDefaultsInstance;

}

@property (nonatomic,retain) UNUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) IMDefaults * sharedDefaultsInstance;                        //@synthesize sharedDefaultsInstance=_sharedDefaultsInstance - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(UNUserNotificationCenter *)notificationCenter;
-(BOOL)isInAppleStoreDemoMode;
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(void)updateBadgeForUnreadCountChangeIfNeeded:(long long)arg1 ;
-(id)initWithMessageStore:(id)arg1 ;
-(id)initWithMessageStore:(id)arg1 defaultsStore:(id)arg2 ;
-(void)_updateBadgeAndCancelPreviousUpdate;
-(void)_updateBadge;
-(BOOL)_shouldShowFailureString;
-(void)_postBadgeString:(id)arg1 ;
-(void)_postBadgeNumber:(id)arg1 ;
-(IMDefaults *)sharedDefaultsInstance;
-(void)setSharedDefaultsInstance:(IMDefaults *)arg1 ;
@end

