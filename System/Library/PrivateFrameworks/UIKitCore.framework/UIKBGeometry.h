/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {

	NSString* m_name;
	SCD_Struct_UI83 m_x;
	SCD_Struct_UI83 m_y;
	SCD_Struct_UI83 m_w;
	SCD_Struct_UI83 m_h;
	SCD_Struct_UI83 m_paddingTop;
	SCD_Struct_UI83 m_paddingLeft;
	SCD_Struct_UI83 m_paddingBottom;
	SCD_Struct_UI83 m_paddingRight;
	BOOL m_explicitlySpecified;
	BOOL m_isTemplate;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,setter=setX:,nonatomic) SCD_Struct_UI83 x; 
@property (assign,setter=setY:,nonatomic) SCD_Struct_UI83 y; 
@property (assign,setter=setW:,nonatomic) SCD_Struct_UI83 w; 
@property (assign,setter=setH:,nonatomic) SCD_Struct_UI83 h; 
@property (assign,setter=setPaddingTop:,nonatomic) SCD_Struct_UI83 paddingTop; 
@property (assign,setter=setPaddingLeft:,nonatomic) SCD_Struct_UI83 paddingLeft; 
@property (assign,setter=setPaddingBottom:,nonatomic) SCD_Struct_UI83 paddingBottom; 
@property (assign,setter=setPaddingRight:,nonatomic) SCD_Struct_UI83 paddingRight; 
@property (assign,nonatomic) BOOL explicitlySpecified; 
@property (assign,nonatomic) BOOL isTemplate; 
+(id)geometry;
+(id)geometryWithRect:(CGRect)arg1 ;
+(id)geometryWithOriginValue:(SCD_Struct_UI83)arg1 sizeValue:(SCD_Struct_UI83)arg2 ;
+(id)codeStringForValue:(SCD_Struct_UI83)arg1 ;
+(void)performOperations:(/*^block*/id)arg1 withScale:(double)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CGRect)frame;
-(BOOL)isTemplate;
-(SCD_Struct_UI83)x;
-(void)setX:(SCD_Struct_UI83)arg1 ;
-(SCD_Struct_UI83)y;
-(void)setY:(SCD_Struct_UI83)arg1 ;
-(SCD_Struct_UI83)w;
-(void)setW:(SCD_Struct_UI83)arg1 ;
-(SCD_Struct_UI83)h;
-(void)setH:(SCD_Struct_UI83)arg1 ;
-(id)shortDescription;
-(void)setIsTemplate:(BOOL)arg1 ;
-(SCD_Struct_UI83)paddingTop;
-(void)setPaddingTop:(SCD_Struct_UI83)arg1 ;
-(SCD_Struct_UI83)paddingRight;
-(void)setPaddingRight:(SCD_Struct_UI83)arg1 ;
-(SCD_Struct_UI83)paddingBottom;
-(void)setPaddingBottom:(SCD_Struct_UI83)arg1 ;
-(SCD_Struct_UI83)paddingLeft;
-(void)setPaddingLeft:(SCD_Struct_UI83)arg1 ;
-(void)setExplicitlySpecified:(BOOL)arg1 ;
-(BOOL)usesAutomaticMetrics;
-(BOOL)explicitlySpecified;
-(id)initWithName:(id)arg1 rect:(SCD_Struct_UI84)arg2 padding:(SCD_Struct_UI84)arg3 ;
-(CGRect)frameWithContainingFrame:(CGRect)arg1 ;
-(CGRect)paddedFrameWithResolvedFrame:(CGRect)arg1 ;
-(id)initTemplateWithName:(id)arg1 rect:(SCD_Struct_UI84)arg2 padding:(SCD_Struct_UI84)arg3 ;
-(CGRect)paddedFrameWithContainingFrame:(CGRect)arg1 ;
-(id)overrideGeometry:(id)arg1 ;
-(BOOL)usesPercentages;
@end

