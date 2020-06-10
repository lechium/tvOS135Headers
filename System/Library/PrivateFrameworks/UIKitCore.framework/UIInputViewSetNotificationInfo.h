/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSDictionary;

@interface UIInputViewSetNotificationInfo : NSObject {

	BOOL _changedAccessoryOnly;
	BOOL _assistantOnScreenOnly;
	BOOL _forceNotification;
	BOOL _wasCausedRemotely;
	BOOL _dueToRotation;
	double _duration;
	unsigned long long _options;
	CGPoint _beginCenter;
	CGPoint _endCenter;
	CGRect _beginFrame;
	CGRect _endFrame;
	CGRect _bounds;

}

@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) NSDictionary * privateUserInfo; 
@property (assign,nonatomic) CGRect beginFrame;                             //@synthesize beginFrame=_beginFrame - In the implementation block
@property (assign,nonatomic) CGRect endFrame;                               //@synthesize endFrame=_endFrame - In the implementation block
@property (assign,nonatomic) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL changedAccessoryOnly;                     //@synthesize changedAccessoryOnly=_changedAccessoryOnly - In the implementation block
@property (assign,nonatomic) BOOL assistantOnScreenOnly;                    //@synthesize assistantOnScreenOnly=_assistantOnScreenOnly - In the implementation block
@property (assign,nonatomic) BOOL forceNotification;                        //@synthesize forceNotification=_forceNotification - In the implementation block
@property (assign,nonatomic) BOOL wasCausedRemotely;                        //@synthesize wasCausedRemotely=_wasCausedRemotely - In the implementation block
@property (assign,nonatomic) BOOL dueToRotation;                            //@synthesize dueToRotation=_dueToRotation - In the implementation block
@property (assign,nonatomic) CGPoint beginCenter;                           //@synthesize beginCenter=_beginCenter - In the implementation block
@property (assign,nonatomic) CGPoint endCenter;                             //@synthesize endCenter=_endCenter - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                 //@synthesize bounds=_bounds - In the implementation block
+(id)info;
-(id)init;
-(unsigned long long)options;
-(NSDictionary *)userInfo;
-(void)setOptions:(unsigned long long)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)endFrame;
-(void)setEndFrame:(CGRect)arg1 ;
-(void)setWasCausedRemotely:(BOOL)arg1 ;
-(void)populateStartInfoWithFrame:(CGRect)arg1 ;
-(CGRect)beginFrame;
-(void)populateEndInfoWithFrame:(CGRect)arg1 ;
-(CGPoint)beginCenter;
-(CGPoint)endCenter;
-(BOOL)wasCausedRemotely;
-(BOOL)changedAccessoryOnly;
-(BOOL)assistantOnScreenOnly;
-(BOOL)dueToRotation;
-(void)setBeginFrame:(CGRect)arg1 ;
-(void)setBeginCenter:(CGPoint)arg1 ;
-(void)setEndCenter:(CGPoint)arg1 ;
-(id)inverseInfo;
-(id)rotationUserInfo;
-(NSDictionary *)privateUserInfo;
-(void)logGeometry;
-(BOOL)containsChange;
-(void)populateWithAnimationStyle:(id)arg1 ;
-(void)setChangedAccessoryOnly:(BOOL)arg1 ;
-(void)setAssistantOnScreenOnly:(BOOL)arg1 ;
-(BOOL)forceNotification;
-(void)setForceNotification:(BOOL)arg1 ;
-(void)setDueToRotation:(BOOL)arg1 ;
@end
