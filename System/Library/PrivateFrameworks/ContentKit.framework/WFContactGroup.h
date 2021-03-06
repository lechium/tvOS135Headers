/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFNaming.h>

@class NSString, NSArray;

@interface WFContactGroup : NSObject <WFNaming>

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(Class)preferredConcreteSubclass;
+(id)allContactGroups;
+(id)contactGroupWithName:(id)arg1 ;
-(NSString *)name;
-(NSArray *)contacts;
-(NSString *)wfName;
-(BOOL)containsContact:(id)arg1 ;
@end

