/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICSuzeLeaseSession;

@interface MPCSuzeLeaseSession : NSObject {

	ICSuzeLeaseSession* _icSuzeLeaseSession;

}

@property (nonatomic,readonly) ICSuzeLeaseSession * icSuzeLeaseSession;              //@synthesize icSuzeLeaseSession=_icSuzeLeaseSession - In the implementation block
-(void)beginAutomaticallyRefreshingLease;
-(void)endAutomaticallyRefreshingLease;
-(ICSuzeLeaseSession *)icSuzeLeaseSession;
-(id)initWithICSuzeLeaseSession:(id)arg1 ;
@end

