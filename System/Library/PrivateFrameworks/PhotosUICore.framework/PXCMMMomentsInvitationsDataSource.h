/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCMMInvitationsDataSource.h>

@class PXCMMMomentsInvitationsDataSourceState;

@interface PXCMMMomentsInvitationsDataSource : PXCMMInvitationsDataSource {

	PXCMMMomentsInvitationsDataSourceState* __state;

}

@property (nonatomic,readonly) PXCMMMomentsInvitationsDataSourceState * _state;              //@synthesize _state=__state - In the implementation block
-(PXCMMMomentsInvitationsDataSourceState *)_state;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)initWithState:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(id)invitationAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)objectIDAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)invitationForObjectID:(id)arg1 ;
@end

