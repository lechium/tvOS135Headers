/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileReadingWritingClaim : NSFileAccessClaim {

	NSURL* _readingURL;
	BOOL _readingURLDidChange;
	unsigned long long _readingOptions;
	NSURL* _writingURL;
	BOOL _writingURLDidChange;
	unsigned long long _writingOptions;
	NSFileAccessNode* _readingLocation;
	NSFileAccessNode* _writingLocation;
	NSFileAccessNode* _rootNode;
	long long _readingLinkResolutionCount;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)allURLs;
-(void)granted;
-(void)invokeClaimer;
-(BOOL)shouldCancelInsteadOfWaiting;
-(BOOL)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)resolveURLsThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(id)initWithPurposeID:(id)arg1 readingURL:(id)arg2 options:(unsigned long long)arg3 writingURL:(id)arg4 options:(unsigned long long)arg5 claimer:(/*^block*/id)arg6 ;
@end

