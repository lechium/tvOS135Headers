/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, TVHAPController;

@interface THAController : NSObject {

	BOOL _supportsSiri;
	BOOL _reachable;
	BOOL _selected;
	unsigned _identifier;
	NSString* _name;
	unsigned long long _ticksPerSecond;
	NSSet* _selectedButtons;
	TVHAPController* _tvController;

}

@property (nonatomic,retain) NSSet * selectedButtons;                        //@synthesize selectedButtons=_selectedButtons - In the implementation block
@property (nonatomic,retain) TVHAPController * tvController;                 //@synthesize tvController=_tvController - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long ticksPerSecond;              //@synthesize ticksPerSecond=_ticksPerSecond - In the implementation block
@property (assign,nonatomic) BOOL supportsSiri;                              //@synthesize supportsSiri=_supportsSiri - In the implementation block
@property (assign,nonatomic) BOOL reachable;                                 //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) BOOL selected;                                  //@synthesize selected=_selected - In the implementation block
+(id)selectButtonConfiguration:(id)arg1 supportsSiri:(BOOL)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned)identifier;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(BOOL)supportsSiri;
-(void)setReachable:(BOOL)arg1 ;
-(unsigned long long)ticksPerSecond;
-(BOOL)reachable;
-(void)setTicksPerSecond:(unsigned long long)arg1 ;
-(void)updateSelectedButtons:(id)arg1 ;
-(void)setSupportsSiri:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 identifier:(unsigned)arg2 ticksPerSecond:(unsigned long long)arg3 supportedButtons:(id)arg4 supportsSiri:(BOOL)arg5 ;
-(BOOL)dispatchButtonEvent:(id)arg1 ;
-(NSSet *)selectedButtons;
-(void)setSelectedButtons:(NSSet *)arg1 ;
-(TVHAPController *)tvController;
-(void)setTvController:(TVHAPController *)arg1 ;
@end
