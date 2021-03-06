/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CIFilterShape;

@interface CISampler : NSObject <NSCopying> {

	void* _priv;

}

@property (readonly) CIFilterShape * definition; 
@property (readonly) CGRect extent; 
+(id)samplerWithImage:(id)arg1 options:(id)arg2 ;
+(id)samplerWithImage:(id)arg1 ;
+(id)samplerWithImage:(id)arg1 keysAndValues:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)dealloc;
-(CIFilterShape *)definition;
-(const void*)colorSpace;
-(CGRect)extent;
-(void*)_internalRepresentation;
-(id)initWithImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 options:(id)arg2 ;
-(id)_initWithImage:(id)arg1 key0:(id)arg2 vargs:(char*)arg3 ;
-(id)initWithImage:(id)arg1 keysAndValues:(id)arg2 ;
-(id)opaqueShape;
-(id)wrapMode;
@end

