/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface IPARectArray : NSObject <NSCopying, NSMutableCopying> {

	RectArray* _imp;

}
+(id)rectArray;
+(id)rectArrayWithRect:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(id)initWithRect:(CGRect)arg1 ;
-(CGRect)rectAtIndex:(unsigned long long)arg1 ;
-(id)initWithRectArray:(id)arg1 ;
-(void)enumerateRects:(/*^block*/id)arg1 ;
@end

