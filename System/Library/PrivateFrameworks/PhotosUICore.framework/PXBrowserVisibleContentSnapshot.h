/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDateInterval, NSArray, NSString;


@protocol PXBrowserVisibleContentSnapshot <NSObject>
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) NSArray * locationNames; 
@property (nonatomic,readonly) unsigned long long dateIntervalGranularity; 
@property (nonatomic,readonly) NSString * localizedPlaceholderText; 
@optional
-(NSString *)localizedPlaceholderText;

@required
-(NSDateInterval *)dateInterval;
-(NSArray *)locationNames;
-(unsigned long long)dateIntervalGranularity;

@end

