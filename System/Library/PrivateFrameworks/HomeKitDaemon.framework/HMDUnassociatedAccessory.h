/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, HMAccessoryCategory, HMDAccessoryAdvertisement, NSObject, HMFMessageDispatcher;

@interface HMDUnassociatedAccessory : HMFObject <HMFLogging, HMFMessageReceiver, NSSecureCoding> {

	NSUUID* _uuid;
	NSString* _name;
	HMAccessoryCategory* _category;
	NSString* _identifier;
	long long _associationOptions;
	HMDAccessoryAdvertisement* _accessoryAdvertisement;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _messageDispatcher;

}

@property (nonatomic,retain) HMDAccessoryAdvertisement * accessoryAdvertisement;              //@synthesize accessoryAdvertisement=_accessoryAdvertisement - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                    //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;                      //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (retain) HMAccessoryCategory * category;                                            //@synthesize category=_category - In the implementation block
@property (setter=setUUID:,copy) NSUUID * uuid;                                               //@synthesize uuid=_uuid - In the implementation block
@property (copy,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable; 
@property (readonly) long long associationOptions;                                            //@synthesize associationOptions=_associationOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
+(id)otherAccessoryCategory;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setUUID:(id)arg1 ;
-(HMAccessoryCategory *)category;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)shortDescription;
-(BOOL)isReachable;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)messageDestination;
-(long long)associationOptions;
-(void)identifyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_registerForMessages;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2 ;
-(id)dumpDescription;
-(void)associateWithAccessoryAdvertisement:(id)arg1 ;
-(HMDAccessoryAdvertisement *)accessoryAdvertisement;
-(void)setAccessoryAdvertisement:(HMDAccessoryAdvertisement *)arg1 ;
-(void)_handleIdentify:(id)arg1 ;
-(void)notifyClientOfUpdatedName:(id)arg1 ;
-(void)notifyClientOfUpdatedCategory:(id)arg1 ;
-(void)updateCategoryWithCategoryIdentifier:(id)arg1 ;
@end

