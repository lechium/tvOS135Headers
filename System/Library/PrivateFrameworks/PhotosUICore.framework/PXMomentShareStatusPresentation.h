/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCPLServiceUIDelegate.h>

@class PXCPLServiceUI, NSString, PXMomentShareStatus;

@interface PXMomentShareStatusPresentation : PXObservable <PXChangeObserver, PXCPLServiceUIDelegate> {

	PXCPLServiceUI* _cplServiceUI;
	BOOL _isPaused;
	float _activityProgress;
	long long _type;
	NSString* _assetsTitle;
	NSString* _expirationTitle;
	NSString* _activityTitle;
	NSString* _idleTitle;
	NSString* _pauseTitle;
	NSString* _byline;
	long long _state;
	long long _presentationStyle;
	PXMomentShareStatus* _momentShareStatus;
	long long _numberOfAssetsNotCopied;
	NSString* _pauseStatusDescription;

}

@property (nonatomic,readonly) long long presentationStyle;                          //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,readonly) PXMomentShareStatus * momentShareStatus;              //@synthesize momentShareStatus=_momentShareStatus - In the implementation block
@property (nonatomic,copy) NSString * assetsTitle;                                   //@synthesize assetsTitle=_assetsTitle - In the implementation block
@property (nonatomic,copy) NSString * expirationTitle;                               //@synthesize expirationTitle=_expirationTitle - In the implementation block
@property (nonatomic,copy) NSString * activityTitle;                                 //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,copy) NSString * idleTitle;                                     //@synthesize idleTitle=_idleTitle - In the implementation block
@property (nonatomic,copy) NSString * pauseTitle;                                    //@synthesize pauseTitle=_pauseTitle - In the implementation block
@property (nonatomic,copy) NSString * byline;                                        //@synthesize byline=_byline - In the implementation block
@property (assign,nonatomic) float activityProgress;                                 //@synthesize activityProgress=_activityProgress - In the implementation block
@property (assign,nonatomic) long long numberOfAssetsNotCopied;                      //@synthesize numberOfAssetsNotCopied=_numberOfAssetsNotCopied - In the implementation block
@property (assign,nonatomic) BOOL isPaused;                                          //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,copy) NSString * pauseStatusDescription;                        //@synthesize pauseStatusDescription=_pauseStatusDescription - In the implementation block
@property (nonatomic,readonly) id<PXDisplayMomentShare> momentShare; 
@property (nonatomic,readonly) long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long state;                                      //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(NSString *)description;
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(BOOL)isPaused;
-(long long)presentationStyle;
-(void)setIsPaused:(BOOL)arg1 ;
-(id<PXDisplayMomentShare>)momentShare;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)serviceUI:(id)arg1 statusDidChange:(id)arg2 ;
-(PXMomentShareStatus *)momentShareStatus;
-(id)initWithMomentShareStatus:(id)arg1 presentationStyle:(long long)arg2 ;
-(id)initWithMomentShare:(id)arg1 presentationStyle:(long long)arg2 ;
-(void)setAssetsTitle:(NSString *)arg1 ;
-(void)setExpirationTitle:(NSString *)arg1 ;
-(void)setActivityTitle:(NSString *)arg1 ;
-(void)setIdleTitle:(NSString *)arg1 ;
-(void)setPauseTitle:(NSString *)arg1 ;
-(void)setByline:(NSString *)arg1 ;
-(void)setActivityProgress:(float)arg1 ;
-(void)setNumberOfAssetsNotCopied:(long long)arg1 ;
-(void)_updateCountsAndStatus;
-(void)_updatePausedStatus;
-(NSString *)assetsTitle;
-(NSString *)expirationTitle;
-(NSString *)activityTitle;
-(NSString *)idleTitle;
-(NSString *)pauseTitle;
-(NSString *)byline;
-(float)activityProgress;
-(long long)numberOfAssetsNotCopied;
-(NSString *)pauseStatusDescription;
-(void)setPauseStatusDescription:(NSString *)arg1 ;
@end

