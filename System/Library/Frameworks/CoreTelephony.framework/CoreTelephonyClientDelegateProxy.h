/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <Foundation/NSProxy.h>
#import <CoreTelephony/CoreTelephonyClientDelegateProxyInterface.h>

@class NSString;

@interface CoreTelephonyClientDelegateProxy : NSProxy <CoreTelephonyClientDelegateProxyInterface> {

	queue* _userQueue;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithQueue:(queue*)arg1 ;
@end

