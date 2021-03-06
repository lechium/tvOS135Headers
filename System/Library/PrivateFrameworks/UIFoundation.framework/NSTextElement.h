/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject {

	NSTextContentManager* _textContentManager;
	NSTextRange* _elementRange;

}

@property (__weak) NSTextContentManager * textContentManager; 
@property (retain) NSTextRange * elementRange;                             //@synthesize elementRange=_elementRange - In the implementation block
-(id)init;
-(void)dealloc;
-(NSTextRange *)elementRange;
-(NSTextContentManager *)textContentManager;
-(void)setTextContentManager:(NSTextContentManager *)arg1 ;
-(id)initWithTextContentManager:(id)arg1 ;
-(void)setElementRange:(NSTextRange *)arg1 ;
@end

