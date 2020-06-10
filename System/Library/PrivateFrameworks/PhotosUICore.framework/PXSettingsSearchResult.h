/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PXSettingsIndexEntry, NSString;

@interface PXSettingsSearchResult : NSObject {

	_PXSettingsIndexEntry* _entry;

}

@property (nonatomic,readonly) _PXSettingsIndexEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
-(id)init;
-(NSString *)title;
-(NSString *)subtitle;
-(_PXSettingsIndexEntry *)entry;
-(void)revealInSettingsController:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_initWithEntry:(id)arg1 ;
@end
