/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAGuidanceCheckForGuideUpdateContext : SADomainObject

@property (nonatomic,copy) NSArray * supportedFeatures; 
+(id)checkForGuideUpdateContext;
+(id)checkForGuideUpdateContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)supportedFeatures;
-(id)encodedClassName;
-(void)setSupportedFeatures:(NSArray *)arg1 ;
@end

