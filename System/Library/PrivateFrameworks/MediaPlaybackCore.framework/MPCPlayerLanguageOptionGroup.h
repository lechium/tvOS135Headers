/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, MPCPlayerResponse, NSString;

@interface MPCPlayerLanguageOptionGroup : NSObject {

	BOOL _allowEmptySelection;
	unsigned long long _currentIndex;
	NSArray* _options;
	MPCPlayerResponse* _response;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long numberOfOptions; 
@property (nonatomic,readonly) unsigned long long indexOfSelectedOption; 
@property (nonatomic,readonly) NSArray * options;                                     //@synthesize options=_options - In the implementation block
-(NSArray *)options;
-(MPCPlayerResponse *)response;
-(NSString *)localizedTitle;
-(id)initWithLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 response:(id)arg3 ;
-(unsigned long long)numberOfOptions;
-(unsigned long long)indexOfSelectedOption;
-(id)localizedTitleForOptionAtIndex:(unsigned long long)arg1 ;
-(id)changeRequestForOptionAtIndex:(unsigned long long)arg1 ;
@end
