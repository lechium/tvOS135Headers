/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSTextStorage, NSMutableArray;

@interface _NSAttributeRun : NSObject <NSCopying> {

	NSRange _range;
	NSTextStorage* _textStorage;
	NSMutableArray* _attributesArray;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSRange)range;
-(id)initWithTextStorage:(id)arg1 range:(NSRange)arg2 ;
-(void)restoreAttributesOfTextStorage:(id)arg1 ;
@end

