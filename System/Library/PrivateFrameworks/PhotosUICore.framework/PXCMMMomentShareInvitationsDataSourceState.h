/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary;

@interface PXCMMMomentShareInvitationsDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _momentShares;
	NSDictionary* _invitationsByMomentShareObjectID;

}

@property (nonatomic,readonly) PHFetchResult * momentShares;                                 //@synthesize momentShares=_momentShares - In the implementation block
@property (nonatomic,readonly) NSDictionary * invitationsByMomentShareObjectID;              //@synthesize invitationsByMomentShareObjectID=_invitationsByMomentShareObjectID - In the implementation block
+(id)new;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(PHFetchResult *)momentShares;
-(NSDictionary *)invitationsByMomentShareObjectID;
-(id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2 ;
-(id)initWithMomentShares:(id)arg1 invitationsByMomentShareObjectID:(id)arg2 ;
@end

