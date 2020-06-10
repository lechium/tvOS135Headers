/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATMessage.h>

@class NSUUID;

@interface CATTaskMessage : CATMessage {

	NSUUID* _taskUUID;

}

@property (nonatomic,copy) NSUUID * taskUUID;              //@synthesize taskUUID=_taskUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)taskUUID;
-(void)setTaskUUID:(NSUUID *)arg1 ;
-(id)initWithTaskUUID:(id)arg1 ;
@end

