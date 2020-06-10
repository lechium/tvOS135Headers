/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOProtobufSessionTaskDelegate.h>

@class GEOProtobufSession, GEOProtobufSessionTask, NSString;

@interface GEOVoltaireAddressCorrectionProvider : NSObject <GEOProtobufSessionTaskDelegate> {

	GEOProtobufSession* _protobufSession;
	GEOProtobufSessionTask* _initializationTask;
	GEOProtobufSessionTask* _updateTask;
	/*^block*/id _initErrorHandler;
	/*^block*/id _initFinishedHandler;
	/*^block*/id _updateFinishedHandler;
	/*^block*/id _updateErrorHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOProtobufSession * protobufSession;                   //@synthesize protobufSession=_protobufSession - In the implementation block
@property (nonatomic,retain) GEOProtobufSessionTask * initializationTask;              //@synthesize initializationTask=_initializationTask - In the implementation block
@property (nonatomic,retain) GEOProtobufSessionTask * updateTask;                      //@synthesize updateTask=_updateTask - In the implementation block
@property (nonatomic,copy) id initFinishedHandler;                                     //@synthesize initFinishedHandler=_initFinishedHandler - In the implementation block
@property (nonatomic,copy) id initErrorHandler;                                        //@synthesize initErrorHandler=_initErrorHandler - In the implementation block
@property (nonatomic,copy) id updateFinishedHandler;                                   //@synthesize updateFinishedHandler=_updateFinishedHandler - In the implementation block
@property (nonatomic,copy) id updateErrorHandler;                                      //@synthesize updateErrorHandler=_updateErrorHandler - In the implementation block
+(id)acInitURL;
+(BOOL)acInitNeedsProxy;
+(id)acUpdateURL;
+(BOOL)acUpdateNeedsProxy;
-(id)init;
-(void)cancelRequest;
-(GEOProtobufSession *)protobufSession;
-(id)cancelError;
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(void)startInitRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startUpdateRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)setInitFinishedHandler:(id)arg1 ;
-(void)setInitErrorHandler:(id)arg1 ;
-(void)setInitializationTask:(GEOProtobufSessionTask *)arg1 ;
-(GEOProtobufSessionTask *)initializationTask;
-(void)setUpdateFinishedHandler:(id)arg1 ;
-(void)setUpdateErrorHandler:(id)arg1 ;
-(void)setUpdateTask:(GEOProtobufSessionTask *)arg1 ;
-(GEOProtobufSessionTask *)updateTask;
-(id)initFinishedHandler;
-(id)initErrorHandler;
-(id)updateFinishedHandler;
-(id)updateErrorHandler;
-(void)didCompleteInitTask;
-(void)didCompleteUpdateTask;
@end

