/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVPMediaItemSkipInfo : NSObject {

	unsigned long long _type;
	double _start;
	double _duration;
	double _target;
	NSString* _localizedTitle;

}

@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double start;                                //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double target;                               //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
-(id)description;
-(unsigned long long)type;
-(double)target;
-(double)start;
-(double)duration;
-(NSString *)localizedTitle;
-(id)_typeDescription;
-(id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4 localizedTitle:(id)arg5 ;
-(id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4 ;
@end

