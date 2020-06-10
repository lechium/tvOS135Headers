/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRLTTranslatorProtocol;
@class NSBundle;

@interface BRLTSTranslator : NSObject {

	id<BRLTTranslatorProtocol> _translator;
	NSBundle* _bundle;

}

@property (nonatomic,readonly) id<BRLTTranslatorProtocol> translator;              //@synthesize translator=_translator - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle;                                  //@synthesize bundle=_bundle - In the implementation block
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(id<BRLTTranslatorProtocol>)translator;
-(id)brailleForText:(id)arg1 parameters:(id)arg2 locations:(out id*)arg3 ;
-(id)textForBraille:(id)arg1 parameters:(id)arg2 locations:(out id*)arg3 ;
@end

