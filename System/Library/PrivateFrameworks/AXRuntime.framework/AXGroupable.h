/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AXElementGroup;


@protocol AXGroupable <NSObject>
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup; 
@required
-(CGRect)frame;
-(BOOL)isGroup;
-(AXElementGroup *)parentGroup;
-(void)setParentGroup:(id)arg1;
-(id)highestAncestorGroup;
-(id)keyboardContainer;

@end

