/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class _IDSCompletionHandler, IDSXPCDaemonController, NSSet, NSString;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol> {

	_IDSCompletionHandler* _deleteCompletion;
	_IDSCompletionHandler* _localCompletion;
	_IDSCompletionHandler* _pairedCompletion;
	_IDSCompletionHandler* _deliveryStatsCompletion;
	IDSXPCDaemonController* _xpcDaemonController;
	NSSet* _allowedTrafficClassifiers;

}

@property (nonatomic,retain) IDSXPCDaemonController * xpcDaemonController;              //@synthesize xpcDaemonController=_xpcDaemonController - In the implementation block
@property (nonatomic,retain) NSSet * allowedTrafficClassifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)dropAllMessagesWithoutAnyAllowedClassifier;
-(void)setPairedDeviceInfo:(id)arg1 ;
-(void)deliveryStats:(id)arg1 ;
-(void)deletePairedDevice:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)getPairedDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)getDeliveryStatsWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)setAllowedTrafficClassifiers:(NSSet *)arg1 ;
-(NSSet *)allowedTrafficClassifiers;
-(IDSXPCDaemonController *)xpcDaemonController;
-(void)getLocalDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)device:(id)arg1 pairingDeleted:(BOOL)arg2 ;
-(void)constructRAResponseDictionary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setXpcDaemonController:(IDSXPCDaemonController *)arg1 ;
@end

