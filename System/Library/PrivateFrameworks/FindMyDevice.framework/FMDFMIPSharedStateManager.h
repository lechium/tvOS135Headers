/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface FMDFMIPSharedStateManager : NSObject {

	NSURL* _fmipSharedFileStaticURL;
	NSObject*<OS_dispatch_queue> _stateManagerQueue;

}

@property (retain) NSURL * fmipSharedFileStaticURL;                                       //@synthesize fmipSharedFileStaticURL=_fmipSharedFileStaticURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateManagerQueue;              //@synthesize stateManagerQueue=_stateManagerQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(unsigned long long)lostModeType;
-(id)_fmipSharedFileURL;
-(id)_readSharedInfo;
-(BOOL)_writeSharedInfo:(id)arg1 ;
-(NSURL *)fmipSharedFileStaticURL;
-(void)setFmipSharedFileStaticURL:(NSURL *)arg1 ;
-(void)setFMiPActive:(BOOL)arg1 ;
-(void)recalculateLostMode;
-(BOOL)fmipActive;
-(BOOL)_removeSharedInfo;
-(NSObject*<OS_dispatch_queue>)stateManagerQueue;
-(void)setStateManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

