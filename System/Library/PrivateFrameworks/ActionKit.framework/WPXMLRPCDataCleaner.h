/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSData;

@interface WPXMLRPCDataCleaner : NSObject {

	NSData* xmlData;

}
-(id)initWithData:(id)arg1 ;
-(id)cleanData;
-(id)cleanClosingTagIfNeeded:(id)arg1 lengthOfCharactersPrecedingPreamble:(long long)arg2 ;
-(id)cleanWithTidyIfPresent:(id)arg1 ;
-(id)cleanInvalidXMLCharacters:(id)arg1 ;
-(id)cleanCharactersBeforePreamble:(id)arg1 ;
-(id)cleanInvalidUTF8:(id)arg1 ;
-(id)cloingTagsForString:(id)arg1 ;
-(id)repairTruncatedClosingTags:(id)arg1 inResponseString:(id)arg2 ;
-(id)appendClosingTags:(id)arg1 toResponseString:(id)arg2 ;
-(NSRange)rangeOfLastValidClosingTagInString:(id)arg1 ;
@end

