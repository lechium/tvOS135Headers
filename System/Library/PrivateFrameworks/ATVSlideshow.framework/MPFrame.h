/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, MPSlide, MPFrameInternal, NSString;

@interface MPFrame : NSObject <NSCopying> {

	NSMutableDictionary* _attributes;
	MPSlide* _parentSlide;
	MPFrameInternal* _internal;

}

@property (nonatomic,copy) NSString * frameID; 
@property (nonatomic,copy) NSString * presetID; 
+(id)frameWithFrameID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)dump;
-(id)parentDocument;
-(id)fullDebugLog;
-(void)copyStruct:(id)arg1 ;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(NSString *)frameID;
-(void)setFrameID:(NSString *)arg1 ;
-(id)initWithFrameID:(id)arg1 ;
-(void)setFrameAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)frameAttributes;
-(id)frameAttributeForKey:(id)arg1 ;
-(id)parentSlide;
-(void)setParentSlide:(id)arg1 ;
@end
