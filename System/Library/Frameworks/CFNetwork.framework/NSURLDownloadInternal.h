/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLAuthenticationChallenge, NSOperationQueue;

@interface NSURLDownloadInternal : NSObject {

	CFURLDownloadRef cfDownload;
	CFURLAuthChallengeRef currCFChallenge;
	NSURLAuthenticationChallenge* currNSChallenge;
	id delegate;
	BOOL downloadActive;
	NSOperationQueue* _targetQueue;

}
-(void)dealloc;
@end

