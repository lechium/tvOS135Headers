/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol UIWebFindOnPageHighlighter <NSObject>
@property (nonatomic,copy,readonly) NSString * searchText; 
@property (assign,nonatomic) id<UIWebFindOnPageHighlighterDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long numberOfMatches; 
@property (nonatomic,readonly) unsigned long long highlightedMatchIndex; 
@required
-(id<UIWebFindOnPageHighlighterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)searchText;
-(void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(BOOL)arg4;
-(void)highlightNextMatch;
-(void)highlightPreviousMatch;
-(unsigned long long)numberOfMatches;
-(unsigned long long)highlightedMatchIndex;

@end

