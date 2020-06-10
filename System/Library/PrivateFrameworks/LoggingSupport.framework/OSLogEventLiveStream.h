/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/OSLogEventStreamBase.h>

@protocol OS_xpc_object;
@class _OSLogStreamFilter, NSObject, OSLogEventLiveSource;

@interface OSLogEventLiveStream : OSLogEventStreamBase {

	_OSLogStreamFilter* _streamFilter;
	unsigned long long _reason;
	NSObject*<OS_xpc_object> _diagdconn;
	OSLogEventLiveSource* _source;
	/*^block*/id _dropnoteHandler;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> diagdconn;              //@synthesize diagdconn=_diagdconn - In the implementation block
@property (nonatomic,copy) id dropnoteHandler;                                //@synthesize dropnoteHandler=_dropnoteHandler - In the implementation block
@property (nonatomic,readonly) OSLogEventLiveSource * source;                 //@synthesize source=_source - In the implementation block
-(void)invalidate;
-(OSLogEventLiveSource *)source;
-(void)activate;
-(void)setFilterPredicate:(id)arg1 ;
-(id)initWithLiveSource:(id)arg1 ;
-(void)setDroppedEventHandler:(/*^block*/id)arg1 ;
-(void)_handleStreamedObject:(id)arg1 usingProxy:(id)arg2 ;
-(void)_activateLiveStream;
-(NSObject*<OS_xpc_object>)diagdconn;
-(void)setDiagdconn:(NSObject*<OS_xpc_object>)arg1 ;
-(id)dropnoteHandler;
-(void)setDropnoteHandler:(id)arg1 ;
@end

