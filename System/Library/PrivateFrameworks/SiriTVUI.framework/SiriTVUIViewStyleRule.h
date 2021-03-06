/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet, SiriTVUIViewStyle;

@interface SiriTVUIViewStyleRule : NSObject {

	NSIndexSet* _styleSelector;
	SiriTVUIViewStyle* _style;

}

@property (nonatomic,copy) NSIndexSet * styleSelector;              //@synthesize styleSelector=_styleSelector - In the implementation block
@property (nonatomic,copy) SiriTVUIViewStyle * style;               //@synthesize style=_style - In the implementation block
-(SiriTVUIViewStyle *)style;
-(void)setStyle:(SiriTVUIViewStyle *)arg1 ;
-(id)initWithStyleSelector:(id)arg1 style:(id)arg2 ;
-(NSIndexSet *)styleSelector;
-(void)setStyleSelector:(NSIndexSet *)arg1 ;
@end

