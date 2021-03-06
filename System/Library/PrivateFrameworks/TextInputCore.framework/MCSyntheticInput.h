/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@class NSString, NSArray;

@interface MCSyntheticInput : MCKeyboardInput {

	BOOL _includeSuffixAsSearchString;
	NSString* _committedText;
	NSArray* _syllables;
	unsigned long long _cursorIndex;

}

@property (nonatomic,readonly) NSString * committedText;                    //@synthesize committedText=_committedText - In the implementation block
@property (nonatomic,readonly) NSString * uncommittedText; 
@property (nonatomic,readonly) NSArray * syllables;                         //@synthesize syllables=_syllables - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) unsigned long long cursorIndex;              //@synthesize cursorIndex=_cursorIndex - In the implementation block
@property (assign,nonatomic) BOOL includeSuffixAsSearchString;              //@synthesize includeSuffixAsSearchString=_includeSuffixAsSearchString - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)text;
-(NSString *)committedText;
-(NSString *)uncommittedText;
-(NSArray *)syllables;
-(id)initWithCommittedText:(id)arg1 syllables:(id)arg2 ;
-(id)syntheticInputWithCommittedText:(id)arg1 syllables:(id)arg2 ;
-(id)syntheticInputWithCursorIndex:(unsigned long long)arg1 ;
-(int)syllableIndex:(int*)arg1 ;
-(id)externalSuffix;
-(unsigned long long)cursorIndex;
-(BOOL)includeSuffixAsSearchString;
-(void)setIncludeSuffixAsSearchString:(BOOL)arg1 ;
@end

