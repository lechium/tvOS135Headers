/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CalSpotlightQueryResult : NSObject {

	BOOL _naturalLanguageSuggestedEvent;
	NSString* _identifier;
	NSString* _title;

}

@property (retain) NSString * identifier;                                                                            //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * title;                                                                                 //@synthesize title=_title - In the implementation block
@property (assign,getter=isNaturalLanguageSuggestedEvent,nonatomic) BOOL naturalLanguageSuggestedEvent;              //@synthesize naturalLanguageSuggestedEvent=_naturalLanguageSuggestedEvent - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isNaturalLanguageSuggestedEvent;
-(void)setNaturalLanguageSuggestedEvent:(BOOL)arg1 ;
@end
