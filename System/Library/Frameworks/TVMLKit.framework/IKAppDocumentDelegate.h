/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppDocumentDelegate <NSObject>
@optional
-(id)impressionableViewElementsForDocument:(id)arg1;
-(void)documentScrollToTop:(id)arg1;
-(void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
-(BOOL)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;

@required
-(void)documentNeedsUpdate:(id)arg1;
-(void)documentDidUpdate:(id)arg1;

@end

