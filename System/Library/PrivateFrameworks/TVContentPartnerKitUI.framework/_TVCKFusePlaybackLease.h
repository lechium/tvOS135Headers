/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSVPlaybackLeaseDelegate.h>

@class SSVPlaybackLease, NSString;

@interface _TVCKFusePlaybackLease : NSObject <SSVPlaybackLeaseDelegate> {

	int _assetCount;
	SSVPlaybackLease* _lease;

}

@property (nonatomic,retain) SSVPlaybackLease * lease;              //@synthesize lease=_lease - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)_endLease;
-(void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3 ;
-(void)playbackLeaseDidEnd:(id)arg1 ;
-(void)getAssetWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SSVPlaybackLease *)lease;
-(void)cleanupAsset;
-(void)setLease:(SSVPlaybackLease *)arg1 ;
@end

