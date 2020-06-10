/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ISDevice : NSObject <ISSingleton> {

	long long _biometricStyle;
	unsigned long long _daemonLaunchCount;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _guid;
	double _lastFreeSpaceRequest;

}

@property (readonly) NSString * deviceName; 
@property (readonly) NSString * guid; 
@property (readonly) NSString * hardwareName; 
@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * systemName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(int)_deviceClass;
-(NSString *)guid;
-(NSString *)systemName;
-(BOOL)checkCapabilities:(id)arg1 withMismatches:(id*)arg2 ;
-(id)copyProtocolConditionalContext;
-(long long)deviceBiometricStyle;
-(NSString *)hardwareName;
-(BOOL)releasePowerAssertion:(id)arg1 ;
-(BOOL)takePowerAssertion:(id)arg1 ;
-(void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)resetLocationAndPrivacy;
-(id)supportedOfferDeviceForDevices:(id)arg1 ;
@end
