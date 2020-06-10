/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, VSDeveloperServiceConnection;

@interface VSDeveloperSettingsFetchOperation : VSAsyncOperation {

	VSOptional* _result;
	VSDeveloperServiceConnection* _connection;

}

@property (nonatomic,retain) VSOptional * result;                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSDeveloperServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(void)setConnection:(VSDeveloperServiceConnection *)arg1 ;
-(VSOptional *)result;
-(VSDeveloperServiceConnection *)connection;
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
@end

