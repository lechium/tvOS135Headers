/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/HID.feature/HID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACCFeaturePluginProtocol.h>

@class ACCFeaturePluginHIDProvider, NSString;

@interface ACCFeaturePluginHID : NSObject <ACCFeaturePluginProtocol> {

	BOOL _isRunning;
	ACCFeaturePluginHIDProvider* _hidProvider;

}

@property (assign,nonatomic) BOOL isRunning;                                         //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) ACCFeaturePluginHIDProvider * hidProvider;              //@synthesize hidProvider=_hidProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(NSString *)description;
-(BOOL)isRunning;
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(void)setHidProvider:(ACCFeaturePluginHIDProvider *)arg1 ;
-(ACCFeaturePluginHIDProvider *)hidProvider;
@end

