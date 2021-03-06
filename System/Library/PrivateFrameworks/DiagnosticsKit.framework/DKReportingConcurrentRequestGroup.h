/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface DKReportingConcurrentRequestGroup : NSObject {

	NSMutableSet* _requests;
	NSMutableDictionary* _requestLookupByGenerator;
	NSMutableSet* _resources;

}

@property (nonatomic,retain) NSMutableSet * resources;                                    //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) NSMutableSet * requests;                                     //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestLookupByGenerator;              //@synthesize requestLookupByGenerator=_requestLookupByGenerator - In the implementation block
-(id)init;
-(NSMutableSet *)requests;
-(void)setRequests:(NSMutableSet *)arg1 ;
-(NSMutableSet *)resources;
-(void)setResources:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)requestLookupByGenerator;
-(BOOL)addComponentIdentity:(id)arg1 usingGenerator:(id)arg2 ;
-(void)setRequestLookupByGenerator:(NSMutableDictionary *)arg1 ;
@end

