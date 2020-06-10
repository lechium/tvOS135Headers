/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKImageBrush.h>
#import <libobjc.A.dylib/GKBrushIdentification.h>

@class NSString;

@interface GKMacGameIconBrush : GKImageBrush <GKBrushIdentification> {

	CGSize _outputSize;

}

@property (assign,nonatomic) CGSize outputSize;                     //@synthesize outputSize=_outputSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)outputSize;
-(void)setOutputSize:(CGSize)arg1 ;
-(id)renderedImageIdentifier;
-(CGSize)sizeForInput:(id)arg1 ;
@end
