/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchDMDStateResultObject : CATTaskResultObject {

	NSString* _dmdStateDescription;

}

@property (nonatomic,copy) NSString * dmdStateDescription;              //@synthesize dmdStateDescription=_dmdStateDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)dmdStateDescription;
-(id)initWithStateDescription:(id)arg1 ;
-(void)setDmdStateDescription:(NSString *)arg1 ;
@end

