/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@class _TVStackingPosterView, UIImage, NSString, TVImageLayout, VUILabel, VUIRentalExpirationLabel;

@interface VUITVLockupViewCell : TVContainerCollectionViewCell <VUIRentalExpirationLabelDelegate> {

	_TVStackingPosterView* _stackingPosterView;
	UIImage* _placeholderImage;
	NSString* _placeholderImageString;
	TVImageLayout* _imageLayout;
	VUILabel* _titleLabel;
	VUIRentalExpirationLabel* _rentalExpirationLabel;

}

@property (nonatomic,retain) _TVStackingPosterView * stackingPosterView;                    //@synthesize stackingPosterView=_stackingPosterView - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                    //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) NSString * placeholderImageString;                             //@synthesize placeholderImageString=_placeholderImageString - In the implementation block
@property (nonatomic,retain) TVImageLayout * imageLayout;                                   //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUIRentalExpirationLabel * rentalExpirationLabel;              //@synthesize rentalExpirationLabel=_rentalExpirationLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureLockupCell:(id)arg1 withMedia:(id)arg2 width:(double)arg3 artworkDictionary:(id)arg4 forMetrics:(BOOL)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(id)selectingView;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(id)_placeholderImageWithLayout:(id)arg1 ;
-(id)_titleLabelForMediaEntity:(id)arg1 ;
-(id)_rentalExpirationLabelForMediaEntity:(id)arg1 ;
-(void)setRentalExpirationLabel:(VUIRentalExpirationLabel *)arg1 ;
-(void)setStackingPosterView:(_TVStackingPosterView *)arg1 ;
-(TVImageLayout *)imageLayout;
-(VUIRentalExpirationLabel *)rentalExpirationLabel;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(_TVStackingPosterView *)stackingPosterView;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(void)updateArtworkWithDictionary:(id)arg1 ;
-(NSString *)placeholderImageString;
-(void)setPlaceholderImageString:(NSString *)arg1 ;
@end
