/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationExtensionViewHostProtocol.h>

@protocol PKExtensionRemoteViewControllerDelegate;
@class NSString;

@interface PKExtensionRemoteViewController : _UIRemoteViewController <PKPaymentAuthorizationExtensionViewHostProtocol> {

	id<PKExtensionRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKExtensionRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<PKExtensionRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKExtensionRemoteViewControllerDelegate>)arg1 ;
-(id)exportedInterface;
-(id)serviceViewControllerInterface;
@end

