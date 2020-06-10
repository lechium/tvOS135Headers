/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKContainer, CKDatabase, NSBundle;

@interface WFRemoteQuarantinePolicyManager : NSObject {

	CKContainer* _container;
	CKDatabase* _database;
	NSBundle* _localPolicyBundle;

}

@property (nonatomic,retain) CKContainer * container;                     //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) CKDatabase * database;                       //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSBundle * localPolicyBundle;              //@synthesize localPolicyBundle=_localPolicyBundle - In the implementation block
+(id)sharedManager;
-(void)scheduleRegularPolicyUpdatesWithDatabaseProvider:(id)arg1 ;
-(id)init;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(CKDatabase *)database;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(id)localizedString:(id)arg1 ;
-(BOOL)processAsset:(id)arg1 error:(id*)arg2 ;
-(void)updatePolicyWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)policyString;
-(id)policyAssetBundle;
-(id)latestRemotePolicyAssetBundle;
-(id)policyStringForBundleIfValid:(id)arg1 ;
-(BOOL)persistAssetToDisk:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAssetBundlesExceptAssetWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)createDirectoryForAssetWithIdentifier:(id)arg1 directoryExists:(BOOL*)arg2 error:(id*)arg3 ;
-(NSBundle *)localPolicyBundle;
@end

