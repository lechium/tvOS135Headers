/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, HAPPairingIdentity, HMFPairingIdentity, NSDate, NSArray;

@interface HMDUserManagementOperationModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSNumber * operationType; 
@property (nonatomic,retain) HAPPairingIdentity * userPairingIdentity; 
@property (nonatomic,retain) HMFPairingIdentity * accessoryPairingIdentity; 
@property (nonatomic,retain) HAPPairingIdentity * ownerPairingIdentity; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,retain) NSArray * dependencies; 
+(id)properties;
-(id)dependentUUIDs;
@end
