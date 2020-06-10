/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/RPBroadcastPickerExtensionHostProtocol.h>

@class RPSystemBroadcastPickerViewController, RPBroadcastPickerExtensionHostContext;

@interface RPBroadcastPickerHostViewController : _UIRemoteViewController <RPBroadcastPickerExtensionHostProtocol> {

	RPSystemBroadcastPickerViewController* _broadcastPickerViewController;
	RPBroadcastPickerExtensionHostContext* _hostContext;

}

@property (assign,nonatomic,__weak) RPSystemBroadcastPickerViewController * broadcastPickerViewController;              //@synthesize broadcastPickerViewController=_broadcastPickerViewController - In the implementation block
@property (nonatomic,retain) RPBroadcastPickerExtensionHostContext * hostContext;                                       //@synthesize hostContext=_hostContext - In the implementation block
-(RPBroadcastPickerExtensionHostContext *)hostContext;
-(oneway void)viewControllerDidFinish;
-(void)setHostContext:(RPBroadcastPickerExtensionHostContext *)arg1 ;
-(void)setBroadcastPickerViewController:(RPSystemBroadcastPickerViewController *)arg1 ;
-(RPSystemBroadcastPickerViewController *)broadcastPickerViewController;
-(void)sendMessageToExtension;
@end
