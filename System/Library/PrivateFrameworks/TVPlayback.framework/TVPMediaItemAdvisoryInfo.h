/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVPMediaItemAdvisoryInfo : NSObject {

	NSString* _ratingName;
	NSString* _ratingDescription;

}

@property (nonatomic,retain) NSString * ratingName;                       //@synthesize ratingName=_ratingName - In the implementation block
@property (nonatomic,readonly) NSString * ratingDescription;              //@synthesize ratingDescription=_ratingDescription - In the implementation block
-(id)description;
-(NSString *)ratingDescription;
-(NSString *)ratingName;
-(id)initWithRatingDescription:(id)arg1 ;
-(void)setRatingName:(NSString *)arg1 ;
@end
