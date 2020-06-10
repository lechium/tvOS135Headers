/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement, NSArray;

@interface TVLKeyedPreviewElement : TVLElement {

	NSString* _title;
	NSString* _rightLabel;
	NSString* _summary;
	NSString* _footnote;
	NSString* _rating;
	TVLImageElement* _image;
	NSArray* _metadataKeys;
	NSArray* _metadataValues;
	long long _likeCount;
	long long _dislikeCount;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * rightLabel;                   //@synthesize rightLabel=_rightLabel - In the implementation block
@property (nonatomic,copy) NSString * summary;                      //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSString * footnote;                     //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,copy) NSString * rating;                       //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;               //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSArray * metadataKeys;                //@synthesize metadataKeys=_metadataKeys - In the implementation block
@property (nonatomic,retain) NSArray * metadataValues;              //@synthesize metadataValues=_metadataValues - In the implementation block
@property (assign,nonatomic) long long likeCount;                   //@synthesize likeCount=_likeCount - In the implementation block
@property (assign,nonatomic) long long dislikeCount;                //@synthesize dislikeCount=_dislikeCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(TVLImageElement *)image;
-(void)setImage:(TVLImageElement *)arg1 ;
-(NSArray *)metadataKeys;
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(NSString *)footnote;
-(long long)likeCount;
-(NSString *)rightLabel;
-(NSArray *)metadataValues;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(long long)dislikeCount;
-(void)setLikeCount:(long long)arg1 ;
-(void)setDislikeCount:(long long)arg1 ;
-(void)setRightLabel:(NSString *)arg1 ;
-(void)setMetadataKeys:(NSArray *)arg1 ;
-(void)setMetadataValues:(NSArray *)arg1 ;
@end

