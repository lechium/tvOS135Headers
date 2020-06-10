/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSArray, NSString;

@interface SAAppSubscriptions : SADomainObject <SABackgroundContextObject>

@property (nonatomic,copy) NSArray * activeSubscriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appSubscriptions;
+(id)appSubscriptionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)activeSubscriptions;
-(void)setActiveSubscriptions:(NSArray *)arg1 ;
@end

