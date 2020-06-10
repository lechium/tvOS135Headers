/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSNumber;

@interface DMFRefreshStatusResultObject : CATTaskResultObject {

	NSNumber* _numberOfUpdates;

}

@property (nonatomic,copy) NSNumber * numberOfUpdates;              //@synthesize numberOfUpdates=_numberOfUpdates - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)numberOfUpdates;
-(void)setNumberOfUpdates:(NSNumber *)arg1 ;
@end

