/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol WFSortableGalleryObject <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSDate * modifiedAt; 
@property (nonatomic,readonly) NSString * persistentIdentifier; 
@required
-(NSString *)name;
-(NSString *)persistentIdentifier;
-(NSString *)language;
-(NSDate *)modifiedAt;

@end
