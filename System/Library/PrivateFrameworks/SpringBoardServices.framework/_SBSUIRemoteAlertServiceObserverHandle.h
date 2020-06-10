/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@class NSString;

@interface _SBSUIRemoteAlertServiceObserverHandle : NSObject <SBSRemoteAlertHandleObserver> {

	/*^block*/id _activationHandler;
	/*^block*/id _deactivationHandler;

}

@property (nonatomic,copy) id activationHandler;                    //@synthesize activationHandler=_activationHandler - In the implementation block
@property (nonatomic,copy) id deactivationHandler;                  //@synthesize deactivationHandler=_deactivationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActivationHandler:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)activationHandler;
-(id)deactivationHandler;
-(void)setDeactivationHandler:(id)arg1 ;
@end

