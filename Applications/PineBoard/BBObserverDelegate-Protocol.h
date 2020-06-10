//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BBAttachmentMetadata, BBBulletin, BBGlobalSettings, BBObserver, BBSectionInfo, BBSectionParameters, BBThumbnailSizeConstraints, NSData, NSSet, NSString, UIImage;

@protocol BBObserverDelegate <NSObject>

@optional
- (struct CGSize)observer:(BBObserver *)arg1 composedAttachmentSizeForType:(long long)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(NSString *)arg5;
- (UIImage *)observer:(BBObserver *)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(NSData *)arg3 key:(NSString *)arg4;
- (struct CGSize)observer:(BBObserver *)arg1 composedImageSizeForAttachment:(BBAttachmentMetadata *)arg2 bulletin:(BBBulletin *)arg3 thumbnailSize:(struct CGSize)arg4;
- (void)observer:(BBObserver *)arg1 composedImageFromThumbnailData:(NSData *)arg2 forAttachment:(BBAttachmentMetadata *)arg3 bulletin:(BBBulletin *)arg4 completionHandler:(void (^)(UIImage *))arg5;
- (void)observer:(BBObserver *)arg1 processData:(NSData *)arg2 forAttachment:(BBAttachmentMetadata *)arg3 bulletin:(BBBulletin *)arg4 completionHandler:(void (^)(NSData *))arg5;
- (BBThumbnailSizeConstraints *)observer:(BBObserver *)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (BBThumbnailSizeConstraints *)observer:(BBObserver *)arg1 thumbnailSizeConstraintsForAttachment:(BBAttachmentMetadata *)arg2 bulletin:(BBBulletin *)arg3;
- (_Bool)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(BBObserver *)arg1;
- (_Bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(BBObserver *)arg1;
- (void)observer:(BBObserver *)arg1 prepareAttachment:(BBAttachmentMetadata *)arg2 beforeDeliveringBulletin:(BBBulletin *)arg3 withCompletionHandler:(void (^)(unsigned long long))arg4;
- (void)observer:(BBObserver *)arg1 noteServerReceivedResponseForBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(BBObserver *)arg1 noteInvalidatedBulletinIDs:(NSSet *)arg2;
- (void)observer:(BBObserver *)arg1 purgeReferencesToBulletinID:(NSString *)arg2;
- (void)observer:(BBObserver *)arg1 noteSectionParametersChanged:(BBSectionParameters *)arg2 forSectionID:(NSString *)arg3;
- (void)observer:(BBObserver *)arg1 updateGlobalSettings:(BBGlobalSettings *)arg2;
- (void)observer:(BBObserver *)arg1 removeSection:(NSString *)arg2;
- (void)observer:(BBObserver *)arg1 updateSectionInfo:(BBSectionInfo *)arg2;
- (void)observer:(BBObserver *)arg1 removeBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 removeBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 modifyBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 modifyBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 addBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 addBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(void (^)(_Bool))arg5;
@end

