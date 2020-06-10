/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL;

@interface SAVCSContentShelfUpdateInfo : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long pageNumber; 
@property (nonatomic,copy) NSString * targetShelfViewId; 
@property (nonatomic,copy) NSString * targetViewId; 
@property (nonatomic,copy) NSURL * url; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentShelfUpdateInfo;
+(id)contentShelfUpdateInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)url;
-(id)groupIdentifier;
-(void)setUrl:(NSURL *)arg1 ;
-(id)encodedClassName;
-(long long)pageNumber;
-(void)setPageNumber:(long long)arg1 ;
-(NSString *)targetShelfViewId;
-(void)setTargetShelfViewId:(NSString *)arg1 ;
-(NSString *)targetViewId;
-(void)setTargetViewId:(NSString *)arg1 ;
@end
