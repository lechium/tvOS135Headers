/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKDiscoverUserIdentitiesOperation : CKOperation {

	/*^block*/id _userIdentityDiscoveredBlock;
	/*^block*/id _discoverUserIdentitiesCompletionBlock;
	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,copy) NSArray * userIdentityLookupInfos;                     //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id userIdentityDiscoveredBlock;                        //@synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock - In the implementation block
@property (nonatomic,copy) id discoverUserIdentitiesCompletionBlock;              //@synthesize discoverUserIdentitiesCompletionBlock=_discoverUserIdentitiesCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithUserIdentityLookupInfos:(id)arg1 ;
-(void)setUserIdentityDiscoveredBlock:(id)arg1 ;
-(void)setDiscoverUserIdentitiesCompletionBlock:(id)arg1 ;
-(Class)operationInfoClass;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(NSArray *)userIdentityLookupInfos;
-(id)discoverUserIdentitiesCompletionBlock;
-(id)userIdentityDiscoveredBlock;
@end

