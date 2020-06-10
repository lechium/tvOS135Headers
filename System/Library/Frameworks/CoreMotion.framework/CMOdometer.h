/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMOdometerDelegate;
@class CMOdometerProxy;

@interface CMOdometer : NSObject {

	id<CMOdometerDelegate> _delegate;
	CMOdometerProxy* _odometerProxy;

}

@property (nonatomic,readonly) CMOdometerProxy * odometerProxy;              //@synthesize odometerProxy=_odometerProxy - In the implementation block
@property (assign,nonatomic) id<CMOdometerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<CMOdometerDelegate>)delegate;
-(void)setDelegate:(id<CMOdometerDelegate>)arg1 ;
-(CMOdometerProxy *)odometerProxy;
-(void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopOdometerUpdates;
@end
