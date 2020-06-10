/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKWidgetViewProxyExports <JSExport>
@optional
-(void)dynamicsSnapToPoint:(CGPoint)arg1 withDamping:(double)arg2 __JS_EXPORT_AS__dynamicsSnapToPoint:(id)arg3;
-(id)addSubWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3 __JS_EXPORT_AS__addSubWidgetViewWithTemplateName:(id)arg4;
-(CGPoint*)convertPointWithParallax:(CGPoint)arg1 __JS_EXPORT_AS__convertPointWithParallax:(id)arg2;
-(id)subWidgetViewsInRect:(CGRect)arg1 __JS_EXPORT_AS__subWidgetViewsInRect:(id)arg2;

@required
-(void)dynamicsRemoveSnapping;
-(void)dynamicsSnapToPoint:(CGPoint)arg1 withDamping:(double)arg2;
-(id)addSubWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3;
-(CGPoint*)convertPointWithParallax:(CGPoint)arg1;
-(id)subWidgetViewsInRect:(CGRect)arg1;

@end

