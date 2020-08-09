//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSASAlbum, MSASAssetCollection, MSASComment, MSASInvitation, MSASSharingRelationship, MSAsset, NSArray, NSDate, NSDictionary, NSError, NSString;
@protocol MSASModel;

@protocol MSASModelObserver <NSObject>

@optional
- (void)MSASModelWillBeForgotten:(id <MSASModel>)arg1;
- (void)MSASModel:(id <MSASModel>)arg1 didRequestDerivativesForAssetCollections:(NSArray *)arg2 specifications:(NSArray *)arg3 completionBlock:(void (^)(NSArray *, NSArray *))arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishMarkingCommentsAsViewedInAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishMarkingAssetCollection:(MSASAssetCollection *)arg2 asViewedInAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishDeletingComment:(MSASComment *)arg2 fromAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 error:(NSError *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishAddingComment:(MSASComment *)arg2 toAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 error:(NSError *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishDeletingAssetCollection:(MSASAssetCollection *)arg2 fromAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishAddingAssetCollection:(MSASAssetCollection *)arg2 toAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishRejectingInvitation:(MSASInvitation *)arg2 error:(NSError *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishAcceptingInvitation:(MSASInvitation *)arg2 forAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishRemovingAccessControlEntry:(MSASSharingRelationship *)arg2 fromAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishAddingAccessControlEntry:(MSASSharingRelationship *)arg2 toAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishUnsubscribingFromAlbum:(MSASAlbum *)arg2 error:(NSError *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishSubscribingToAlbum:(MSASAlbum *)arg2 error:(NSError *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishMarkingAlbumAsViewed:(MSASAlbum *)arg2 error:(NSError *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishDeletingAlbum:(MSASAlbum *)arg2 error:(NSError *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishModifyingAlbumMetadata:(MSASAlbum *)arg2 error:(NSError *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishAddingAlbum:(MSASAlbum *)arg2 error:(NSError *)arg3;
- (void)MSASModelDidReceiveNewServerSideConfiguration:(id <MSASModel>)arg1;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishCheckingForChangesInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindGlobalResetSyncInfo:(NSDictionary *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didFindLastViewedCommentDate:(NSDate *)arg2 forAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didMarkAssetCollection:(MSASAssetCollection *)arg2 asHavingUnreadComments:(_Bool)arg3 inAlbum:(MSASAlbum *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didUpdateUnviewedAssetCollectionCount:(int)arg2 forAlbum:(MSASAlbum *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didMarkAlbum:(MSASAlbum *)arg2 asHavingUnreadContent:(_Bool)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindCommentChange:(MSASComment *)arg2 inAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewComment:(MSASComment *)arg2 forAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didDeleteComment:(MSASComment *)arg2 forAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didDeleteAllCommentsForAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindAssetCollectionChange:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedAccessControl:(MSASSharingRelationship *)arg2 inAlbum:(MSASAlbum *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindAccessControlChange:(MSASSharingRelationship *)arg2 inAlbum:(MSASAlbum *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewAccessControl:(MSASSharingRelationship *)arg2 inAlbum:(MSASAlbum *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didDeleteAllContentsOfAlbum:(MSASAlbum *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didFindInvitationChange:(MSASSharingRelationship *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedInvitation:(MSASSharingRelationship *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewInvitation:(MSASSharingRelationship *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didUnsubscribeFromAlbum:(MSASAlbum *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didSubscribeToAlbum:(MSASAlbum *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didFindAlbumMetadataChange:(MSASAlbum *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedAlbum:(MSASAlbum *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewAlbum:(MSASAlbum *)arg2;
- (void)MSASModelDidDeleteAllAlbumsInAlbumList:(id <MSASModel>)arg1;
- (void)MSASModelWillBeForgotten:(id <MSASModel>)arg1 info:(NSDictionary *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didRequestDerivativesForAssetCollections:(NSArray *)arg2 specifications:(NSArray *)arg3 info:(NSDictionary *)arg4 completionBlock:(void (^)(NSArray *, NSArray *, NSDictionary *))arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFailToFindAssetsForAssetCollectionGUID:(NSString *)arg2 assetTypeFlags:(int)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishRetrievingAsset:(MSAsset *)arg2 inAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishEnqueueingAssetsForDownload:(NSArray *)arg2 inAlbumWithGUID:(NSString *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishMarkingCommentsAsViewedInAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishMarkingAssetCollection:(MSASAssetCollection *)arg2 asViewedInAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishDeletingComment:(MSASComment *)arg2 fromAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 info:(NSDictionary *)arg5 error:(NSError *)arg6;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishAddingComment:(MSASComment *)arg2 toAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 info:(NSDictionary *)arg5 error:(NSError *)arg6;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishDeletingAssetCollection:(MSASAssetCollection *)arg2 fromAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishAddingAssetCollection:(MSASAssetCollection *)arg2 toAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishMarkingAsSpamInvitationWithToken:(NSString *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishMarkingAsSpamInvitation:(MSASInvitation *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishRejectingInvitation:(MSASInvitation *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishAcceptingInvitation:(MSASInvitation *)arg2 forAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishRemovingAccessControlEntry:(MSASSharingRelationship *)arg2 fromAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishSendingInvitationByPhone:(NSString *)arg2 toAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishAddingAccessControlEntry:(MSASSharingRelationship *)arg2 toAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishUnsubscribingFromAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishSubscribingToAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishMarkingAlbumAsViewed:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishDeletingAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishModifyingAlbumMetadata:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFinishAddingAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASModelDidReceiveNewServerSideConfiguration:(id <MSASModel>)arg1 info:(NSDictionary *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didFindLastViewedCommentDate:(NSDate *)arg2 forAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 info:(NSDictionary *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didMarkAssetCollection:(MSASAssetCollection *)arg2 asHavingUnreadComments:(_Bool)arg3 inAlbum:(MSASAlbum *)arg4 info:(NSDictionary *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didUpdateUnviewedAssetCollectionCount:(int)arg2 forAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didMarkAlbum:(MSASAlbum *)arg2 asHavingUnreadContent:(_Bool)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindCommentChange:(MSASComment *)arg2 inAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 info:(NSDictionary *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewComment:(MSASComment *)arg2 forAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 info:(NSDictionary *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didDeleteComment:(MSASComment *)arg2 forAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 info:(NSDictionary *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didDeleteAllCommentsForAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindAssetCollectionChange:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedAccessControl:(MSASSharingRelationship *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindAccessControlChange:(MSASSharingRelationship *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewAccessControl:(MSASSharingRelationship *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didDeleteAllContentsOfAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindInvitationChange:(MSASSharingRelationship *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedInvitation:(MSASSharingRelationship *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewInvitation:(MSASSharingRelationship *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didUnsubscribeFromAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didSubscribeToAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindAlbumMetadataChange:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModelDidDeleteAllAlbumsInAlbumList:(id <MSASModel>)arg1 info:(NSDictionary *)arg2;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedComments:(NSArray *)arg2 forAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 info:(NSDictionary *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewComments:(NSArray *)arg2 forAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 info:(NSDictionary *)arg5;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedInvitations:(NSArray *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewInvitations:(NSArray *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedAccessControls:(NSArray *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewAccessControls:(NSArray *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedAssetCollections:(NSArray *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewAssetCollections:(NSArray *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id <MSASModel>)arg1 didFindDeletedAlbums:(NSArray *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id <MSASModel>)arg1 didFindNewAlbums:(NSArray *)arg2 info:(NSDictionary *)arg3;
@end

