/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@class VSAccount, VSKeychainEditingContext, NSOperationQueue, VSRemoteNotifier, NSArray, NSUndoManager, NSString;

@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate> {

	BOOL _needsUpdateCachedFirstAccount;
	VSAccount* _cachedFirstAccount;
	VSKeychainEditingContext* _keychainEditingContext;
	NSOperationQueue* _keychainQueue;
	id _changeObserver;
	VSRemoteNotifier* _remoteNotifier;

}

@property (retain) VSAccount * cachedFirstAccount;                                           //@synthesize cachedFirstAccount=_cachedFirstAccount - In the implementation block
@property (assign) BOOL needsUpdateCachedFirstAccount;                                       //@synthesize needsUpdateCachedFirstAccount=_needsUpdateCachedFirstAccount - In the implementation block
@property (nonatomic,retain) VSKeychainEditingContext * keychainEditingContext;              //@synthesize keychainEditingContext=_keychainEditingContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * keychainQueue;                               //@synthesize keychainQueue=_keychainQueue - In the implementation block
@property (assign,nonatomic,__weak) id changeObserver;                                       //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                              //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accounts; 
@property (nonatomic,retain) NSUndoManager * undoManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)accountClass;
-(id)init;
-(void)dealloc;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)undoManager;
-(NSArray *)accounts;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(void)setNeedsUpdateCachedFirstAccount:(BOOL)arg1 ;
-(BOOL)isFirstAccountLoaded;
-(NSOperationQueue *)keychainQueue;
-(BOOL)_updateCachedFirstAccount;
-(void)_sendLocalNotification;
-(VSRemoteNotifier *)remoteNotifier;
-(VSKeychainEditingContext *)keychainEditingContext;
-(BOOL)needsUpdateCachedFirstAccount;
-(id)firstAccount;
-(id)_keychainItemsWithLimit:(unsigned long long)arg1 ;
-(id)_accountForKeychainItem:(id)arg1 simulateExpiredToken:(BOOL)arg2 ;
-(VSAccount *)cachedFirstAccount;
-(void)setCachedFirstAccount:(VSAccount *)arg1 ;
-(void)fetchAccountsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_insertAccount:(id)arg1 inContext:(id)arg2 ;
-(void)_sendRemoteNotification;
-(id)firstAccountIfLoaded;
-(void)saveAccounts:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAccounts:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setKeychainEditingContext:(VSKeychainEditingContext *)arg1 ;
-(void)setKeychainQueue:(NSOperationQueue *)arg1 ;
-(id)changeObserver;
-(void)setChangeObserver:(id)arg1 ;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
@end
