/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/AFUISceneClientSettings.h>

@protocol AFUISceneClientSettings <NSObject>
@property (nonatomic,readonly) unsigned clientWindowContextID; 
@required
-(unsigned)clientWindowContextID;

@end


@class NSString;

@interface AFUISceneClientSettings : UIApplicationSceneClientSettings <AFUISceneClientSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned clientWindowContextID; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)clientWindowContextID;
@end

