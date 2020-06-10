/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInput_ja/TextInput_ja-Structs.h>
@class NSCharacterSet;

@interface Romakana : NSObject {

	NSCharacterSet* _consonantsCharacterSet;

}
+(id)hiraganaString:(id)arg1 mappingArray:(id)arg2 ;
+(id)romajiString:(id)arg1 ;
+(id)kanaSymbol:(id)arg1 ;
+(SCD_Struct_Ro0)splitRomaji:(id)arg1 at:(unsigned long long)arg2 ;
-(id)hiraganaFromRomaji:(id)arg1 stripIncompleteRomajiAtEnd:(BOOL)arg2 strippedLength:(unsigned long long*)arg3 ;
-(id)adjustIncompleteRomaji:(id)arg1 ;
@end
