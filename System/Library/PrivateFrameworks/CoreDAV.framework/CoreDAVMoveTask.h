/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {

	NSString* _previousETag;

}

@property (assign,nonatomic,__weak) id<CoreDAVMoveTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                                  //@synthesize previousETag=_previousETag - In the implementation block
-(id)description;
-(void)dealloc;
-(id)httpMethod;
-(NSString *)previousETag;
-(id)additionalHeaderValues;
-(void)setPreviousETag:(NSString *)arg1 ;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end
