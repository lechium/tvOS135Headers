/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BrailleTranslation/BRLTTranslationService.h>

@class BRLTSLoopbackTranslationService;

@interface BRLTLoopbackTranslationService : BRLTTranslationService {

	BRLTSLoopbackTranslationService* _loopbackService;

}

@property (nonatomic,retain) BRLTSLoopbackTranslationService * loopbackService;              //@synthesize loopbackService=_loopbackService - In the implementation block
-(BOOL)isLoopback;
-(id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2 loopbackService:(id)arg3 ;
-(BRLTSLoopbackTranslationService *)loopbackService;
-(void)setLoopbackService:(BRLTSLoopbackTranslationService *)arg1 ;
@end

