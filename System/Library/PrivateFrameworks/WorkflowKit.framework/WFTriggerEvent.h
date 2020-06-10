/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString;

@interface WFTriggerEvent : NSObject {

	NSString* _triggerID;
	id<NSObject> _currentValue;

}

@property (nonatomic,copy,readonly) NSString * triggerID;              //@synthesize triggerID=_triggerID - In the implementation block
@property (nonatomic,readonly) id<NSObject> currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
-(id)description;
-(id<NSObject>)currentValue;
-(NSString *)triggerID;
-(id)initWithTriggerID:(id)arg1 currentValue:(id)arg2 ;
@end

