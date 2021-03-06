/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCObjectLight.h>

@class NSString;

@interface MCAction : MCObjectLight {

	unsigned _flags;
	NSString* _targetObjectID;

}

@property (copy) NSString * targetObjectID;                    //@synthesize targetObjectID=_targetObjectID - In the implementation block
@property (assign,nonatomic) BOOL tracksInParent; 
-(id)description;
-(id)snapshot;
-(BOOL)isSnapshot;
-(void)setTargetObjectID:(NSString *)arg1 ;
-(void)demolish;
-(NSString *)targetObjectID;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(BOOL)tracksInParent;
-(void)setTracksInParent:(BOOL)arg1 ;
@end

