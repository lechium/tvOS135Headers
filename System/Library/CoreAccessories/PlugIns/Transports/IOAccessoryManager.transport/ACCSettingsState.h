/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ACCSettingsState : NSObject {

	BOOL _boolValue;
	BOOL _exists;
	long long _defaultValue;
	long long _invalidValue;
	long long _intValue;
	NSString* _key;
	NSString* _applicationID;
	NSString* _notificationName;

}

@property (nonatomic,readonly) long long defaultValue;                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) long long invalidValue;                   //@synthesize invalidValue=_invalidValue - In the implementation block
@property (nonatomic,readonly) long long intValue;                       //@synthesize intValue=_intValue - In the implementation block
@property (nonatomic,readonly) BOOL boolValue;                           //@synthesize boolValue=_boolValue - In the implementation block
@property (nonatomic,readonly) BOOL exists;                              //@synthesize exists=_exists - In the implementation block
@property (nonatomic,readonly) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * applicationID;                 //@synthesize applicationID=_applicationID - In the implementation block
@property (nonatomic,readonly) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
-(id)description;
-(void)dealloc;
-(long long)intValue;
-(NSString *)key;
-(BOOL)boolValue;
-(long long)defaultValue;
-(void)update;
-(NSString *)applicationID;
-(BOOL)exists;
-(NSString *)notificationName;
-(id)initWithKey:(id)arg1 applicationID:(id)arg2 notification:(id)arg3 defaultValue:(long long)arg4 invalidValue:(long long)arg5 ;
-(void)_readLoggingPrefs;
-(void)_registerForLoggingPrefsNotification;
-(long long)invalidValue;
@end

