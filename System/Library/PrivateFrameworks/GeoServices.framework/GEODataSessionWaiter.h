/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>

@class GEODataSession, GEODataSessionTask, NSString;

@interface GEODataSessionWaiter : NSObject <GEODataSessionTaskDelegate> {

	GEODataSession* _session;
	GEODataSessionTask* _task;
	/*^block*/id _handler;
	id _strongReferenceToSelf;

}

@property (nonatomic,retain) GEODataSession * session;               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) GEODataSessionTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,copy) id handler;                               //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)handler;
-(GEODataSession *)session;
-(GEODataSessionTask *)task;
-(void)setTask:(GEODataSessionTask *)arg1 ;
-(void)setSession:(GEODataSession *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(id)initWithSession:(id)arg1 request:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

