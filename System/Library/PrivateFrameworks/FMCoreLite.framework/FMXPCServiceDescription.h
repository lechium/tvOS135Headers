/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSObject, NSXPCInterface;

@interface FMXPCServiceDescription : NSObject {

	NSString* _machService;
	unsigned long long _options;
	NSObject* _exportedObject;
	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteObjectInterface;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,copy) NSString * machService;                                //@synthesize machService=_machService - In the implementation block
@property (assign,nonatomic) unsigned long long options;                          //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSObject * exportedObject;                           //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                  //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface;              //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(unsigned long long)options;
-(void)setExportedObject:(NSObject *)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(NSXPCInterface *)exportedInterface;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject *)exportedObject;
-(NSXPCInterface *)remoteObjectInterface;
-(NSString *)machService;
-(id)initInternalWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteObjectInterface:(id)arg5 interruptionHandler:(/*^block*/id)arg6 invalidationHandler:(/*^block*/id)arg7 ;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 remoteObjectInterface:(id)arg3 interruptionHandler:(/*^block*/id)arg4 invalidationHandler:(/*^block*/id)arg5 ;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteObjectInterface:(id)arg5 interruptionHandler:(/*^block*/id)arg6 invalidationHandler:(/*^block*/id)arg7 ;
-(void)setMachService:(NSString *)arg1 ;
@end

