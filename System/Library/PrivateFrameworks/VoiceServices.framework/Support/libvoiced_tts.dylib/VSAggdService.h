/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VSAggdService : NSObject {

	NSString* _loggingPrefix;

}

@property (nonatomic,retain) NSString * loggingPrefix;              //@synthesize loggingPrefix=_loggingPrefix - In the implementation block
+(id)defaultService;
-(NSString *)loggingPrefix;
-(void)setLoggingPrefix:(NSString *)arg1 ;
-(void)tallyTask:(id)arg1 ;
-(void)tallySynthesisCore:(id)arg1 ;
-(id)initWithLoggingPrefix:(id)arg1 ;
-(void)recordCategory:(id)arg1 value:(id)arg2 ;
@end
