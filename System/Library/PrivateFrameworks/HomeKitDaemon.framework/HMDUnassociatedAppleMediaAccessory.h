/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUnassociatedMediaAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, HMFSoftwareVersion, HMDDevice;

@interface HMDUnassociatedAppleMediaAccessory : HMDUnassociatedMediaAccessory <HMFLogging> {

	BOOL _currentAccessory;
	NSString* _model;
	NSString* _serialNumber;
	HMFSoftwareVersion* _softwareVersion;
	HMDDevice* _device;

}

@property (retain) HMDDevice * device;                                                     //@synthesize device=_device - In the implementation block
@property (copy) NSString * model;                                                         //@synthesize model=_model - In the implementation block
@property (copy) NSString * serialNumber;                                                  //@synthesize serialNumber=_serialNumber - In the implementation block
@property (copy) HMFSoftwareVersion * softwareVersion;                                     //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (assign,getter=isCurrentAccessory,nonatomic) BOOL currentAccessory;              //@synthesize currentAccessory=_currentAccessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(Class)modelClass;
+(id)namespace;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDDevice *)device;
-(NSString *)model;
-(NSString *)serialNumber;
-(void)setDevice:(HMDDevice *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setSoftwareVersion:(HMFSoftwareVersion *)arg1 ;
-(HMFSoftwareVersion *)softwareVersion;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)logIdentifier;
-(BOOL)isCurrentAccessory;
-(void)setCurrentAccessory:(BOOL)arg1 ;
-(id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2 ;
-(id)dumpDescription;
@end

