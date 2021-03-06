/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SiriTVUIMonogrammer : NSObject {

	NSMutableDictionary* _monogramCache;

}
+(id)sharedInstance;
-(id)init;
-(void)clearCache;
-(id)monogramWithText:(id)arg1 diameter:(double)arg2 isFocused:(BOOL)arg3 userInterfaceStyle:(long long)arg4 ;
-(id)monogramForMonogramNames:(id)arg1 diameter:(double)arg2 isFocused:(BOOL)arg3 userInterfaceStyle:(long long)arg4 ;
-(id)_monogramLabelAttributesForFontSize:(double)arg1 userInterfaceStyle:(long long)arg2 ;
@end

