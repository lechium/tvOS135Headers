/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TURemoteVideoClient.h>

@protocol TURemoteVideoClient <NSObject>
@required
-(void)setVideoLayer:(id)arg1 forMode:(int)arg2;

@end


@class CALayer, NSString;

@interface TURemoteVideoClient : NSObject <TURemoteVideoClient> {

	long long _videoContextSlotIdentifier;
	CALayer* _videoLayer;

}

@property (nonatomic,readonly) long long videoContextSlotIdentifier;              //@synthesize videoContextSlotIdentifier=_videoContextSlotIdentifier - In the implementation block
@property (nonatomic,retain) CALayer * videoLayer;                                //@synthesize videoLayer=_videoLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setVideoLayer:(CALayer *)arg1 ;
-(CALayer *)videoLayer;
-(void)cleanUpSubLayerForLayer:(id)arg1 ;
-(long long)videoContextSlotIdentifier;
-(void)insertSubLayerInLayer:(id)arg1 videoSlotIdentifier:(long long)arg2 ;
-(id)nameForSubLayer;
-(void)setVideoLayer:(id)arg1 forMode:(int)arg2 ;
-(id)initWithVideoContextSlotIdentifier:(long long)arg1 ;
@end

