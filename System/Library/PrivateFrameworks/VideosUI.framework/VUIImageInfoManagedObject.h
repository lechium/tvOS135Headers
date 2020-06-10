/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, VUIImageDataManagedObject;

@interface VUIImageInfoManagedObject : NSManagedObject

@property (assign,nonatomic) double canonicalHeight; 
@property (assign,nonatomic) double canonicalWidth; 
@property (assign,nonatomic) long long imageType; 
@property (nonatomic,copy) NSString * urlFormat; 
@property (nonatomic,retain) VUIImageDataManagedObject * imageData; 
+(id)fetchRequest;
@end
