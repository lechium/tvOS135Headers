/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSString;

@interface TVImageDecorator : NSObject

@property (nonatomic,readonly) CGSize loaderScaleToSize; 
@property (nonatomic,readonly) BOOL loaderCropToFit; 
@property (nonatomic,readonly) CGSize expectedSize; 
@property (nonatomic,copy,readonly) NSString * decoratorIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)expectedSize;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(CGSize)loaderScaleToSize;
-(BOOL)loaderCropToFit;
-(NSString *)decoratorIdentifier;
@end
