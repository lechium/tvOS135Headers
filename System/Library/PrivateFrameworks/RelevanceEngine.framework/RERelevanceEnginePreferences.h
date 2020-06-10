/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol RERelevanceEnginePreferencesDelegate;
@class NSSet;

@interface RERelevanceEnginePreferences : NSObject <NSCopying> {

	id<RERelevanceEnginePreferencesDelegate> _delegate;
	NSSet* _disabledDataSourceIdentifiers;
	unsigned long long _mode;

}

@property (assign,nonatomic,__weak) id<RERelevanceEnginePreferencesDelegate> delegate; 
@property (nonatomic,copy) NSSet * disabledDataSourceIdentifiers;                                   //@synthesize disabledDataSourceIdentifiers=_disabledDataSourceIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                               //@synthesize mode=_mode - In the implementation block
+(id)defaultPreferences;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id<RERelevanceEnginePreferencesDelegate>)delegate;
-(void)setDelegate:(id<RERelevanceEnginePreferencesDelegate>)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(NSSet *)disabledDataSourceIdentifiers;
-(void)setDisabledDataSourceIdentifiers:(NSSet *)arg1 ;
@end
