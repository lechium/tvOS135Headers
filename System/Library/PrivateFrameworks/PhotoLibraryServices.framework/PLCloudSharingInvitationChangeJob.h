/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString, NSDictionary;

@interface PLCloudSharingInvitationChangeJob : PLCloudSharingJob {

	NSArray* _MSASSharingRelationships;
	long long _relationshipChangeType;
	NSString* _albumGUID;
	NSString* _resendInvitationGUID;
	long long _jobType;
	NSDictionary* _mstreamdInfoDictionary;

}

@property (nonatomic,retain) NSArray * MSASSharingRelationships;                 //@synthesize MSASSharingRelationships=_MSASSharingRelationships - In the implementation block
@property (assign,nonatomic) long long relationshipChangeType;                   //@synthesize relationshipChangeType=_relationshipChangeType - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                               //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSString * resendInvitationGUID;                    //@synthesize resendInvitationGUID=_resendInvitationGUID - In the implementation block
@property (assign,nonatomic) long long jobType;                                  //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSDictionary * mstreamdInfoDictionary;              //@synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary - In the implementation block
+(void)sendServerPendingInvitationsForAlbumWithGUID:(id)arg1 ;
+(void)saveServerStateLocallyForSharingACLRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3 ;
+(void)saveServerStateLocallyForSharingInvitationRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3 ;
+(void)resendPendingInvitationWithGUID:(id)arg1 albumGUID:(id)arg2 ;
-(id)description;
-(void)run;
-(long long)jobType;
-(void)setJobType:(long long)arg1 ;
-(NSString *)albumGUID;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(BOOL)shouldArchiveXPCToDisk;
-(NSDictionary *)mstreamdInfoDictionary;
-(void)setMstreamdInfoDictionary:(NSDictionary *)arg1 ;
-(void)executeSaveServerStateLocallyForSharingInvitationRelationships;
-(void)executeSaveServerStateLocallyForSharingACLRelationships;
-(void)executeSendServerPendingInvitationsForAlbumWithGUID;
-(NSArray *)MSASSharingRelationships;
-(void)setMSASSharingRelationships:(NSArray *)arg1 ;
-(long long)relationshipChangeType;
-(void)setRelationshipChangeType:(long long)arg1 ;
-(NSString *)resendInvitationGUID;
-(void)setResendInvitationGUID:(NSString *)arg1 ;
@end

