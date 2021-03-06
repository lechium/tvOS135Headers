/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMTag.h>

@class NSString;

@interface AXMReplacementTag : AXMTag {

	NSString* _overrideSpeakableText;
	NSRange _overrideRange;

}
+(id)replacementTagWithSpeakableText:(id)arg1 range:(NSRange)arg2 ;
-(NSRange)range;
-(id)originalText;
-(id)speakableText;
@end

