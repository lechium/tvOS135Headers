/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMSpellChecker, AXMLexiconManager, AXMTagger, AXMDataDetector, AXMSpeechFormatterCache, NSDictionary, NSMutableDictionary;

@interface AXMTextProcessor : NSObject {

	AXMSpellChecker* _spellChecker;
	AXMLexiconManager* _lexiconManager;
	AXMTagger* _tagger;
	AXMDataDetector* _dataDetector;
	AXMSpeechFormatterCache* _speechFormatterCache;
	NSDictionary* _globalWhitelistedWords;
	NSMutableDictionary* _localeWhitelistedWords;

}
-(id)init;
-(id)dataDetector;
-(id)lexiconManager;
-(id)tagger;
-(id)_preprocessText:(id)arg1 diagnostics:(id)arg2 ;
-(id)spellChecker;
-(id)processText:(id)arg1 withOperation:(id)arg2 ;
@end
