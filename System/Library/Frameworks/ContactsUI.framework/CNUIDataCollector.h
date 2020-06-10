/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNUIDataCollectorLogger, NSString;

@interface CNUIDataCollector : NSObject {

	CNUIDataCollectorLogger* _logger;
	NSString* _appIdentifier;

}

@property (nonatomic,retain) CNUIDataCollectorLogger * logger;              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSString * appIdentifier;                      //@synthesize appIdentifier=_appIdentifier - In the implementation block
+(BOOL)isEnabled;
+(id)sharedCollector;
-(id)init;
-(CNUIDataCollectorLogger *)logger;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(void)setLogger:(CNUIDataCollectorLogger *)arg1 ;
-(void)logContactActionType:(id)arg1 attributes:(id)arg2 ;
-(void)logIndexUsage;
-(void)logAddProperty:(id)arg1 contact:(id)arg2 ;
-(void)logPresentation;
-(void)_reallyLogIndexUsage;
-(void)logSearchUsage;
-(void)logSearchResultsFetchedSuggested:(BOOL)arg1 ;
-(void)logSearchResultSelectedSuggested:(BOOL)arg1 ;
-(void)logRefreshUsage;
-(void)logGroupsShown:(long long)arg1 totalGroups:(long long)arg2 ;
@end

