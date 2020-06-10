/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TrustCertificateViewControllerDelegate.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFCertificateProviderContext;
@class TrustCertificateViewController, NSString;

@interface WFTrustCertificateViewController : UIViewController <TrustCertificateViewControllerDelegate, WFNetworkView> {

	BOOL _wantsModalPresentation;
	TrustCertificateViewController* _certViewController;
	id<WFCertificateProviderContext> _credentialsContext;

}

@property (nonatomic,retain) TrustCertificateViewController * certViewController;              //@synthesize certViewController=_certViewController - In the implementation block
@property (nonatomic,retain) id<WFCertificateProviderContext> credentialsContext;              //@synthesize credentialsContext=_credentialsContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsModalPresentation;                                    //@synthesize wantsModalPresentation=_wantsModalPresentation - In the implementation block
-(void)loadView;
-(void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2 ;
-(BOOL)wantsModalPresentation;
-(TrustCertificateViewController *)certViewController;
-(id<WFCertificateProviderContext>)credentialsContext;
-(id)initWithCertificateProviderContext:(id)arg1 ;
-(void)setCertViewController:(TrustCertificateViewController *)arg1 ;
-(void)setCredentialsContext:(id<WFCertificateProviderContext>)arg1 ;
@end

