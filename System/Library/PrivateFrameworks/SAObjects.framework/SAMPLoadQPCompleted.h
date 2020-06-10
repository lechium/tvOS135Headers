/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAMPCollection, NSString;

@interface SAMPLoadQPCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAMPCollection * loadedItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)loadQPCompleted;
+(id)loadQPCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setLoadedItems:(SAMPCollection *)arg1 ;
-(SAMPCollection *)loadedItems;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

