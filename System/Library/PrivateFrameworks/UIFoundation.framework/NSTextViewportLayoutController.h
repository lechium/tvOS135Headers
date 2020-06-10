/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSTextViewportLayoutDelegate, NSTextViewportElementProvider;
#import <UIFoundation/UIFoundation-Structs.h>
@class NSTextRange, NSArray, NSMutableArray;

@interface NSTextViewportLayoutController : NSObject {

	CGRect _viewportBounds;
	CGPoint _viewportOffset;
	NSTextRange* _viewportRange;
	NSArray* _viewportElements;
	NSMutableArray* _viewportLayoutObservers;
	BOOL _layoutIsValid;
	id<NSTextViewportLayoutDelegate> _delegate;
	id<NSTextViewportElementProvider> _elementProvider;

}

@property (__weak) id<NSTextViewportLayoutDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (__weak,readonly) id<NSTextViewportElementProvider> elementProvider;              //@synthesize elementProvider=_elementProvider - In the implementation block
@property (readonly) CGRect viewportBounds;                                                 //@synthesize viewportBounds=_viewportBounds - In the implementation block
@property (readonly) NSTextRange * viewportRange; 
-(void)dealloc;
-(id<NSTextViewportLayoutDelegate>)delegate;
-(void)setDelegate:(id<NSTextViewportLayoutDelegate>)arg1 ;
-(id)initWithElementProvider:(id)arg1 ;
-(id<NSTextViewportElementProvider>)elementProvider;
-(CGRect)viewport;
-(id)textViewportElementForLocation:(id)arg1 ;
-(id)textViewportElementsInRect:(CGRect)arg1 ;
-(id)textViewportElementAtPoint:(CGPoint)arg1 ;
-(void)layoutViewport;
-(double)relocateViewport:(id)arg1 ;
-(void)adjustViewport:(double)arg1 ;
-(NSTextRange *)viewportRange;
-(void)enumerateTextViewportElementsInRect:(CGRect)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)locationAtPoint:(CGPoint)arg1 ;
-(void)addViewportLayoutObserver:(id)arg1 ;
-(void)removeViewportLayoutObserver:(id)arg1 ;
-(CGRect)viewportBounds;
@end

