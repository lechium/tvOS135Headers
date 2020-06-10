/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVOneupViewDelegate <NSObject>
@optional
-(void)oneupView:(id)arg1 willBeginViewTransitionForFocusedView:(id)arg2;
-(void)oneupView:(id)arg1 willDisplayView:(id)arg2 forItemAtIndex:(long long)arg3;
-(void)oneupView:(id)arg1 didEndDisplayingView:(id)arg2 forItemAtIndex:(long long)arg3;
-(void)oneupView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
-(void)oneupView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
-(void)oneupView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;

@end

