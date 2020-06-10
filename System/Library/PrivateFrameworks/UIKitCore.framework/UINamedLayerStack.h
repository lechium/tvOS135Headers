/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol UINamedLayerStack <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * layers; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) id radiosityImage; 
@property (nonatomic,readonly) CGSize radiosityImageScale; 
@property (nonatomic,readonly) BOOL flatImageContainsCornerRadius; 
@optional
-(id)radiosityImage;
-(CGSize)radiosityImageScale;
-(BOOL)flatImageContainsCornerRadius;

@required
-(NSString *)name;
-(CGSize)size;
-(double)scale;
-(NSArray *)layers;
-(CGImageRef)flattenedImage;

@end

