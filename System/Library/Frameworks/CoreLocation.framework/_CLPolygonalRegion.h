/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CLRegion.h>

@class NSArray;

@interface _CLPolygonalRegion : CLRegion

@property (nonatomic,copy,readonly) NSArray * vertices; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)vertices;
-(id)initWithVertices:(id)arg1 identifier:(id)arg2 ;
-(id)initNearbyAllowedWithVertices:(id)arg1 identifier:(id)arg2 ;
@end
