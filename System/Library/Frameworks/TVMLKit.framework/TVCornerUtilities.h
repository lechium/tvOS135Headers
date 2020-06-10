/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVCornerUtilities : NSObject
+(double)radiusFromCornerRadii:(TVCornerRadii)arg1 ;
+(TVCornerRadii)radiiFromRadius:(double)arg1 ;
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 isContinuous:(BOOL)arg3 ;
+(BOOL)radiiIsZero:(TVCornerRadii)arg1 ;
+(TVCornerRadii)flipCGOriginRadii:(TVCornerRadii)arg1 ;
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 ;
@end

