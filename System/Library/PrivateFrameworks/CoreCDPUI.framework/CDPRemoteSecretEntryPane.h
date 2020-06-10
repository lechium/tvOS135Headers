/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <CoreCDPUI/CDPPassphraseEntryPane.h>

@class UIButton, CDPRemoteValidationEscapeOffer, CDPDevice;

@interface CDPRemoteSecretEntryPane : CDPPassphraseEntryPane {

	UIButton* _footerButton;
	BOOL _remoteAccountRecovery;
	CDPRemoteValidationEscapeOffer* _escapeOffer;
	unsigned long long _remoteSecretType;
	CDPDevice* _device;

}

@property (nonatomic,retain) CDPRemoteValidationEscapeOffer * escapeOffer;              //@synthesize escapeOffer=_escapeOffer - In the implementation block
@property (assign,nonatomic) unsigned long long remoteSecretType;                       //@synthesize remoteSecretType=_remoteSecretType - In the implementation block
@property (nonatomic,retain) CDPDevice * device;                                        //@synthesize device=_device - In the implementation block
@property (assign) BOOL remoteAccountRecovery;                                          //@synthesize remoteAccountRecovery=_remoteAccountRecovery - In the implementation block
-(void)setTitle:(id)arg1 ;
-(CDPDevice *)device;
-(void)setDevice:(CDPDevice *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didFinishResizingHeaderView;
-(void)didFinishResizingPinView;
-(void)setEscapeOffer:(CDPRemoteValidationEscapeOffer *)arg1 ;
-(void)setRemoteSecretType:(unsigned long long)arg1 ;
-(CDPRemoteValidationEscapeOffer *)escapeOffer;
-(void)setRemoteAccountRecovery:(BOOL)arg1 ;
-(id)_headerStringForDevice:(id)arg1 localDeviceClass:(id)arg2 ;
-(unsigned long long)remoteSecretType;
-(BOOL)remoteAccountRecovery;
@end

