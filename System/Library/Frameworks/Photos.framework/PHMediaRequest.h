/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PHAsset;

@interface PHMediaRequest : NSObject {

	unsigned long long _requestIndex;
	AB _cancelled;
	NSString* _identifierString;
	int _requestID;
	unsigned long long _managerID;
	PHAsset* _asset;
	long long _contextType;
	unsigned long long _signpostID;

}

@property (nonatomic,readonly) int requestID;                                      //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) unsigned long long requestIndex;                    //@synthesize requestIndex=_requestIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long managerID;                       //@synthesize managerID=_managerID - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) long long contextType;                              //@synthesize contextType=_contextType - In the implementation block
@property (assign,nonatomic) unsigned long long signpostID;                        //@synthesize signpostID=_signpostID - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isSynchronous,nonatomic,readonly) BOOL synchronous; 
-(void)cancel;
-(BOOL)isCancelled;
-(unsigned long long)signpostID;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(long long)contextType;
-(PHAsset *)asset;
-(int)requestID;
-(id)identifierString;
-(void)startRequest;
-(BOOL)isSynchronous;
-(void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(unsigned long long)managerID;
-(id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 ;
-(unsigned long long)requestIndex;
@end

