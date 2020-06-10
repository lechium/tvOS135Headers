/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UABestAppSuggestionManagerDelegate;
@class UABestAppSuggestion, NSXPCConnection;

@interface UABestAppSuggestionManager : NSObject {

	id<UABestAppSuggestionManagerDelegate> _delegate;
	BOOL _listeningForBestAppSuggestions;
	int _bestAppNotificationCount;
	UABestAppSuggestion* _lastBestAppSuggestion;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (__weak) id<UABestAppSuggestionManagerDelegate> delegate; 
-(id)init;
-(void)dealloc;
-(id<UABestAppSuggestionManagerDelegate>)delegate;
-(void)setDelegate:(id<UABestAppSuggestionManagerDelegate>)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(void)notifyBestAppsChanged:(id)arg1 when:(id)arg2 confidence:(double)arg3 ;
-(void)startListeningForBestAppSuggestions;
-(void)stopListeningForBestAppSuggestions;
-(void)removeBestAppByUUID:(id)arg1 options:(id)arg2 ;
-(id)bestAppSuggestions:(long long)arg1 ;
-(id)bestAppSuggestion;
-(id)createAppSuggestionFromActivityInfo:(id)arg1 atTime:(id)arg2 ;
-(BOOL)isActivityInfo:(id)arg1 atTime:(id)arg2 similarToAppSuggestion:(id)arg3 ;
-(void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 ;
-(void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 deviceName:(id)arg4 deviceIdentifier:(id)arg5 deviceType:(id)arg6 ;
-(void)removeBestApp:(id)arg1 options:(id)arg2 ;
-(BOOL)determineBestAppWithDelay:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)fetchAllNearbyAppSuggestions;
-(void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1 ;
-(void)bestAppSuggestionWasLaunched:(id)arg1 withInteractionType:(int)arg2 ;
-(void)bestAppSuggestionLaunchWasCancelled:(id)arg1 ;
-(void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2 ;
-(void)launchAppWithBestAppSuggestion:(id)arg1 ;
@end

