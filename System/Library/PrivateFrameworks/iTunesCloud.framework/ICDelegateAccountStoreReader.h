/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICSQLiteConnection, NSDate;

@interface ICDelegateAccountStoreReader : NSObject {

	ICSQLiteConnection* _connection;
	BOOL _isValid;

}

@property (nonatomic,copy,readonly) NSDate * lastExpirationPruningDate; 
@property (nonatomic,readonly) long long overestimatedNumberOfTokens; 
-(void)invalidate;
-(id)initWithConnection:(id)arg1 ;
-(void)enumerateTokensUsingBlock:(/*^block*/id)arg1 ;
-(NSDate *)lastExpirationPruningDate;
-(void)_enumerateQueryResults:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_tokenWithSQLiteRow:(id)arg1 ;
-(id)_userIdentityWithSQLiteRow:(id)arg1 ;
-(void)enumerateDelegationUUIDsForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateTokensWithType:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)identityPropertiesForUserIdentity:(id)arg1 ;
-(long long)overestimatedNumberOfTokens;
-(id)tokenForUserIdentity:(id)arg1 ;
@end

