/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/RPVideoEditorExtensionHostProtocol.h>

@class RPPreviewViewController, RPVideoEditorExtensionHostContext;

@interface RPVideoEditorHostViewController : _UIRemoteViewController <RPVideoEditorExtensionHostProtocol> {

	RPPreviewViewController* _previewViewController;
	RPVideoEditorExtensionHostContext* _hostContext;

}

@property (assign,nonatomic,__weak) RPPreviewViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,retain) RPVideoEditorExtensionHostContext * hostContext;                     //@synthesize hostContext=_hostContext - In the implementation block
-(void)setMode:(long long)arg1 ;
-(RPVideoEditorExtensionHostContext *)hostContext;
-(RPPreviewViewController *)previewViewController;
-(void)setPreviewViewController:(RPPreviewViewController *)arg1 ;
-(void)setHostContext:(RPVideoEditorExtensionHostContext *)arg1 ;
-(oneway void)extensionDidFinishWithActivityTypes:(id)arg1 ;
@end
