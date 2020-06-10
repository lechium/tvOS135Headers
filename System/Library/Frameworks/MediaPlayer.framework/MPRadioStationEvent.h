/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPMutableRadioStationEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MPRadioStationEvent : NSObject <MPMutableRadioStationEvent, NSSecureCoding> {

	NSString* _title;
	NSString* _descriptionText;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSDate * startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSDate * endTime;                        //@synthesize endTime=_endTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
@end

