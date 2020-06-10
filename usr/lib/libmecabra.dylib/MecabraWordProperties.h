/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libmecabra.dylib/libmecabra.dylib-Structs.h>
@class NSString, NSArray;

@interface MecabraWordProperties : NSObject {

	NSString* _analysisString;
	NSArray* _characterInformation;
	NSArray* _codeLookupInformation;
	BOOL _emoji;
	int _language;

}

@property (nonatomic,copy) NSString * analysisString;                      //@synthesize analysisString=_analysisString - In the implementation block
@property (nonatomic,retain) NSArray * characterInformation;               //@synthesize characterInformation=_characterInformation - In the implementation block
@property (nonatomic,retain) NSArray * codeLookupInformation;              //@synthesize codeLookupInformation=_codeLookupInformation - In the implementation block
@property (assign,getter=isEmoji,nonatomic) BOOL emoji;                    //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) int language;                                 //@synthesize language=_language - In the implementation block
+(id)sortedRadicalList;
+(IDXIndexRef)informationDictionaryAtPath:(CFURLRef)arg1 ;
+(IDXIndexRef)characterInformationDictionary;
+(id)searchResultsForString:(id)arg1 dictionary:(IDXIndexRef)arg2 ;
+(IDXIndexRef)codeLookupInformationDictionary;
-(void)dealloc;
-(id)valueForKey:(int)arg1 ;
-(int)language;
-(void)setLanguage:(int)arg1 ;
-(void)setEmoji:(BOOL)arg1 ;
-(NSString *)analysisString;
-(id)initWithString:(id)arg1 language:(int)arg2 ;
-(NSArray *)codeLookupInformation;
-(id)separatedInputCodesForString:(id)arg1 ;
-(NSArray *)characterInformation;
-(id)radicalInformationForString:(id)arg1 ;
-(id)strokeInformationForString:(id)arg1 ;
-(id)pinyinInformationForString:(id)arg1 ;
-(id)zhuyinInformationForString:(id)arg1 ;
-(id)initialsForStrings:(id)arg1 ;
-(id)tonesForString:(id)arg1 ;
-(id)wubixingCodes;
-(id)bihuaCodes;
-(id)cangjieCodes;
-(id)isIncludedInCurrentLanguage;
-(void)setAnalysisString:(NSString *)arg1 ;
-(void)setCharacterInformation:(NSArray *)arg1 ;
-(void)setCodeLookupInformation:(NSArray *)arg1 ;
-(BOOL)isEmoji;
@end

