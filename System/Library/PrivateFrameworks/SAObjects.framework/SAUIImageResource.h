/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSURL, NSString;

@interface SAUIImageResource : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * imageData; 
@property (assign,nonatomic) double pixelHeight; 
@property (assign,nonatomic) double pixelWidth; 
@property (assign,nonatomic) double pointHeight; 
@property (assign,nonatomic) double pointWidth; 
@property (nonatomic,copy) NSURL * resourceUrl; 
@property (assign,nonatomic) double scaleFactor; 
@property (nonatomic,copy) NSString * urlFormatString; 
@property (nonatomic,copy) NSString * userAgent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageResource;
+(id)imageResourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSData *)imageData;
-(NSString *)userAgent;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(void)setPixelHeight:(double)arg1 ;
-(double)pixelHeight;
-(void)setPixelWidth:(double)arg1 ;
-(double)pixelWidth;
-(void)setImageData:(NSData *)arg1 ;
-(id)encodedClassName;
-(double)pointHeight;
-(void)setPointHeight:(double)arg1 ;
-(double)pointWidth;
-(void)setPointWidth:(double)arg1 ;
-(NSURL *)resourceUrl;
-(void)setResourceUrl:(NSURL *)arg1 ;
-(NSString *)urlFormatString;
-(void)setUrlFormatString:(NSString *)arg1 ;
@end

