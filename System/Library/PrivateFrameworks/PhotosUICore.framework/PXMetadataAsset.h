/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, CLLocation;


@protocol PXMetadataAsset <NSObject>
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL cloudIsDeletable; 
@optional
-(BOOL)cloudIsDeletable;

@required
-(NSDate *)creationDate;
-(CLLocation *)location;

@end

