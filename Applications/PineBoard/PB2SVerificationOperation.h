//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "PBTextEntryViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface PB2SVerificationOperation : ISOperation <PBTextEntryViewControllerDelegate>
{
    unsigned long long _submitIndex;	// 96 = 0x60
    unsigned long long _sendCodeIndex;	// 104 = 0x68
    CDUnknownBlockType _codeHandler;	// 112 = 0x70
    CDUnknownBlockType _sendNewCode;	// 120 = 0x78
    NSString *_customerTitle;	// 128 = 0x80
    NSString *_customerMessage;	// 136 = 0x88
    NSArray *_devices;	// 144 = 0x90
    NSDictionary *_URLs;	// 152 = 0x98
    NSDictionary *_selectedDevice;	// 160 = 0xa0
    NSDictionary *_sendCodeLocalization;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000100106858
@property(retain, nonatomic) NSDictionary *sendCodeLocalization; // @synthesize sendCodeLocalization=_sendCodeLocalization;
@property(retain, nonatomic) NSDictionary *selectedDevice; // @synthesize selectedDevice=_selectedDevice;
@property(retain, nonatomic) NSDictionary *URLs; // @synthesize URLs=_URLs;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSString *customerMessage; // @synthesize customerMessage=_customerMessage;
@property(retain, nonatomic) NSString *customerTitle; // @synthesize customerTitle=_customerTitle;
@property(copy, nonatomic) CDUnknownBlockType sendNewCode; // @synthesize sendNewCode=_sendNewCode;
@property(copy, nonatomic) CDUnknownBlockType codeHandler; // @synthesize codeHandler=_codeHandler;
- (void)textEntryDidCancel:(id)arg1;	// IMP=0x0000000100106378
- (void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100106120
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100105c48
- (void)presentCodeEntryAlertWithTitle:(id)arg1 message:(id)arg2 newCodeLabel:(id)arg3 submitLabel:(id)arg4 newCodeRequestHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010010574c
- (void)presentDevicesAlertWithTitle:(id)arg1 message:(id)arg2 deviceList:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100104e64
- (id)_copyVerifyResponseWithCode:(id)arg1 fromDevice:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100104874
- (id)_copySendCodeResponseForDevice:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100104424
- (id)_copyDevicesResponseWithError:(id *)arg1;	// IMP=0x0000000100104100
- (_Bool)_verify2SVCode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100103844
- (_Bool)_sendCodeToDevice:(id)arg1 error:(id *)arg2 showDialogs:(_Bool)arg3;	// IMP=0x0000000100102ffc
- (_Bool)_sendCodeToSelectedDevice;	// IMP=0x0000000100102ef8
- (void)_displayDeviceListWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100101fe4
- (id)_copy2SVCodeFromUser;	// IMP=0x0000000100101a2c
- (id)_copyDeviceFromUser;	// IMP=0x0000000100101770
- (void)run;	// IMP=0x0000000100101360
- (void)setSerializedURLs:(id)arg1;	// IMP=0x00000001001011e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

