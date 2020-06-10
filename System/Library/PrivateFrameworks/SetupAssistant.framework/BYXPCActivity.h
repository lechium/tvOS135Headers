/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BYXPCActivity : NSObject {

	NSObject*<OS_xpc_object> _xpcActivity;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcActivity;              //@synthesize xpcActivity=_xpcActivity - In the implementation block
@property (nonatomic,copy) NSObject*<OS_xpc_object> criteria; 
+(id)activityWithXPCActivity:(id)arg1 ;
-(long long)state;
-(BOOL)setState:(long long)arg1 ;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcActivity;
-(NSObject*<OS_xpc_object>)criteria;
-(void)setCriteria:(NSObject*<OS_xpc_object>)arg1 ;
@end

