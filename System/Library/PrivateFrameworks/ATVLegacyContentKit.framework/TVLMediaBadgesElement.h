/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSArray, NSDictionary, UIColor;

@interface TVLMediaBadgesElement : TVLElement {

	BOOL _closedCaption;
	NSString* _audioFormat;
	NSString* _videoFormat;
	NSArray* _urlBadges;
	NSDictionary* _styleKeyValues;

}

@property (nonatomic,retain) NSDictionary * styleKeyValues;              //@synthesize styleKeyValues=_styleKeyValues - In the implementation block
@property (nonatomic,copy) NSString * audioFormat;                       //@synthesize audioFormat=_audioFormat - In the implementation block
@property (nonatomic,copy) NSString * videoFormat;                       //@synthesize videoFormat=_videoFormat - In the implementation block
@property (assign,nonatomic) BOOL closedCaption;                         //@synthesize closedCaption=_closedCaption - In the implementation block
@property (nonatomic,retain) NSArray * urlBadges;                        //@synthesize urlBadges=_urlBadges - In the implementation block
@property (nonatomic,retain,readonly) UIColor * color; 
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)color;
-(NSString *)videoFormat;
-(NSString *)audioFormat;
-(void)setVideoFormat:(NSString *)arg1 ;
-(void)setAudioFormat:(NSString *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(NSDictionary *)styleKeyValues;
-(void)setStyleKeyValues:(NSDictionary *)arg1 ;
-(BOOL)closedCaption;
-(NSArray *)urlBadges;
-(void)setClosedCaption:(BOOL)arg1 ;
-(void)setUrlBadges:(NSArray *)arg1 ;
@end

