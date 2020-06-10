/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Assistant/Plugins/AssistantTTSPlugin.assistantBundle/AssistantTTSPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFServiceCommand.h>

@class SATTSEstimateTTSRequestDuration, NSString;

@interface VSPluginTTSDurationEstimation : NSObject <AFServiceCommand> {

	SATTSEstimateTTSRequestDuration* _request;

}

@property (nonatomic,retain) SATTSEstimateTTSRequestDuration * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDictionary:(id)arg1 ;
-(SATTSEstimateTTSRequestDuration *)request;
-(void)setRequest:(SATTSEstimateTTSRequestDuration *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end
