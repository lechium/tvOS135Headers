/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKTemplateStyleSheet, IKStyleFactory;

@interface IKViewElementStyleFactory : NSObject {

	IKTemplateStyleSheet* _styleSheet;
	IKStyleFactory* _styleFactory;

}

@property (nonatomic,retain,readonly) IKStyleFactory * styleFactory;              //@synthesize styleFactory=_styleFactory - In the implementation block
@property (nonatomic,readonly) IKTemplateStyleSheet * styleSheet;                 //@synthesize styleSheet=_styleSheet - In the implementation block
+(id)styleFactoryWithMarkup:(id)arg1 styleSheet:(id)arg2 ;
-(IKTemplateStyleSheet *)styleSheet;
-(IKStyleFactory *)styleFactory;
-(void)setViewElementStylesDirty;
-(id)styleComposerForElement:(id)arg1 elementStyleOverrides:(id)arg2 ;
-(id)initWithMarkup:(id)arg1 styleSheet:(id)arg2 ;
@end

