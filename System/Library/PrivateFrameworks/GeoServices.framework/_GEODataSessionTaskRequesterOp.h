/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOProtobufSessionTaskDelegate.h>

@protocol GEOServiceRequestConfiguring;
@class GEOProtobufSessionTask, PBRequest, NSString, GEOApplicationAuditToken, GEOMapServiceTraits, GEODataRequestThrottlerToken;

@interface _GEODataSessionTaskRequesterOp : NSObject <GEOProtobufSessionTaskDelegate> {

	GEOProtobufSessionTask* _task;
	BOOL _canceled;
	PBRequest* _request;
	NSString* _debugRequestName;
	/*^block*/id _completionHandler;
	/*^block*/id _validationHandler;
	id<GEOServiceRequestConfiguring> _config;
	NSString* _appIdentifier;
	GEOApplicationAuditToken* _auditToken;
	SCD_Struct_GE92 _dataRequestKind;
	GEOMapServiceTraits* _traits;
	double _timeout;
	GEODataRequestThrottlerToken* _throttleToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(void)_cleanup;
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(id)protobufSession:(id)arg1 validateResponse:(id)arg2 ;
-(id)initWithRequest:(id)arg1 auditToken:(id)arg2 config:(id)arg3 timeout:(double)arg4 dataRequestKind:(SCD_Struct_GE92)arg5 traits:(id)arg6 throttleToken:(id)arg7 ;
-(void)startWithValidationHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fullURL;
-(id)_userInfoForTask:(id)arg1 ;
@end

