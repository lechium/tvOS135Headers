/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, IMNickname, NSMutableArray, NSDictionary, NSSet, NSMutableSet;

@interface IMNicknameController : NSObject {

	BOOL _isInitialLoad;
	NSMutableDictionary* _responseHandlers;
	IMNickname* _personalNickname;
	NSMutableArray* _fetchPersonalNicknameCompletionBlocks;
	NSDictionary* _handledNicknames;
	NSDictionary* _pendingNicknameUpdates;
	NSSet* _whitelistedHandlesForSharing;
	NSSet* _blacklistedHandlesForSharing;
	NSMutableSet* _scrutinyNicknameHandles;

}

@property (nonatomic,retain) IMNickname * personalNickname;                                       //@synthesize personalNickname=_personalNickname - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchPersonalNicknameCompletionBlocks;              //@synthesize fetchPersonalNicknameCompletionBlocks=_fetchPersonalNicknameCompletionBlocks - In the implementation block
@property (nonatomic,retain) NSDictionary * handledNicknames;                                     //@synthesize handledNicknames=_handledNicknames - In the implementation block
@property (nonatomic,retain) NSDictionary * pendingNicknameUpdates;                               //@synthesize pendingNicknameUpdates=_pendingNicknameUpdates - In the implementation block
@property (nonatomic,retain) NSSet * whitelistedHandlesForSharing;                                //@synthesize whitelistedHandlesForSharing=_whitelistedHandlesForSharing - In the implementation block
@property (nonatomic,retain) NSSet * blacklistedHandlesForSharing;                                //@synthesize blacklistedHandlesForSharing=_blacklistedHandlesForSharing - In the implementation block
@property (nonatomic,retain) NSMutableSet * scrutinyNicknameHandles;                              //@synthesize scrutinyNicknameHandles=_scrutinyNicknameHandles - In the implementation block
@property (assign,nonatomic) BOOL isInitialLoad;                                                  //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * responseHandlers;                              //@synthesize responseHandlers=_responseHandlers - In the implementation block
+(id)sharedInstance;
+(BOOL)accountsMatchUpToUseNicknames;
+(BOOL)multiplePhoneNumbersTiedToAppleID;
-(id)init;
-(id)contactStore;
-(id)daemonController;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(BOOL)isInitialLoad;
-(void)updatePersonalNickname:(id)arg1 ;
-(void)updatePendingNicknames:(id)arg1 handledNicknames:(id)arg2 ;
-(void)handleSharingListsDidChange;
-(void)updateSharingWhitelist:(id)arg1 blacklist:(id)arg2 ;
-(void)nicknameStoreDidChange;
-(void)setFetchPersonalNicknameCompletionBlocks:(NSMutableArray *)arg1 ;
-(BOOL)_nicknameFeatureEnabled;
-(void)_updateLocalNicknameStore;
-(void)_broadcastNicknamePreferencesDidChange:(id)arg1 ;
-(id)_handleIDsForHandle:(id)arg1 ;
-(NSDictionary *)pendingNicknameUpdates;
-(NSDictionary *)handledNicknames;
-(void)clearPendingNicknameUpdatesForHandle:(id)arg1 ;
-(NSSet *)whitelistedHandlesForSharing;
-(NSSet *)blacklistedHandlesForSharing;
-(BOOL)_canUpdatePersonalNickname;
-(IMNickname *)personalNickname;
-(NSMutableArray *)fetchPersonalNicknameCompletionBlocks;
-(NSMutableSet *)scrutinyNicknameHandles;
-(id)getNicknameHandlesUnderScrutiny;
-(void)setNicknameHandlesUnderScrutiny;
-(void)setPendingNicknameUpdates:(NSDictionary *)arg1 ;
-(void)setHandledNicknames:(NSDictionary *)arg1 ;
-(void)setWhitelistedHandlesForSharing:(NSSet *)arg1 ;
-(void)setBlacklistedHandlesForSharing:(NSSet *)arg1 ;
-(id)meCardSharingState;
-(id)truncateNameIfNeeded:(id)arg1 ;
-(void)setPersonalNickname:(IMNickname *)arg1 ;
-(id)nicknameForHandle:(id)arg1 ;
-(unsigned long long)nicknameUpdateForHandle:(id)arg1 nicknameIfAvailable:(id*)arg2 ;
-(id)IMSharedHelperMD5Helper:(id)arg1 ;
-(void)ignorePendingNicknameUpdatesForHandle:(id)arg1 ;
-(BOOL)handleIsWhitelistedForSharing:(id)arg1 ;
-(BOOL)handleIsBlacklistedForSharing:(id)arg1 ;
-(void)whitelistHandlesForNicknameSharing:(id)arg1 forChat:(id)arg2 ;
-(void)blacklistHandlesForNicknameSharing:(id)arg1 ;
-(void)fetchPersonalNicknameWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldOfferNicknameSharingForChat:(id)arg1 ;
-(id)handlesForNicknamesUnderScrutiny;
-(void)markHandleUnderScrutiny:(id)arg1 ;
-(void)clearHandleFromScrutiny:(id)arg1 ;
-(void)setPersonalNicknameFromOnboardingResult:(id)arg1 ;
-(void)updatePersonalNicknameIfNecessaryWithMeCardSharingResult:(id)arg1 ;
-(BOOL)meCardSyncEnabled;
-(NSMutableDictionary *)responseHandlers;
-(void)setResponseHandlers:(NSMutableDictionary *)arg1 ;
-(void)setScrutinyNicknameHandles:(NSMutableSet *)arg1 ;
@end

