/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>

@class PSCloudStorageOffersManager, NSString;

@interface AAUICloudStorageOffersManager : NSObject <PSCloudStorageOffersManagerDelegate> {

	PSCloudStorageOffersManager* _cloudStorageOffersManager;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) PSCloudStorageOffersManager * cloudStorageOffersManager;              //@synthesize cloudStorageOffersManager=_cloudStorageOffersManager - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)managerDidCancel:(id)arg1 ;
-(void)manager:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)presentCloudStorageOffersPageFromNavigationController:(id)arg1 requiredStorageThreshold:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(PSCloudStorageOffersManager *)cloudStorageOffersManager;
-(void)setCloudStorageOffersManager:(PSCloudStorageOffersManager *)arg1 ;
@end
