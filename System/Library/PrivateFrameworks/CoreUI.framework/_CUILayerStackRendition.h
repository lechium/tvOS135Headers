/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/_CUIRawDataRendition.h>

@class CUIRenditionMetrics, NSMutableArray;

@interface _CUILayerStackRendition : _CUIRawDataRendition {

	CUIRenditionMetrics* _renditionMetrics;
	NSMutableArray* _layers;

}
-(void)dealloc;
-(id)metrics;
-(id)layerReferences;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
@end

