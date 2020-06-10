/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSError, NSString, MSVArtworkServiceRequest;

@interface MSVArtworkServiceOperation : NSOperation {

	NSError* _operationError;
	NSString* _debugMessage;
	MSVArtworkServiceRequest* _request;

}

@property (nonatomic,readonly) MSVArtworkServiceRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSError * operationError; 
@property (nonatomic,copy,readonly) NSString * debugMessage; 
-(MSVArtworkServiceRequest *)request;
-(NSError *)operationError;
-(void)setOperationError:(NSError *)arg1 ;
-(void)setDebugMessage:(NSString *)arg1 ;
-(id)initWithArtworkRequest:(id)arg1 ;
-(NSString *)debugMessage;
@end

