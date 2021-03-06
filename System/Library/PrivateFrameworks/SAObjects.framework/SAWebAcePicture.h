/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAWebAcePicture : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * format; 
@property (nonatomic,copy) NSNumber * height; 
@property (nonatomic,copy) NSNumber * width; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acePicture;
+(id)acePictureWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

