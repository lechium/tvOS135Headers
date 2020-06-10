/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@interface ICFPSAPContext : NSObject {

	FPSAPContextOpaque_Ref _fairPlaySAPContext;
	FairPlayHWInfo_ _hardwareInfo;

}
-(void)dealloc;
-(BOOL)signData:(id)arg1 returningSignatureData:(id*)arg2 error:(id*)arg3 ;
-(id)initReturningError:(id*)arg1 ;
-(BOOL)exchangeWithSAPVersion:(unsigned)arg1 data:(id)arg2 returningData:(id*)arg3 exchangeStatus:(char*)arg4 error:(id*)arg5 ;
-(BOOL)processResponseWithSignatureData:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
@end

