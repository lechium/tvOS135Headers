/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPInternal/CDPDBackupErrorProviderImpl.h>

@interface CDPDBackupIDMSErrorProvider : CDPDBackupErrorProviderImpl
-(id)recordNotFoundErrorWithUnderlyingError:(id)arg1 ;
-(BOOL)supportsErrorPresentation;
-(id)cooldownErrorWithUnderlyingError:(id)arg1 ;
-(void)handleSoftLimitError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)globalHardLimitError;
-(void)handleHardLimitError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)globalHardLimitErrorWithRecord:(id)arg1 ;
-(id)hardLimitErrorForRecord:(id)arg1 ;
@end

