/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceComparable.h>

@class NSString, NSNumber;

@interface SAEmail : AceObject <SAAceComparable>

@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSNumber * favoriteFacetime; 
@property (nonatomic,copy) NSNumber * favoriteFacetimeAudio; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * pseudo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)email;
+(id)emailWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)favoriteFacetime;
-(void)setFavoriteFacetime:(NSNumber *)arg1 ;
-(NSNumber *)favoriteFacetimeAudio;
-(void)setFavoriteFacetimeAudio:(NSNumber *)arg1 ;
-(NSNumber *)pseudo;
-(void)setPseudo:(NSNumber *)arg1 ;
@end

