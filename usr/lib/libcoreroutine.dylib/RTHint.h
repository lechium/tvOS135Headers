/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, NSDate;

@interface RTHint : NSObject {

	CLLocation* _location;
	long long _source;
	NSDate* _date;

}

@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * date;                    //@synthesize date=_date - In the implementation block
+(id)hintSourceToString:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSource:(long long)arg1 ;
-(NSDate *)date;
-(long long)source;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 source:(long long)arg2 date:(id)arg3 ;
@end

