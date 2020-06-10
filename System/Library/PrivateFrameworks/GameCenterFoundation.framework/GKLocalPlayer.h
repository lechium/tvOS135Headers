/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKPlayer.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GKLocalPlayerListenerPrivate;
@class GKInvite, UIAlertView, NSInvocation, GKEventEmitter, NSString;

@interface GKLocalPlayer : GKPlayer <NSCoding, NSSecureCoding> {

	BOOL _authenticated;
	BOOL _didAuthenticate;
	BOOL _validatingAccount;
	BOOL _enteringForeground;
	BOOL _newToGameCenter;
	BOOL _showingInGameUI;
	BOOL _shouldPreserveOnboardingUI;
	GKInvite* _acceptedInvite;
	/*^block*/id _validateAccountCompletionHandler;
	UIAlertView* _loginAlertView;
	UIAlertView* _currentAlert;
	NSInvocation* _currentFriendRequestInvocation;
	long long _environment;
	GKEventEmitter*<GKLocalPlayerListenerPrivate> _eventEmitter;
	double _authStartTimeStamp;
	unsigned long long _authenticationType;

}

@property (nonatomic,copy) id validateAccountCompletionHandler;                                                    //@synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler - In the implementation block
@property (nonatomic,retain) UIAlertView * loginAlertView;                                                         //@synthesize loginAlertView=_loginAlertView - In the implementation block
@property (assign,nonatomic) UIAlertView * currentAlert;                                                           //@synthesize currentAlert=_currentAlert - In the implementation block
@property (nonatomic,retain) NSInvocation * currentFriendRequestInvocation;                                        //@synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation - In the implementation block
@property (assign,nonatomic) BOOL didAuthenticate;                                                                 //@synthesize didAuthenticate=_didAuthenticate - In the implementation block
@property (assign,nonatomic) BOOL validatingAccount;                                                               //@synthesize validatingAccount=_validatingAccount - In the implementation block
@property (assign,nonatomic) BOOL enteringForeground;                                                              //@synthesize enteringForeground=_enteringForeground - In the implementation block
@property (assign,nonatomic) BOOL appIsInBackground; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                            //@synthesize authenticated=_authenticated - In the implementation block
@property (getter=isAuthenticating,nonatomic,readonly) BOOL authenticating; 
@property (assign,nonatomic) BOOL insideAuthenticatorInvocation; 
@property (nonatomic,retain) NSString * accountName; 
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) GKInvite * acceptedInvite;                                                            //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (getter=isAvatarEditingRestricted,nonatomic,readonly) BOOL avatarEditingRestricted; 
@property (assign,getter=isPurpleBuddyAccount,nonatomic) BOOL purpleBuddyAccount; 
@property (assign,getter=isDefaultNickname,nonatomic) BOOL defaultNickname; 
@property (nonatomic,readonly) long long environment;                                                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL allowNearbyMultiplayer; 
@property (assign,getter=isNewToGameCenter,nonatomic) BOOL newToGameCenter;                                        //@synthesize newToGameCenter=_newToGameCenter - In the implementation block
@property (nonatomic,readonly) NSString * facebookUserID; 
@property (nonatomic,readonly) NSString * iCloudUserID; 
@property (getter=isFindable,nonatomic,readonly) BOOL findable; 
@property (nonatomic,retain) GKEventEmitter*<GKLocalPlayerListenerPrivate> eventEmitter;                           //@synthesize eventEmitter=_eventEmitter - In the implementation block
@property (assign,getter=isShowingInGameUI,nonatomic) BOOL showingInGameUI;                                        //@synthesize showingInGameUI=_showingInGameUI - In the implementation block
@property (assign,nonatomic) BOOL shouldPreserveOnboardingUI;                                                      //@synthesize shouldPreserveOnboardingUI=_shouldPreserveOnboardingUI - In the implementation block
@property (assign,nonatomic) double authStartTimeStamp;                                                            //@synthesize authStartTimeStamp=_authStartTimeStamp - In the implementation block
@property (assign,nonatomic) unsigned long long authenticationType;                                                //@synthesize authenticationType=_authenticationType - In the implementation block
@property (getter=isUnderage,nonatomic,readonly) BOOL underage; 
@property (getter=isMultiplayerGamingRestricted,nonatomic,readonly) BOOL multiplayerGamingRestricted; 
@property (nonatomic,copy) id authenticateHandler; 
+(BOOL)supportsSecureCoding;
+(void)performAsync:(/*^block*/id)arg1 ;
+(id)local;
+(void)performSync:(/*^block*/id)arg1 ;
+(id)localPlayer;
+(id)localPlayerAccessQueue;
+(id)_localPlayersFromInternals:(id)arg1 authenticated:(BOOL)arg2 ;
+(id)authenticatedLocalPlayers;
+(id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1 ;
+(void)_sendPlayerAuthAPINotificationForLoggedInPlayerInternals:(id)arg1 loggedOutPlayerInternals:(id)arg2 oldPrimary:(id)arg3 newPrimary:(id)arg4 ;
+(id)localPlayers;
+(id)authenticatedLocalPlayersFiltered:(long long)arg1 ;
+(id)localPlayerForCredential:(id)arg1 ;
+(void)authenticatedLocalPlayersDidChange:(id)arg1 complete:(/*^block*/id)arg2 ;
+(void)authenticateWithUsername:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)authenticateNonActivePlayerWithUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)switchLocalPlayerWithUserAltDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)environment;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)setStatus:(id)arg1 ;
-(void)setAuthenticationType:(unsigned long long)arg1 ;
-(unsigned long long)authenticationType;
-(BOOL)didAuthenticate;
-(void)setDidAuthenticate:(BOOL)arg1 ;
-(id)friends;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showSettings;
-(void)registerListener:(id)arg1 ;
-(GKEventEmitter*<GKLocalPlayerListenerPrivate>)eventEmitter;
-(void)unregisterListener:(id)arg1 ;
-(void)fetchSavedGamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteSavedGamesWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isMultiplayerGamingRestricted;
-(void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEventEmitter:(GKEventEmitter*<GKLocalPlayerListenerPrivate>)arg1 ;
-(void)setupForCloudSavedGames;
-(BOOL)isShowingInGameUI;
-(void)setShowingInGameUI:(BOOL)arg1 ;
-(void)setStatus:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldPreserveOnboardingUI;
-(void)setShouldPreserveOnboardingUI:(BOOL)arg1 ;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(void)loadRecentPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_loadFriendPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)appIsInBackground;
-(BOOL)insideAuthenticatorInvocation;
-(void)signOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)authenticateHandler;
-(void)_startAuthenticationForExistingPrimaryPlayer;
-(void)setAcceptedInvite:(GKInvite *)arg1 ;
-(void)fetchItemsForIdentityVerificationSignature:(/*^block*/id)arg1 ;
-(void)getPlayerIDFromFriendCode:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)createFriendRequestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)cancelFriendRequestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)acceptFriendRequestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(double)authStartTimeStamp;
-(BOOL)scopedIDsArePersistent;
-(void)setAppIsInBackground:(BOOL)arg1 ;
-(void)updateFromLocalPlayer:(id)arg1 ;
-(void)loadFriendPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadChallengableFriendsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadFriendsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isAvatarEditingRestricted;
-(void)updateLoginStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setInsideAuthenticatorInvocation:(BOOL)arg1 ;
-(void)callAuthHandlerWithError:(id)arg1 ;
-(void)setAuthenticateHandler:(id)arg1 ;
-(void)removeFriend:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)removeAllFriendsWithBlock:(/*^block*/id)arg1 ;
-(void)fetchMultiplayerGameInvite;
-(void)fetchTurnBasedEvent;
-(void)fetchCustomTournamentInvite;
-(void)cancelGameInvite:(id)arg1 ;
-(void)inviteeAcceptedGameInviteWithNotification:(id)arg1 ;
-(void)inviteeDeclinedGameInviteWithNotification:(id)arg1 ;
-(BOOL)hasEmailAddress:(id)arg1 ;
-(void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateIdentityVerificationSignatureWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldDisplayWelcomeBannerForPlayer:(id)arg1 lastAuthDate:(id)arg2 remoteUI:(BOOL)arg3 timeBetweenBanners:(double)arg4 ;
-(void)reportAuthenticationStartForPlayer;
-(void)reportAuthenticationPlayerAuthenticated;
-(void)reportAuthenticationFailedForPlayer;
-(void)reportAuthenticationErrorNoInternetConnection;
-(void)reportAuthenticatingWithGreenBuddyInvocation;
-(void)reportAuthenticatingWithAuthKitInvocation;
-(void)reportAuthenticationLoginCanceled;
-(GKInvite *)acceptedInvite;
-(id)validateAccountCompletionHandler;
-(void)setValidateAccountCompletionHandler:(id)arg1 ;
-(UIAlertView *)loginAlertView;
-(void)setLoginAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)currentAlert;
-(void)setCurrentAlert:(UIAlertView *)arg1 ;
-(NSInvocation *)currentFriendRequestInvocation;
-(void)setCurrentFriendRequestInvocation:(NSInvocation *)arg1 ;
-(BOOL)validatingAccount;
-(void)setValidatingAccount:(BOOL)arg1 ;
-(BOOL)enteringForeground;
-(void)setEnteringForeground:(BOOL)arg1 ;
-(BOOL)isNewToGameCenter;
-(void)setNewToGameCenter:(BOOL)arg1 ;
-(void)setAuthStartTimeStamp:(double)arg1 ;
-(void)unregisterAllListeners;
@end

