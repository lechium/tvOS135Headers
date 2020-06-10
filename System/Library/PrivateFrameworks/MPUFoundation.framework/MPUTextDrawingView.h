/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class MPUTextDrawingContext, NSString;

@interface MPUTextDrawingView : UIView {

	double _cachedDisplayScale;
	MPUTextDrawingContext* _textDrawingContext;

}

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,retain) MPUTextDrawingContext * textDrawingContext;              //@synthesize textDrawingContext=_textDrawingContext - In the implementation block
-(NSString *)text;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)_cachedDisplayScale;
-(void)setTextDrawingContext:(MPUTextDrawingContext *)arg1 ;
-(MPUTextDrawingContext *)textDrawingContext;
@end
