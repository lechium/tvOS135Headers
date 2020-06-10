/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OKProducerPresetsManager : NSObject {

	NSMutableDictionary* _presetsByFamily;

}
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(id)presetForUniqueIdentifier:(id)arg1 ;
-(id)_presetsByNameForFamily:(id)arg1 ;
-(id)presetsForFamily:(id)arg1 ;
-(id)_defaultPresetsByName;
-(id)defaultPresetsForFamily:(id)arg1 ;
-(id)presetWithUniqueIdentifier:(id)arg1 ;
-(id)defaultPresets;
@end

