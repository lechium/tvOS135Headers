/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTRemotePlanIdentifierList : NSObject <NSSecureCoding> {

	NSArray* _planIdentifiers;

}

@property (nonatomic,retain) NSArray * planIdentifiers;              //@synthesize planIdentifiers=_planIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)planIdentifiers;
-(id)initWithPlanIdentifiers:(id)arg1 ;
-(void)setPlanIdentifiers:(NSArray *)arg1 ;
@end

