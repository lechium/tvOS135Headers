/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/AUAudioUnitHostViewProtocol.h>

@class NSString;

@interface AUAudioUnitRemoteViewController : _UIRemoteViewController <AUAudioUnitHostViewProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)_fetchViewControllerForExtension:(id)arg1 inputItems:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)isIOSMacExtension:(id)arg1 ;
+(void)_fetchViewController:(id)arg1 requestIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(id)serviceViewControllerInterface;
@end

