/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CBCentralManager, NSObject, ATVModel, NSString;

@interface CBConnectionsObserver : NSObject <CBCentralManagerDelegate> {

	BOOL _hasStarted;
	CBCentralManager* _central;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ATVModel* _model;

}

@property (retain) CBCentralManager * central;                              //@synthesize central=_central - In the implementation block
@property (__weak) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL hasStarted;                               //@synthesize hasStarted=_hasStarted - In the implementation block
@property (retain) ATVModel * model;                                        //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)hasStarted;
-(void)setHasStarted:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(ATVModel *)model;
-(void)setModel:(ATVModel *)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(CBCentralManager *)central;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)getStatus;
-(id)initWithCentralManager:(id)arg1 Queue:(id)arg2 Error:(id*)arg3 ;
-(void)cleanupWithError:(id*)arg1 ;
-(int)getAvailableHAPConnections;
-(void)attachSessionWithError:(id*)arg1 ;
-(void)setCentral:(CBCentralManager *)arg1 ;
-(void)updateBleStatus:(BTRemoteContext*)arg1 ;
@end

