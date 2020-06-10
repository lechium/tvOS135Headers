/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject {

	NSArray* rotationAngles;
	unsigned long long pageIndex;
	NSArray* strings;
	NSString* string;
	NSArray* rects;
	CGRect boundingBox;

}

@property (assign,nonatomic) unsigned long long pageIndex; 
@property (nonatomic,retain) NSString * string; 
@property (assign,nonatomic) CGRect boundingBox; 
@property (nonatomic,retain) NSArray * strings; 
@property (nonatomic,retain) NSArray * rects; 
@property (nonatomic,retain) NSArray * rotationAngles; 
-(void)dealloc;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(CGRect)boundingBox;
-(void)setBoundingBox:(CGRect)arg1 ;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageIndex;
-(void)setStrings:(NSArray *)arg1 ;
-(NSArray *)strings;
-(NSArray *)rects;
-(void)setRects:(NSArray *)arg1 ;
-(NSArray *)rotationAngles;
-(void)setRotationAngles:(NSArray *)arg1 ;
@end

