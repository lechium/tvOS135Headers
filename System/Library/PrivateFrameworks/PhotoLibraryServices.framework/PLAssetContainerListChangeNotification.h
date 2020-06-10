/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary;

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification {

	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) id<PLAssetContainerList> assetContainerList; 
@property (nonatomic,readonly) NSObject*<PLAlbumContainer> albumList; 
+(id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3 ;
-(id)name;
-(id)description;
-(id)userInfo;
-(id)_contentRelationshipName;
-(id<PLAssetContainerList>)assetContainerList;
-(NSObject*<PLAlbumContainer>)albumList;
@end

