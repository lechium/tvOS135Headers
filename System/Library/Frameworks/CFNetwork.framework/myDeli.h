/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSError, NSData, NSString;

@interface myDeli : NSObject <NSURLSessionDelegate> {

	NSError* _errorResult;
	BOOL _receivedResponse;
	BOOL _hasCanceled;
	NSData* resumeData;

}

@property (retain) NSError * someError;                             //@synthesize errorResult=_errorResult - In the implementation block
@property (assign) BOOL receivedResponse;                           //@synthesize receivedResponse=_receivedResponse - In the implementation block
@property (assign) BOOL hasCanceled;                                //@synthesize hasCanceled=_hasCanceled - In the implementation block
@property (copy) NSData * resumeData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSData *)resumeData;
-(void)setResumeData:(NSData *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(NSError *)someError;
-(void)setSomeError:(NSError *)arg1 ;
-(BOOL)receivedResponse;
-(void)setReceivedResponse:(BOOL)arg1 ;
-(BOOL)hasCanceled;
-(void)setHasCanceled:(BOOL)arg1 ;
@end

