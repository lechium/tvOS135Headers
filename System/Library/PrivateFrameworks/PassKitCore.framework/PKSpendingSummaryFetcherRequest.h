/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface PKSpendingSummaryFetcherRequest : NSObject <NSCopying> {

	BOOL _withLastChange;
	NSDate* _startDate;
	unsigned long long _type;

}

@property (nonatomic,retain) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL withLastChange;                  //@synthesize withLastChange=_withLastChange - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(BOOL)withLastChange;
-(void)setWithLastChange:(BOOL)arg1 ;
@end

