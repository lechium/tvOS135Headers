/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBSStoreSettings : NSObject {

	id _domainObserver;
	BOOL _cachedShowSampleUberRow;
	BOOL _cachedShowSampleFlowcases;

}

@property (assign,nonatomic) BOOL showSampleUberRow; 
@property (assign,nonatomic) BOOL showSampleFlowcases; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_refreshPropertiesWithPreferences;
-(BOOL)showSampleUberRow;
-(void)setShowSampleUberRow:(BOOL)arg1 ;
-(BOOL)showSampleFlowcases;
-(void)setShowSampleFlowcases:(BOOL)arg1 ;
@end

