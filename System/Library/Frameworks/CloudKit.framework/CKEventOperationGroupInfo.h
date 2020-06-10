/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding> {

	NSString* _operationGroupID;
	NSString* _operationGroupName;

}

@property (nonatomic,readonly) NSString * operationGroupID;                //@synthesize operationGroupID=_operationGroupID - In the implementation block
@property (nonatomic,readonly) NSString * operationGroupName;              //@synthesize operationGroupName=_operationGroupName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)operationGroupID;
-(id)initWithOperationGroup:(id)arg1 ;
-(NSString *)operationGroupName;
@end

