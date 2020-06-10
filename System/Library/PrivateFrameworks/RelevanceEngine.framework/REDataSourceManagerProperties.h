/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, NSArray;


@protocol REDataSourceManagerProperties <REExportedInterface>
@property (nonatomic,readonly) NSSet * disabledDataSources; 
@property (readonly) NSSet * availableDataSourceIdentifiers; 
@property (readonly) NSSet * currentDataSourceIdentifiers; 
@property (readonly) NSArray * currentDataSources; 
@property (nonatomic,readonly) NSArray * dataSourceControllers; 
@required
-(NSSet *)currentDataSourceIdentifiers;
-(NSSet *)availableDataSourceIdentifiers;
-(NSSet *)disabledDataSources;
-(NSArray *)currentDataSources;
-(NSArray *)dataSourceControllers;

@end

