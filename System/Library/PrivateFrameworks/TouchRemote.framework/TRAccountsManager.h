/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, NSString, SSAccount, ACAccount, GKLocalPlayer;

@interface TRAccountsManager : NSObject {

	ACAccountStore* _iCloudAccountStore;

}

@property (nonatomic,retain) ACAccountStore * iCloudAccountStore;                  //@synthesize iCloudAccountStore=_iCloudAccountStore - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName; 
@property (nonatomic,readonly) SSAccount * activeiTunesStoreAccount; 
@property (nonatomic,readonly) ACAccount * activeiCloudAccount; 
@property (nonatomic,copy,readonly) NSString * homeSharingAppleID; 
@property (nonatomic,copy,readonly) NSString * homeSharingGroupID; 
@property (nonatomic,readonly) GKLocalPlayer * localGameCenterPlayer; 
+(id)sharedInstance;
-(NSString *)deviceName;
-(NSString *)homeSharingGroupID;
-(ACAccountStore *)iCloudAccountStore;
-(SSAccount *)activeiTunesStoreAccount;
-(ACAccount *)activeiCloudAccount;
-(NSString *)homeSharingAppleID;
-(GKLocalPlayer *)localGameCenterPlayer;
-(id)defaultAccountIDForAuthenticationAccountType:(unsigned long long)arg1 ;
-(id)accountTypesWithDefaultAccountID:(id)arg1 ;
-(void)setICloudAccountStore:(ACAccountStore *)arg1 ;
@end

