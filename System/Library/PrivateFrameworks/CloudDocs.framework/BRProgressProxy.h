/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@protocol BRProgressProxyDelegate;
@class NSURL;

@interface BRProgressProxy : NSProgress {

	NSURL* _url;
	id _globalProgressSubscriber;
	id<BRProgressProxyDelegate> _delegate;

}

@property (__weak) id<BRProgressProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id<BRProgressProxyDelegate>)delegate;
-(void)setDelegate:(id<BRProgressProxyDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
