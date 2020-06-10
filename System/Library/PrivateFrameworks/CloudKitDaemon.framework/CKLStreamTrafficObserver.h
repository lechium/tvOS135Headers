/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKLStreamObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CKLStreamTrafficObserver : CKLStreamObserver {

	/*^block*/id _requestParsedBlock;
	NSMutableDictionary* _requestDictionary;
	NSObject*<OS_dispatch_queue> _printQueue;

}

@property (retain) NSMutableDictionary * requestDictionary;              //@synthesize requestDictionary=_requestDictionary - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> printQueue;              //@synthesize printQueue=_printQueue - In the implementation block
@property (nonatomic,copy) id requestParsedBlock;                        //@synthesize requestParsedBlock=_requestParsedBlock - In the implementation block
-(void)finish;
-(NSMutableDictionary *)requestDictionary;
-(void)setRequestDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithLogTypes:(unsigned long long)arg1 ;
-(void)eventMatched:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)printQueue;
-(void)parseRequestArrayAndPrint:(id)arg1 ;
-(id)parserFromConfigurationMessage:(id)arg1 ;
-(id)requestParsedBlock;
-(void)setRequestParsedBlock:(id)arg1 ;
-(void)setPrintQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

