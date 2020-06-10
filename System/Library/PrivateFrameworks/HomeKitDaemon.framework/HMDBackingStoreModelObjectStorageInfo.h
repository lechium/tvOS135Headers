/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMFVersion;

@interface HMDBackingStoreModelObjectStorageInfo : HMFObject {

	BOOL _defaultValueSet;
	Class _classObj;
	unsigned long long _logging;
	HMFVersion* _readOnly;
	HMFVersion* _unavailable;
	id _defaultValue;

}

@property (nonatomic,retain) HMFVersion * readOnly;                     //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,retain) HMFVersion * unavailable;                  //@synthesize unavailable=_unavailable - In the implementation block
@property (nonatomic,readonly) Class classObj;                          //@synthesize classObj=_classObj - In the implementation block
@property (nonatomic,readonly) unsigned long long logging;              //@synthesize logging=_logging - In the implementation block
@property (nonatomic,readonly) id defaultValue;                         //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) BOOL defaultValueSet;                    //@synthesize defaultValueSet=_defaultValueSet - In the implementation block
+(id)infoWithClass:(Class)arg1 ;
+(id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2 ;
+(id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3 ;
+(id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3 unavailable:(id)arg4 ;
+(id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 ;
+(id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3 ;
+(id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3 readOnly:(id)arg4 ;
+(id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3 readOnly:(id)arg4 unavailable:(id)arg5 ;
+(id)deprecatedField;
-(id)description;
-(unsigned long long)logging;
-(id)defaultValue;
-(void)setReadOnly:(HMFVersion *)arg1 ;
-(HMFVersion *)unavailable;
-(void)setUnavailable:(HMFVersion *)arg1 ;
-(HMFVersion *)readOnly;
-(id)initWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3 unavailable:(id)arg4 defaultSet:(BOOL)arg5 defaultValue:(id)arg6 ;
-(BOOL)defaultValueSet;
-(Class)classObj;
@end

