/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, CKDContainerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest {

	BOOL _requireUserIDs;
	NSString* _containerIdentifier;
	CKDContainerInfo* _containerInfo;

}

@property (nonatomic,copy) CKDContainerInfo * containerInfo;              //@synthesize containerInfo=_containerInfo - In the implementation block
@property (assign,nonatomic) BOOL requireUserIDs;                         //@synthesize requireUserIDs=_requireUserIDs - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
-(id)url;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(long long)serverType;
-(long long)partitionType;
-(BOOL)usesiCloudAuthToken;
-(BOOL)usesCloudKitAuthToken;
-(void)requestDidParseJSONObject:(id)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresConfiguration;
-(BOOL)allowsAuthedAccount;
-(BOOL)requiresDeviceID;
-(BOOL)hasRequestBody;
-(BOOL)requireUserIDs;
-(void)setContainerInfo:(CKDContainerInfo *)arg1 ;
-(CKDContainerInfo *)containerInfo;
-(void)setRequireUserIDs:(BOOL)arg1 ;
@end

