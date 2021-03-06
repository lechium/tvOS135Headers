/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIUserModelMetricsDescriptor.h>

@class NSString;

@interface TIUserModelSettingValueDescriptor : TIUserModelMetricsDescriptor {

	NSString* _settingName;

}

@property (retain) NSString * settingName;              //@synthesize settingName=_settingName - In the implementation block
+(id)configureSettingsValueDescriptors;
-(NSString *)settingName;
-(id)initWithValueName:(id)arg1 settingName:(id)arg2 ;
-(void)setSettingName:(NSString *)arg1 ;
@end

