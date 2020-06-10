/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SACreateVOXListItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * displayHints; 
@property (nonatomic,copy) NSString * speakableInSequence; 
@property (nonatomic,copy) NSString * speakableStandalone; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createVOXListItem;
+(id)createVOXListItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)displayHints;
-(void)setDisplayHints:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)speakableInSequence;
-(void)setSpeakableInSequence:(NSString *)arg1 ;
-(NSString *)speakableStandalone;
-(void)setSpeakableStandalone:(NSString *)arg1 ;
@end
