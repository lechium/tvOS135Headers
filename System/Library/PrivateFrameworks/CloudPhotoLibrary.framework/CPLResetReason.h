/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CPLResetReason : NSObject <NSSecureCoding> {

	BOOL _tentative;
	NSString* _uuid;
	NSDate* _date;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) id asPlist; 
@property (nonatomic,copy,readonly) NSString * uuid;                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                  //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL tentative;                        //@synthesize tentative=_tentative - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSDate *)date;
-(NSString *)uuid;
-(id)initWithDate:(id)arg1 reason:(id)arg2 ;
-(id)initWithPlist:(id)arg1 ;
-(id)asPlist;
-(id)reasonDescriptionWithNow:(id)arg1 ;
-(BOOL)tentative;
-(void)setTentative:(BOOL)arg1 ;
@end
