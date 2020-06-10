/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSXPCConnection, NSObject;

@interface BRLTTranslationService : NSObject {

	BOOL _invalid;
	BOOL _interrupted;
	NSString* _serviceIdentifier;
	/*^block*/id _invalidationHandler;
	NSXPCConnection* _queue_connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * queue_connection;              //@synthesize queue_connection=_queue_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isInvalid,nonatomic) BOOL invalid;                   //@synthesize invalid=_invalid - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier;                  //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (getter=isLoopback,nonatomic,readonly) BOOL loopback; 
@property (nonatomic,copy) id invalidationHandler;                            //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
+(id)serviceForIdentifier:(id)arg1 ;
+(id)connections;
+(id)serviceForIdentifier:(id)arg1 loopback:(BOOL)arg2 ;
+(id)connectionForServiceIdentifier:(id)arg1 ;
+(id)connectionForLoopbackService:(id)arg1 ;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSXPCConnection *)queue_connection;
-(void)_queue_invalidate;
-(NSString *)serviceIdentifier;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(BOOL)isInvalid;
-(BOOL)isLoopback;
-(void)setInvalid:(BOOL)arg1 ;
-(void)brailleForText:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)textForBraille:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2 ;
-(void)_queue_resume;
-(void)_queue_loadBundle;
-(void)setQueue_connection:(NSXPCConnection *)arg1 ;
-(id)_queue_serviceProxy;
@end
