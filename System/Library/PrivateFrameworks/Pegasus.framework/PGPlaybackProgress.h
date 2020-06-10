/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PGPlaybackProgress : NSObject <NSSecureCoding> {

	double _anchorProgress;
	double _anchorTimestamp;
	double _rate;

}

@property (nonatomic,readonly) double anchorProgress; 
@property (nonatomic,readonly) double anchorTimestamp; 
@property (nonatomic,readonly) double rate; 
@property (nonatomic,readonly) double currentProgress; 
+(BOOL)supportsSecureCoding;
+(double)currentTimestamp;
+(id)playbackProgressWithAnchorProgress:(double)arg1 anchorTimestamp:(double)arg2 rate:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)currentProgress;
-(double)rate;
-(id)initWithAnchorProgress:(double)arg1 anchorTimestamp:(double)arg2 rate:(double)arg3 ;
-(double)progressForTimestamp:(double)arg1 ;
-(double)anchorProgress;
-(double)anchorTimestamp;
@end

