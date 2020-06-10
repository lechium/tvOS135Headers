/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UINamedLayerStack.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface _TVStackedImageNamedLayerStack : NSObject <UINamedLayerStack, NSCopying> {

	CGImageRef _flattenedImage;
	BOOL _flatImageContainsCornerRadius;
	NSString* _name;
	NSArray* _layers;
	double _scale;
	id _radiosityImage;
	CGSize _size;
	CGSize _radiosityImageScale;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * layers;                                //@synthesize layers=_layers - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                    //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGImageRef flattenedImage; 
@property (nonatomic,retain) id radiosityImage;                               //@synthesize radiosityImage=_radiosityImage - In the implementation block
@property (assign,nonatomic) CGSize radiosityImageScale;                      //@synthesize radiosityImageScale=_radiosityImageScale - In the implementation block
@property (assign,nonatomic) BOOL flatImageContainsCornerRadius;              //@synthesize flatImageContainsCornerRadius=_flatImageContainsCornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(CGSize)size;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSArray *)layers;
-(void)setLayers:(NSArray *)arg1 ;
-(CGImageRef)flattenedImage;
-(id)radiosityImage;
-(void)setFlattenedImage:(CGImageRef)arg1 ;
-(void)setFlatImageContainsCornerRadius:(BOOL)arg1 ;
-(CGSize)radiosityImageScale;
-(BOOL)flatImageContainsCornerRadius;
-(void)setRadiosityImage:(id)arg1 ;
-(void)setRadiosityImageScale:(CGSize)arg1 ;
@end
