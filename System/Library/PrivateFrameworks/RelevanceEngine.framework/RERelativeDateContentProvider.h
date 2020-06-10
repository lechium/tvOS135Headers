/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate;

@interface RERelativeDateContentProvider : RETextContentProvider {

	NSDate* _date;
	long long _style;
	unsigned long long _units;

}

@property (nonatomic,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned long long units;              //@synthesize units=_units - In the implementation block
+(id)relativeDateContentProviderWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(long long)style;
-(unsigned long long)units;
-(id)attributedStringRepresentation;
-(id)initWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3 ;
@end
