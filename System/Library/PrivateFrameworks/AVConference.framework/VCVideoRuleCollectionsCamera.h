/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollections.h>

@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections {

	BOOL _encodeHighDef;
	BOOL _decodeHighDef;

}
+(id)sharedInstance;
-(double)preferredAspectRatio;
-(BOOL)useSoftFramerateSwitching;
-(BOOL)getBestPreviewFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 ;
-(BOOL)setupH264CellularRules;
-(void)resetEncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2 ;
-(id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 payload:(int)arg3 ;
-(id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 ;
-(BOOL)isHiDefCapable;
-(VCBitrateConfiguration*)bitrateConfiguration;
@end

