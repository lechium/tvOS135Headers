/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HBModelSerialization : NSObject
+(id)plistRepresentationFromRawRootItem:(id)arg1 ;
+(id)plistRepresentationFromRawApp:(id)arg1 ;
+(id)plistRepresentationFromRawFolder:(id)arg1 ;
+(id)_rawRootItemFromPlistRepresentation:(id)arg1 ;
+(BOOL)serializeRootFolder:(id)arg1 toURL:(id)arg2 error:(id*)arg3 shouldSendNotification:(BOOL)arg4 notificationInfo:(id)arg5 ;
+(id)rawFolderFromPlistRepresentation:(id)arg1 ;
+(id)_formattedPlistItemsFromRootFolderDict:(id)arg1 incrementingOrderId:(unsigned long long)arg2 ;
+(id)rawAppFromPlistRepresentation:(id)arg1 ;
+(id)_rawFolderFromITunesFolder:(id)arg1 ;
+(BOOL)serializeRootFolder:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)deserializeRootFolderFromURL:(id)arg1 error:(id*)arg2 ;
+(void)formatAndSavePlistContentFromURL:(id)arg1 ;
+(id)applicationIdentifiersFromITunesRepresentation:(id)arg1 ;
+(id)rawFolderFromITunesRepresentation:(id)arg1 ;
@end

